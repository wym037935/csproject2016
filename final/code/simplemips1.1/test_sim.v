// Verilog test fixture created from schematic D:\study\simplemips1.1\simplemipst.sch - Sun Jul 24 15:49:08 2016

`timescale 1ns / 1ps

module simplemipst_simplemipst_sch_tb();

// Inputs
   reg clk_i;
   reg XLXN_244;
   reg XLXN_256;
   reg XLXN_257;

// Output
   wire XLXN_243;
   wire XLXN_245;
   wire XLXN_246;
   wire XLXN_247;
   wire XLXN_248;
   wire XLXN_249;
   wire XLXN_250;
   wire [31:0] XLXN_251;
   wire [19:0] XLXN_252;
   wire [19:0] XLXN_253;

// Bidirs
   wire [31:0] XLXN_254;
   wire [31:0] XLXN_255;

// Instantiate the UUT
   simplemipst UUT (
		.clk_i(clk_i), 
		.XLXN_243(XLXN_243), 
		.XLXN_244(XLXN_244), 
		.XLXN_245(XLXN_245), 
		.XLXN_246(XLXN_246), 
		.XLXN_247(XLXN_247), 
		.XLXN_248(XLXN_248), 
		.XLXN_249(XLXN_249), 
		.XLXN_250(XLXN_250), 
		.XLXN_251(XLXN_251), 
		.XLXN_252(XLXN_252), 
		.XLXN_253(XLXN_253), 
		.XLXN_254(XLXN_254), 
		.XLXN_255(XLXN_255), 
		.XLXN_256(XLXN_256), 
		.XLXN_257(XLXN_257)
   );
// Initialize Inputs
   `ifdef auto_init
       initial begin
		clk_i = 0;
		XLXN_244 = 0;
		XLXN_254 = 0;
		XLXN_255 = 0;
		XLXN_256 = 0;
		XLXN_257 = 0;
   `endif
	
	initial begin
	#5
		XLXN_256 = 1'b0;
		XLXN_257 = 1'b0;
		clk_i = 1'b0;
	#10
		XLXN_256 = 1'b1;
		XLXN_257 = 1'b1;
		clk_i = 1'b1;
		
	forever #10 clk_i = ~clk_i;
	#100 $stop;
	end 
		
endmodule
