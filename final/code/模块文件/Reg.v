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
    input wire[31:0] wdata
	
);
	 
    reg[31:0] regs[0:31];


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
