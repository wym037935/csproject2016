`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:12:22 07/23/2016
// Design Name:   inst_rom
// Module Name:   D:/study/simplemips1.1/test_instrom.v
// Project Name:  simplemips1.1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: inst_rom
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_instrom;

	// Inputs
	reg ce;

	// Instantiate the Unit Under Test (UUT)
	inst_rom uut (
		.ce(ce)
	);

	initial begin
		// Initialize Inputs
		ce = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

