`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:01:17 07/23/2016
// Design Name:   PC
// Module Name:   D:/study/simplemips1.1/test_pc.v
// Project Name:  simplemips1.1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_pc;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] branch_addr;
	reg branch_flag;

	// Outputs
	wire [31:0] pc;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.clk(clk), 
		.rst(rst), 
		.branch_addr(branch_addr), 
		.branch_flag(branch_flag), 
		.pc(pc)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		branch_addr = 0;
		branch_flag = 0;

		// Wait 100 ns for global reset to finish
		#50;
       
		// Add stimulus here
		clk = 0;
		rst = 1;
		#100;
		branch_addr = 32'h11111111;
		branch_flag = 1;
		#150;
		clk = 1;
		#175;
		clk = 0;
		branch_flag = 0;
		#200;
		clk = 1;
		#225;
		clk = 0;
		#250;
		clk = 1;
	end
      
endmodule

