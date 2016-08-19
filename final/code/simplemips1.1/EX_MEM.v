`include "header.v"

module EX_MEM(
    input wire clk,
    input wire rst,

    input wire[31:0] ex_wdata,
    input wire[4:0] ex_wd,
    input wire ex_wreg,


    input wire[7:0] ex_aluop,
    input wire[31:0] ex_mem_addr,
    input wire[31:0] ex_reg2,
	 

    output reg[31:0] mem_wdata,
    output reg[4:0] mem_wd,
    output reg mem_wreg,

    output reg[7:0] mem_aluop,
    output reg[31:0] mem_mem_addr,
    output reg[31:0] mem_reg2
    );

    always @ (posedge clk  or negedge rst)
    begin
      if (rst == `RstEnable) begin
          mem_wd <= `NOP_REG_ADDR;
          mem_wdata <= `zeroWord;
          mem_wreg <= `WriteDisable;
          mem_aluop <= `OP_NOP;
          mem_mem_addr <= `zeroWord;
          mem_reg2 <= `zeroWord;
      end else begin
			 mem_wd <= ex_wd;
          mem_wdata <= ex_wdata;
          mem_wreg <= ex_wreg;
          mem_aluop <= ex_aluop;
          mem_mem_addr <= ex_mem_addr;
          mem_reg2 <= ex_reg2;
		end
  end

endmodule
