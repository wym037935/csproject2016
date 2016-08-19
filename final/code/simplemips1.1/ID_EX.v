`include "header.v"

module ID_EX(
    input wire clk,
    input wire rst,
     input wire[31:0] id_inst,
    input wire[`ALU_SEL_BUS] id_alusel,
    input wire[`ALU_OP_BUS] id_aluop,
    input wire[31:0] id_reg1,
    input wire[31:0] id_reg2,
    input wire[4:0] id_wd,
    input wire id_wreg,

    input wire in_delay_i,
    input wire[31:0] link_addr_i,
    input wire next_delay_i,
	 
	output reg[31:0] ex_inst,
    output reg[`ALU_SEL_BUS] ex_alusel,
    output reg[`ALU_OP_BUS] ex_aluop,
    output reg[31:0] ex_reg1,
    output reg[31:0] ex_reg2,
    output reg[4:0] ex_wd,
    output reg ex_wreg,

    output reg in_delay_o,
    output reg[31:0] link_addr_o,
    output reg next_delay_o
	 
    );

    always @ (posedge clk  or negedge rst)
    begin
      if (rst == `RstEnable) begin
          ex_inst <= `zeroWord;
          ex_aluop <= `OP_NOP;
          ex_alusel <= `SEL_NOP;
          ex_reg1 <= `zeroWord;
          ex_reg2 <= `zeroWord;
          ex_wreg <= `WriteDisable;
          ex_wd <= `NOP_REG_ADDR;
          link_addr_o <= `zeroWord;
          next_delay_o <= `NOTINDELAYSLOT;
          in_delay_o <= `NOTINDELAYSLOT;
      end
      else begin
            ex_inst <= id_inst;
                ex_aluop <= id_aluop;
                ex_alusel <= id_alusel;
                ex_reg1 <= id_reg1;
                ex_reg2 <= id_reg2;
                ex_wreg <= id_wreg;
                ex_wd <= id_wd;
                link_addr_o <= link_addr_i;
                next_delay_o <= next_delay_i;
                in_delay_o <= in_delay_i;
       end
  end

endmodule
