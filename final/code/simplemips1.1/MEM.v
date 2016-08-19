`include "header.v"

module MEM(
    input wire rst,

    input wire[4:0] wd_i,
    input wire wreg_i,
    input wire[31:0] wdata_i,


    input wire[31:0] mem_addr_i,
    input wire[7:0] ALUOp_i,
    input wire[31:0] reg2_i,
    input wire[31:0] mem_data_i,

    output reg[4:0] wd_o,
    output reg wreg_o,
    output reg[31:0] wdata_o,

    output reg[31:0] mem_addr_o,
    output reg mem_we_o,
    output reg[3:0] mem_sel_o,
    output reg[31:0] mem_data_o,
    output reg mem_ce_o

    );

    always @ (*)
    begin
        if (rst == `RstEnable) begin
            wd_o <= `NOP_REG_ADDR;
            wreg_o <= `WriteDisable;
            wdata_o <= `zeroWord;
            mem_addr_o <= `zeroWord;
            mem_we_o <= `WriteDisable;
            mem_data_o <= `zeroWord;
            mem_sel_o <= 4'b0000;
            mem_ce_o <= `ChipDisable;
        end else begin
            wd_o <= wd_i;
            wreg_o <= wreg_i;
            wdata_o <= wdata_i;
				mem_addr_o <= `zeroWord;
				mem_we_o <= `WriteDisable;
				mem_data_o <= `zeroWord;
				mem_sel_o <= 4'b0000;
				mem_ce_o <= `ChipDisable;	
            case (ALUOp_i)
                `LW_OP: begin
                    mem_addr_o <= mem_addr_i;
                    mem_we_o <= `WriteDisable;
                    mem_ce_o <= `ChipEnable;
                    case (mem_addr_i[1:0])
                        2'b00: begin
									 wdata_o <= mem_data_i;
                            mem_sel_o <= 4'b1111;
                        end
                        default: begin
                            wdata_o <= `zeroWord;
                            mem_sel_o <= 4'b0000;
                        end
                    endcase
                end
                `SW_OP: begin
                    mem_addr_o <= mem_addr_i;
                    mem_we_o <= `WriteEnable;
                    mem_data_o <= reg2_i;
                    mem_ce_o <= `ChipEnable;
                    case (mem_addr_i[1:0])
                        2'b00: begin
                            mem_sel_o <= 4'b1111;
                        end
                        default: begin
                            mem_sel_o <= 4'b0000;
                        end
                    endcase
						  
                end
            endcase
        end
    end

endmodule
