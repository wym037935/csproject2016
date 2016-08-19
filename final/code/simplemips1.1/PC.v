`include "header.v"

module PC(
	input wire clk,
	input wire rst,
	input wire[31:0] branch_addr,
	input wire branch_flag,

	output reg[31:0] pc
);

	 
	wire[31:0] pc_next;
	assign pc_next = (branch_flag == `BRANCH) ? branch_addr : pc + 4'h4;
	 
    always @ (posedge clk or negedge rst) begin
		if (rst == 1'b0) begin
			pc <= 32'hbfc00000;
      end else begin
			pc <= pc_next;
		end
    end
endmodule
