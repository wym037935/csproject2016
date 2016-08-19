`include "header.v"

module ID(
    input wire rst,
	 input wire[31:0] PC_i,
	 input wire[31:0] Inst_i,
	 input wire[31:0] Reg1_data_i,
	 input wire[31:0] Reg2_data_i,
	 input wire in_delay_i,
	 
	 output wire[31:0] inst_o,
	 output reg [2:0] ALUsel_o,		//defined in header.v, 8 types in total
	 output reg [7:0] ALUop_o,		//defined in header.v, 47 types of instructions in total 
	 output reg [31:0] Reg1_o,		//value of register 1
	 output reg [31:0] Reg2_o,		//value of register 2
	 output reg [4:0] wd_o,			//target register if write
	 output reg wreg_o,				//whether write to register or not
	 output reg Reg2_read_o,		//nothing to do with ALU
	 output reg [4:0] Reg2_addr_o,	//nothing to do with ALU
	 output reg Reg1_read_o,		//nothing to do with ALU
	 output reg [4:0] Reg1_addr_o,	//nothing to do with ALU
	 output wire in_delay_o,				//indicator of delay slot for CURRENT instruction
	 output reg [31:0] link_addr_o,	//link address to be put in wd_o if neccessary
	 output reg next_delay,			//indicator of delay slot for NEXT instruction
	 output reg branch_flag,		//whether jump/branch or not
	 output reg [31:0] branch_addr	//target address if jump/branch
    );

	wire[5:0] op=Inst_i[31:26];
	wire[4:0] op2=Inst_i[10:6];
	wire[5:0] op3=Inst_i[5:0];
	wire[4:0] op4=Inst_i[20:16];
	wire[4:0] rs=Inst_i[25:21];
	wire[4:0] rt=Inst_i[20:16];
	wire[4:0] rd=Inst_i[15:11];

	reg[31:0] imm;

assign inst_o=Inst_i;

//Reg1_o
always @(*)
begin
	
	if (Reg1_read_o == 1'b1)
	begin
		Reg1_o<=Reg1_data_i;
	end else 
	if (Reg1_read_o == 1'b0)
	begin
		Reg1_o <= imm;
	end else
	begin
		Reg1_o <= `zeroWord;
	end
end

