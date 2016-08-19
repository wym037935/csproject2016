`include "header.v"

module MEM_WB(
    input wire clk,
    input wire rst,

    input wire[31:0] mem_wdata,
    input wire[4:0] mem_wd,
    input wire mem_wreg,


    output reg[31:0] wb_wdata,
    output reg[4:0] wb_wd,
    output reg wb_wreg


	 );

    always @ (posedge clk  or negedge rst)
    begin
      if (rst == `RstEnable ) begin
          wb_wd <= `NOP_REG_ADDR;
          wb_wdata <= `zeroWord;
          wb_wreg <= `WriteDisable;
		end else begin
			 wb_wd <= mem_wd;
          wb_wdata <= mem_wdata;
          wb_wreg <= mem_wreg;
		end
 end

endmodule
