`include "header.v"


module Reg(
    input wire clk,
    input wire rst,
    input wire re1,
    input wire[4:0] raddr1,
	 output reg[31:0] rdata1,
	 input wire re2,
    input wire[4:0] raddr2,
    output reg[31:0] rdata2,
    input wire we,
    input wire[4:0] waddr,
    input wire[31:0] wdata,
	 
	 input wire[4:0] reg_addr,
	 output reg[15:0] led_output
);
	 
    reg[31:0] regs[0:31];

	 always @(*)begin
		  case 	(reg_addr)	
				5'b00000:begin
					led_output <= regs[0][15:0]	;
				end
				5'b00001:begin
					led_output <= regs[1][15:0];
				end
				5'b00010:begin
					led_output <= regs[2][15:0];
				end
				5'b00011:begin
					led_output <= regs[3][15:0];
				end
				5'b00100:begin
					led_output <= regs[4][15:0];
				end
				5'b00101:begin
					led_output <= regs[5][15:0];
				end
				5'b00110:begin
					led_output <= regs[6][15:0];
				end
				5'b00111:begin
					led_output <= regs[7][15:0];
				end
				5'b01000:begin
					led_output <= regs[8][15:0];
				end
				5'b01001:begin
					led_output <= regs[9][15:0];
				end
				5'b01010:begin
					led_output <= regs[10][15:0];
				end
				5'b01011:begin
					led_output <= regs[11][15:0];
				end
				5'b01100:begin
					led_output <= regs[12][15:0];
				end
				5'b01101:begin
					led_output <= regs[13][15:0];
				end
				5'b01110:begin
					led_output <= regs[14][15:0];
				end
				5'b01111:begin
					led_output <= regs[15][15:0];
				end
				5'b10000:begin
					led_output <= regs[16][15:0];
				end
				5'b10001:begin
					led_output <= regs[17][15:0];
				end
				5'b10010:begin
					led_output <= regs[18][15:0];
				end
				5'b10011:begin
					led_output <= regs[19][15:0];
				end
				5'b10100:begin
					led_output <= regs[20][15:0];
				end
				5'b10101:begin
					led_output <= regs[21][15:0];
				end
				5'b10110:begin
					led_output <= regs[22][15:0];
				end
				5'b10111:begin
					led_output <= regs[23][15:0];
				end
				5'b11000:begin
					led_output <= regs[24][15:0];
				end
				5'b11001:begin
					led_output <= regs[25][15:0];
				end
				5'b11010:begin
					led_output <= regs[26][15:0];
				end
				5'b11011:begin
					led_output <= regs[27][15:0];
				end
				5'b11100:begin
					led_output <= regs[28][15:0];
				end
				5'b11101:begin
					led_output <= regs[29][15:0];
				end
				5'b11110:begin
					led_output <= regs[30][15:0];
				end
				5'b11111:begin
					led_output <= regs[31][15:0];
				end
				default:begin
					led_output <= 32'h00000000;
				end
			endcase
		end
		
    always @ (posedge clk) begin
        if (rst == `RstDisable) begin
            if ((we == `WriteEnable) && (waddr != 5'h0)) begin
                regs[waddr] <= wdata;
            end
        end else begin
            regs[0] <= 32'h00000000;
            regs[1] <= 32'h00000000;
            regs[2] <= 32'h00000000;
            regs[3] <= 32'h00000000;
            regs[4] <= 32'h00000000;
            regs[5] <= 32'h00000000;
            regs[6] <= 32'h00000000;
            regs[7] <= 32'h00000000;
            regs[8] <= 32'h00000000;
            regs[9] <= 32'h00000000;
            regs[10] <= 32'h00000000;
            regs[11] <= 32'h00000000;
            regs[12] <= 32'h00000000;
            regs[13] <= 32'h00000000;
            regs[14] <= 32'h00000000;
            regs[15] <= 32'h00000000;
            regs[16] <= 32'h00000000;
            regs[17] <= 32'h00000000;
            regs[18] <= 32'h00000000;
            regs[19] <= 32'h00000000;
            regs[20] <= 32'h00000000;
            regs[21] <= 32'h00000000;
            regs[22] <= 32'h00000000;
            regs[23] <= 32'h00000000;
            regs[24] <= 32'h00000000;
            regs[25] <= 32'h00000000;
            regs[26] <= 32'h00000000;
            regs[27] <= 32'h00000000;
            regs[28] <= 32'h00000000;
            regs[29] <= 32'h00000000;
            regs[30] <= 32'h00000000;
            regs[31] <= 32'h00000000;
		  end
    end


    always @ (*) begin
        if (rst == `RstEnable) begin
            rdata1 <= `zeroWord;
        end else if (raddr1 == 5'h0) begin
            rdata1 <= `zeroWord;
        end else if ((raddr1 == waddr) && (we == `WriteEnable) && (re1 == `ReadEnable)) begin
            rdata1 <= wdata;
        end else if (re1 == `ReadEnable) begin
            rdata1 <= regs[raddr1];
        end else begin
            rdata1 <= `zeroWord;
        end
    end


    always @ (*) begin
        if (rst == `RstEnable) begin
            rdata2 <= `zeroWord;
        end else if (raddr2 == 5'h0) begin
            rdata2 <= `zeroWord;
        end else if ((raddr2 == waddr) && (we == `WriteEnable) && (re2 == `ReadEnable)) begin
            rdata2 <= wdata;
        end else if (re2 == `ReadEnable) begin
            rdata2 <= regs[raddr2];
        end else begin
            rdata2 <= `zeroWord;
        end
    end


endmodule
