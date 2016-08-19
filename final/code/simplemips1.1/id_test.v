`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:15:19 07/23/2016
// Design Name:   ID
// Module Name:   D:/study/simplemips1.1/id_test.v
// Project Name:  simplemips1.1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ID
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module id_test;

	// Inputs
	reg rst;
	reg [31:0] PC_i;
	reg [31:0] Inst_i;
	reg [31:0] Reg1_data_i;
	reg [31:0] Reg2_data_i;
	reg in_delay_i;

	// Outputs
	wire [31:0] inst_o;
	wire [2:0] ALUsel_o;
	wire [7:0] ALUop_o;
	wire [31:0] Reg1_o;
	wire [31:0] Reg2_o;
	wire [4:0] wd_o;
	wire wreg_o;
	wire Reg2_read_o;
	wire [4:0] Reg2_addr_o;
	wire Reg1_read_o;
	wire [4:0] Reg1_addr_o;
	wire in_delay_o;
	wire [31:0] link_addr_o;
	wire next_delay;
	wire branch_flag;
	wire [31:0] branch_addr;

	// Instantiate the Unit Under Test (UUT)
	ID uut (
		.rst(rst), 
		.PC_i(PC_i), 
		.Inst_i(Inst_i), 
		.Reg1_data_i(Reg1_data_i), 
		.Reg2_data_i(Reg2_data_i), 
		.in_delay_i(in_delay_i), 
		.inst_o(inst_o), 
		.ALUsel_o(ALUsel_o), 
		.ALUop_o(ALUop_o), 
		.Reg1_o(Reg1_o), 
		.Reg2_o(Reg2_o), 
		.wd_o(wd_o), 
		.wreg_o(wreg_o), 
		.Reg2_read_o(Reg2_read_o), 
		.Reg2_addr_o(Reg2_addr_o), 
		.Reg1_read_o(Reg1_read_o), 
		.Reg1_addr_o(Reg1_addr_o), 
		.in_delay_o(in_delay_o), 
		.link_addr_o(link_addr_o), 
		.next_delay(next_delay), 
		.branch_flag(branch_flag), 
		.branch_addr(branch_addr)
	);

	initial begin
		rst = 1'b1;
		#3000 $stop;
	end
		 

	initial begin
		// Initialize Inputs
		PC_i = 32'h12121212;
		Inst_i = 32'b000000000000000000000000000001000;
		Reg1_data_i = 32'b00000000000000000000000000000011;
		Reg2_data_i = 32'b00000000000000000000000000000010;
		in_delay_i = 1'b0;
		#1000;
		
	end
      
endmodule

