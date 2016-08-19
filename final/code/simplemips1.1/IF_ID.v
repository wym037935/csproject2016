`include "header.v"

module IF_ID(
    input wire clk,
    input wire rst,

    input wire[31:0] if_pc,
    input wire[31:0] if_inst,

    output reg[31:0] id_pc,
    output reg[31:0] id_inst
    );

    always @ (posedge clk  or negedge rst)
    begin
      if (rst == `RstEnable) begin
          id_pc <= `zeroWord;
          id_inst <= `zeroWord;
      end else begin
			 id_pc <= if_pc;
          id_inst <= if_inst;
		end
  end

endmodule
