`include "header.v"


module MMU(
	input wire clk,
	input wire rst,
	
	//---------interface for data read/write-------------
	input wire ce,
	//enable of this module
	input wire we_i,
	//writing enable
	input wire[3:0] sel,
	//selection of specific byte in a 4-byte-long word
	input wire[31:0] data_i,
	//input data from register
	input wire[31:0] addr,
	//disired address where data is read
	output wire[31:0] data_o,
	//output data
	
	//---------interface for instructions read-----------
	//reading enable of pc address
	input wire[31:0] addr_pc,
	//pc address
	output wire[31:0] data_inst,
	//output instruction
	
	//------------interaction with devices--------------
	output reg [31:0] dev_mem_addr,
	input wire [31:0] dev_mem_data_in,
	output reg [31:0] dev_mem_data_out,
	output reg dev_mem_is_write
);
	
	
	
	localparam READ = 2'b00, WRITE_SB = 2'b01, WRITE_DO_WRITE = 2'b10, WRITE_DO_WRITE1 = 2'b11;
	reg [1:0] state;
	
	
	wire [31:0] mem_unaligned_addr = (ce != `ChipEnable) ? addr_pc: addr;
	
	assign data_inst = dev_mem_data_in;
	assign data_o = dev_mem_data_in;
	
	wire PCWorkFlag = (state == READ && ce != `ChipEnable);
	
	wire [31:0] mem_vrt_addr = {mem_unaligned_addr[31:2], 2'b00};
	
	wire fourAlignedFlag = mem_unaligned_addr[1:0] == 2'b00;


	

	always @(negedge clk or negedge rst) begin
		if (rst == `RstEnable) begin
			state <= READ;
			dev_mem_is_write <= 0;
			dev_mem_addr <= 0;
		end else begin
			dev_mem_addr <= {3'b0, mem_vrt_addr[28:0]};

			case (state) 
			READ:
			
				if ( ce==`ChipEnable) begin
					dev_mem_data_out <= data_i;
					if (we_i==`WriteEnable) begin
						if (sel!=4'b1111) begin
							state <= WRITE_SB;
							dev_mem_is_write <= 0;
						end
						else begin
							state <= WRITE_DO_WRITE;
							dev_mem_is_write <= 1;
						end
					end
				end 
				else 
					dev_mem_is_write <= 0;
				
			WRITE_SB: begin
				case(sel)
					4'b0001:
						dev_mem_data_out <= { dev_mem_data_in[31:8], dev_mem_data_out[7:0] };
					4'b0010:
						dev_mem_data_out <= { dev_mem_data_in[31:16], dev_mem_data_out[7:0], dev_mem_data_in[7:0]};
					4'b0100:
						dev_mem_data_out <= { dev_mem_data_in[31:24], dev_mem_data_out[7:0], dev_mem_data_in[15:0]};
					4'b1000:
						dev_mem_data_out <= { dev_mem_data_out[7:0], dev_mem_data_in[23:0] };
				endcase
				state <= WRITE_DO_WRITE;
				dev_mem_is_write <= 1;
			end
			
			WRITE_DO_WRITE:begin
					state <= READ;
					dev_mem_is_write <= 0;
			end
			
			default:begin
				state<=READ;
				dev_mem_is_write <= 0;
			end
		endcase
	end
	end

endmodule
