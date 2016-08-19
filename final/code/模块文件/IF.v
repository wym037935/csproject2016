`include "header.v"

module IF(
	input wire[31:0] addr_i,
	input wire[31:0] inst_i,

	
	output reg[31:0] mem_addr_o,
	output reg[31:0] addr_o,
	output reg[31:0] inst_o
);
	 
    always @ (*) begin
			addr_o <= addr_i;
			mem_addr_o <= addr_i;
			inst_o <= inst_i;
		end

	 
endmodule
