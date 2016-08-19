`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:10:11 07/23/2016
// Design Name:   IF
// Module Name:   D:/study/simplemips1.1/test_if.v
// Project Name:  simplemips1.1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_if;

	// Inputs
	reg [31:0] addr_i;
	reg [31:0] inst_i;

	// Outputs
	wire [31:0] mem_addr_o;
	wire [31:0] addr_o;
	wire [31:0] inst_o;
	wire rom_ce_o;

	// Instantiate the Unit Under Test (UUT)
	IF uut (
		.addr_i(addr_i), 
		.inst_i(inst_i), 
		.mem_addr_o(mem_addr_o), 
		.addr_o(addr_o), 
		.inst_o(inst_o), 
		.rom_ce_o(rom_ce_o)
	);

	initial begin
		// Initialize Inputs
		addr_i = 0;
		inst_i = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