//Reg2_o
always @(*)
begin
	if (Reg2_read_o==1'b1)
	begin 
		Reg2_o<=Reg2_data_i;
	end else
	if (Reg2_read_o==1'b0)
	begin
		Reg2_o<=imm;
	end else
	begin
		Reg2_o<=`zeroWord;
	end
end

assign in_delay_o = in_delay_i;

wire [31:0] PC_4;
assign PC_4=PC_i+4;

wire [31:0] PC_8;
assign PC_8=PC_i+8;

wire [31:0] JUMP_ADDR_26;
assign JUMP_ADDR_26={PC_i[31:28], Inst_i[25:0], 2'b00};

wire [31:0] JUMP_ADDR_16;
assign JUMP_ADDR_16=(PC_i+4)+{{14{Inst_i[15]}}, Inst_i[15:0], 2'b00};
//sign extented

wire [31:0] ZERO_IMM_16;
assign ZERO_IMM_16={ {16{1'b0}} , Inst_i[15:0]};

wire [31:0] SIGNED_IMM_16;
assign SIGNED_IMM_16={ {16{Inst_i[15]}}, Inst_i[15:0] };

//ALUsel_o		ALUop_o
//wd_o			wreg_o
//Reg1_read_o	Reg1_addr_o
//Reg2_read_o	Reg2_addr_o
//link_addr_o
//next_delay_o
//branch_flag	branch_addr
//STOP

task InvalidInstruction; begin
	ALUsel_o<=`SHIFT_SEL;
	ALUop_o<=`SLL_OP; 
	wreg_o<=1'b0;
	Reg1_read_o<=1'b0;
	Reg2_read_o<=1'b0;
	next_delay<=1'b0;
	branch_flag<=1'b0;
end 
endtask

always @(*)
begin
	if (rst==`RstEnable) begin
		//NOP
		ALUsel_o<=`SHIFT_SEL;
		ALUop_o<=`SLL_OP; 
		wd_o <= 0;
		Reg1_addr_o <= 0;
		Reg2_addr_o <= 0;
		link_addr_o <= 0;
		wreg_o<=1'b0;
		Reg1_read_o<=1'b0;
		Reg2_read_o<=1'b0;
		next_delay<=1'b0;
		branch_flag<=1'b0;
		branch_addr<=0;
		imm <= 0;
	end
	else begin
	
	
		ALUsel_o<=`SHIFT_SEL;
		ALUop_o<=`SLL_OP; 
		wd_o <= 0;
		Reg1_addr_o <= 0;
		Reg2_addr_o <= 0;
		link_addr_o <= 0;
		wreg_o<=1'b0;
		Reg1_read_o<=1'b0;
		Reg2_read_o<=1'b0;
		next_delay<=1'b0;
		branch_flag<=1'b0;
		branch_addr<=0;
		imm <= 0;
		case(op)
			//000000
			6'b000000: begin
				case(op3)
					//AND
					6'b100100:begin
						ALUsel_o<=`LOGIC_SEL;
						wreg_o<=1'b1;
						wd_o<=rd;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rs;
						Reg2_read_o<=1'b1;
						Reg2_addr_o<=rt;
						next_delay<=1'b0;
						branch_flag<=1'b0;
						ALUop_o<=`AND_OP;
					end
					
					//OR
					6'b100101:begin
						ALUsel_o<=`LOGIC_SEL;
						wreg_o<=1'b1;
						wd_o<=rd;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rs;
						Reg2_read_o<=1'b1;
						Reg2_addr_o<=rt;
						next_delay<=1'b0;
						branch_flag<=1'b0;
						ALUop_o<=`OR_OP;
					end
					
					//XOR
					6'b100110:begin
						ALUsel_o<=`LOGIC_SEL;
						wreg_o<=1'b1;
						wd_o<=rd;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rs;
						Reg2_read_o<=1'b1;
						Reg2_addr_o<=rt;
						next_delay<=1'b0;
						branch_flag<=1'b0;
						ALUop_o<=`XOR_OP;
					end
					
					//NOR
					6'b100111:begin
						ALUsel_o<=`LOGIC_SEL;
						wreg_o<=1'b1;
						wd_o<=rd;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rs;
						Reg2_read_o<=1'b1;
						Reg2_addr_o<=rt;
						next_delay<=1'b0;
						branch_flag<=1'b0;
						ALUop_o<=`NOR_OP;
					end
					
					//SLL
					//NOP IS IGNORED!!!!
					6'b000000:begin 
						ALUsel_o<=`SHIFT_SEL;
						wreg_o<=1'b1;
						wd_o<=rd;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rt;
						Reg2_read_o<=1'b0;
						next_delay<=1'b0;
						branch_flag<=1'b0;
						ALUop_o<=`SLL_OP;
						imm<={{27{1'b0}},Inst_i[10:6]};
					end
					
					//SRL
					6'b000010:begin
						ALUsel_o<=`SHIFT_SEL;
						wreg_o<=1'b1;
						wd_o<=rd;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rt;
						Reg2_read_o<=1'b0;
						next_delay<=1'b0;
						branch_flag<=1'b0;
						ALUop_o<=`SRL_OP; 
						imm<={{27{1'b0}},Inst_i[10:6]};
					end
					
					//SRA
					6'b000011:begin
						ALUsel_o<=`SHIFT_SEL;
						wreg_o<=1'b1;
						wd_o<=rd;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rt;
						Reg2_read_o<=1'b0;
						next_delay<=1'b0;
						branch_flag<=1'b0;
						ALUop_o<=`SRA_OP; 
						imm<={{27{1'b0}},Inst_i[10:6]};
					end
					
					//SLLV
					6'b000100:begin
						ALUsel_o<=`SHIFT_SEL;
						wreg_o<=1;
						wd_o<=rd;
						Reg1_read_o<=1;
						Reg1_addr_o<=rt;
						Reg2_read_o<=1;
						Reg2_addr_o<=rs;
						next_delay<=0;
						branch_flag<=0;
						ALUop_o<=`SLLV_OP; 
					end
					
					//SRLV
					6'b000110:begin
						ALUsel_o<=`SHIFT_SEL;
						wreg_o<=1'b1;
						wd_o<=rd;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rt;
						Reg2_read_o<=1'b1;
						Reg2_addr_o<=rs;
						next_delay<=1'b0;
						branch_flag<=1'b0;
						ALUop_o<=`SRLV_OP; 
					end
					
					//SRAV
					6'b000111:begin
						ALUsel_o<=`SHIFT_SEL;
						wreg_o<=1'b1;
						wd_o<=rd;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rt;
						Reg2_read_o<=1'b1;
						Reg2_addr_o<=rs;
						next_delay<=1'b0;
						branch_flag<=1'b0;
						ALUop_o<=`SRAV_OP; 
					end
					
					//MOVN
					6'b001011:begin
							ALUsel_o<=`MOVE_SEL;
								wreg_o<=1'b1;
							wd_o<=rd;
							Reg1_read_o<=1'b1;
							Reg1_addr_o<=rs;
							Reg2_read_o<=1'b1;
							Reg2_addr_o<=rt;
							next_delay<=1'b0;
							branch_flag<=1'b0;
							ALUop_o<=`MOVN_OP; 
					  end	
                    
				  //MOVZ
					6'b001010:begin
						ALUsel_o<=`MOVE_SEL;
							wreg_o<=1'b1;
						wd_o<=rd;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rs;
						Reg2_read_o<=1'b1;
						Reg2_addr_o<=rt;
						next_delay<=1'b0;
						branch_flag<=1'b0;
						ALUop_o<=`MOVZ_OP; 
				  end	        
				  
					//ADDU
					6'b100001:begin
						ALUsel_o<=`ARITH_SEL;
						wreg_o<=1'b1;
						wd_o<=rd;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rs;
						Reg2_read_o<=1'b1;
						Reg2_addr_o<=rt;
						next_delay<=1'b0;
						branch_flag<=1'b0;
						ALUop_o<=`ADDU_OP;
					end
					
					//SUBU
					6'b100011:begin
						ALUsel_o<=`ARITH_SEL;
						wreg_o<=1'b1;
						wd_o<=rd;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rs;
						Reg2_read_o<=1'b1;
						Reg2_addr_o<=rt;
						next_delay<=1'b0;
						branch_flag<=1'b0;
						ALUop_o<=`SUBU_OP;
					end

					//SLT
					6'b101010:begin
						ALUsel_o<=`ARITH_SEL;
						wreg_o<=1'b1;
						wd_o<=rd;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rs;
						Reg2_read_o<=1'b1;
						Reg2_addr_o<=rt;
						next_delay<=1'b0;
						branch_flag<=1'b0;
						ALUop_o<=`SLT_OP;
					end
					
					//SLTU
					6'b101011:begin
						ALUsel_o<=`ARITH_SEL;
						wreg_o<=1'b1;
						wd_o<=rd;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rs;
						Reg2_read_o<=1'b1;
						Reg2_addr_o<=rt;
						next_delay<=1'b0;
						branch_flag<=1'b0;
						ALUop_o<=`SLTU_OP;
					end
					
					
					
					//JR
					6'b001000:begin
						ALUsel_o<=`BRANCH_SEL;
						ALUop_o<=`JR_OP;
						wreg_o<=1'b0;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rs;
						Reg2_read_o<=1'b0;
						next_delay<=1'b1;
						branch_flag<=1'b1;
						branch_addr<=Reg1_o;
					end
					
					//JALR
					6'b001001:begin
						ALUsel_o<=`BRANCH_SEL;
						wreg_o<=1'b1;
						wd_o<=rd;
						link_addr_o<=PC_8;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rs;
						Reg2_read_o<=1'b0;
						next_delay<=1'b1;
						branch_flag<=1'b1;
						branch_addr<=Reg1_o;
						ALUop_o<=`JALR_OP;
					end
					
					default:
						InvalidInstruction();
				endcase
			end
			
			//ORI
			6'b001101: begin
				ALUsel_o<=`LOGIC_SEL;
				ALUop_o<=`ORI_OP;
				wreg_o<=1'b1;
				wd_o<=rt;
				Reg1_read_o<=1'b1;
				Reg1_addr_o<=rs;
				Reg2_read_o<=1'b0;
				branch_flag<=1'b0;
				next_delay<=1'b0;
				imm<=ZERO_IMM_16;
			end
			
			//ANDI
			6'b001100:begin
				ALUsel_o<=`LOGIC_SEL;
				ALUop_o<=`ANDI_OP;
				wreg_o<=1'b1;
				wd_o<=rt;
				Reg1_read_o<=1'b1;
				Reg1_addr_o<=rs;
				Reg2_read_o<=1'b0;
				branch_flag<=1'b0;
				next_delay<=1'b0;
				imm<=ZERO_IMM_16;
			end
			
			//XORI
			6'b001110:begin
				ALUsel_o<=`LOGIC_SEL;
				ALUop_o<=`XORI_OP;
				wreg_o<=1'b1;
				wd_o<=rt;
				Reg1_read_o<=1'b1;
				Reg1_addr_o<=rs;
				Reg2_read_o<=1'b0;
				branch_flag<=1'b0;
				next_delay<=1'b0;
				imm<=ZERO_IMM_16;
			end
			
			//LUI
			6'b001111:begin
				ALUsel_o<=`LOGIC_SEL;
				ALUop_o<=`LUI_OP;
				wreg_o<=1'b1;
				wd_o<=rt;
				Reg1_read_o<=1'b0;
				Reg2_read_o<=1'b0;
				branch_flag<=1'b0;
				next_delay<=1'b0;
				imm<=ZERO_IMM_16;
			end
			
			//ADDIU
			6'b001001:begin
				ALUsel_o<=`ARITH_SEL;
				ALUop_o<=`ADDIU_OP;
				wreg_o<=1'b1;
				wd_o<=rt;
				Reg1_read_o<=1'b1;
				Reg1_addr_o<=rs;
				Reg2_read_o<=1'b0;
				branch_flag<=1'b0;
				next_delay<=1'b0;
				imm<=SIGNED_IMM_16;
			end
			
			//SLTI
			6'b001010:begin
				ALUsel_o<=`ARITH_SEL;
				ALUop_o<=`SLTI_OP;
				wreg_o<=1'b1;
				wd_o<=rt;
				Reg1_read_o<=1'b1;
				Reg1_addr_o<=rs;
				Reg2_read_o<=1'b0;
				branch_flag<=1'b0;
				next_delay<=1'b0;
				imm<=SIGNED_IMM_16;
			end
			
			//SLTIU
			6'b001011:begin
				ALUsel_o<=`ARITH_SEL;
				ALUop_o<=`SLTIU_OP;
				wreg_o<=1'b1;
				wd_o<=rt;
				Reg1_read_o<=1'b1;
				Reg1_addr_o<=rs;
				Reg2_read_o<=1'b0;
				branch_flag<=1'b0;
				next_delay<=1'b0;
				imm<=SIGNED_IMM_16;
			end
			
			
			
			
		
	
			//LW
			6'b100011:begin
				ALUsel_o<=`MEM_SEL;
				ALUop_o<=`LW_OP;
				wreg_o<=1'b1;
				wd_o<=rt;
				Reg1_read_o<=1'b1;
				Reg1_addr_o<=rs;
				Reg2_read_o<=1'b0;
				branch_flag<=1'b0;
				next_delay<=1'b0;
				imm<=SIGNED_IMM_16;
			end
			
			
			//SW
			6'b101011:begin
				ALUsel_o<=`MEM_SEL;
				ALUop_o<=`SW_OP;
				wreg_o<=1'b0;
				Reg1_read_o<=1'b1;
				Reg1_addr_o<=rs;
				Reg2_read_o<=1'b1;
				Reg2_addr_o<=rt;
				branch_flag<=1'b0;
				next_delay<=1'b0;
			end
			
			//J
			6'b000010:begin
				ALUsel_o<=`BRANCH_SEL;
				ALUop_o<=`J_OP;
				wreg_o<=1'b0;
				Reg1_read_o<=1'b0;
				Reg2_read_o<=1'b0;
				branch_flag<=1'b1;
				next_delay<=1'b1;
				branch_addr<= JUMP_ADDR_26;
			end
			
			//JAL
			6'b000011:begin
				ALUsel_o<=`BRANCH_SEL;
				ALUop_o<=`JAL_OP;
				wreg_o<=1'b1;
				wd_o<=5'b11111;//reg[31]
				Reg1_read_o<=1'b0;
				Reg2_read_o<=1'b0;
				next_delay<=1'b1;
				link_addr_o<=PC_8;
				branch_flag<=1'b1;
				branch_addr<=JUMP_ADDR_26;
			end
			
			//BEQ
			6'b000100:begin
				ALUsel_o<=`BRANCH_SEL;
				ALUop_o<=`BEQ_OP;
				wreg_o<=1'b0;
				Reg1_read_o<=1'b1;
				Reg1_addr_o<=rs;
				Reg2_read_o<=1'b1;
				Reg2_addr_o<=rt;
				next_delay<=1'b1;
				if (Reg1_o==Reg2_o)begin
					branch_flag<=1'b1;
					branch_addr<=JUMP_ADDR_16;
				end else
				begin
					branch_flag<=1'b0;
				end
			end
			
			//BGTZ
			6'b000111:begin
				ALUsel_o<=`BRANCH_SEL;
				ALUop_o<=`BGTZ_OP; 
				wreg_o<=1'b0;
				Reg1_read_o<=1'b1;
				Reg1_addr_o<=rs;
				Reg2_read_o<=1'b0;
				next_delay<=1'b1;
				if ((Reg1_o[31]==1'b0) && (Reg1_o!=`zeroWord))begin
					branch_flag<=1'b1;
					branch_addr<=JUMP_ADDR_16;
				end
				else
				begin
					branch_flag<=1'b0;
				end
			end
			
			//BLEZ
			6'b000110:begin
				ALUsel_o<=`BRANCH_SEL;
				ALUop_o<=`BLEZ_OP;
				wreg_o<=1'b0;
				Reg1_read_o<=1'b1;
				Reg1_addr_o<=rs;
				Reg2_read_o<=1'b0;
				next_delay<=1'b1;
				if ((Reg1_o[31]==1'b1) || (Reg1_o==`zeroWord)) begin
					branch_flag<=1'b1;
					branch_addr<=JUMP_ADDR_16;
				end else
				begin
					branch_flag<=1'b0;
				end
			end
			
			//BNE
			6'b000101:begin
				ALUsel_o<=`BRANCH_SEL;
				ALUop_o<=`BNE_OP;
				wreg_o<=1'b0;
				Reg1_read_o<=1'b1;
				Reg1_addr_o<=rs;
				Reg2_read_o<=1'b1;
				Reg2_addr_o<=rt;
				next_delay<=1'b1;
				if (Reg1_o!=Reg2_o)begin
					branch_flag<=1'b1;
					branch_addr<=JUMP_ADDR_16;
				end else
				begin
					branch_flag<=1'b0;
				end
			end
			
			//BLTZ && BGEZ
			6'b000001:begin
				case(op4)
				
					//BLTZ
					5'b00000:begin
						ALUsel_o<=`BRANCH_SEL;
						ALUop_o<=`BLTZ_OP;
						wreg_o<=1'b0;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rs;
						Reg2_read_o<=1'b0;
						next_delay<=1'b1;
						if (Reg1_o[31]==1'b1) begin
							branch_flag<=1'b1;
							branch_addr<=JUMP_ADDR_16;
						end else
						begin
							branch_flag<=1'b0;
						end
					end
					
					//BGEZ
					5'b00001:begin
						ALUsel_o<=`BRANCH_SEL;
						ALUop_o<=`BGEZ_OP;
						wreg_o<=1'b0;
						Reg1_read_o<=1'b1;
						Reg1_addr_o<=rs;
						Reg2_read_o<=1'b0;
						next_delay<=1'b1;
						if (Reg1_o[31]==1'b0) begin
							branch_flag<=1'b1;
							branch_addr<=JUMP_ADDR_16;
						end else
						begin
							branch_flag<=1'b0;
						end
					end
		
					default:
						InvalidInstruction();
				endcase
			end
			
			default:
					InvalidInstruction();
		endcase
	end
end


endmodule
