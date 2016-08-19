`include "header.v"

module EX(
  input wire        rst,  
  input wire[31:0]  inst_i,
  input wire[`ALU_SEL_BUS]  alusel_i,
  input wire[`ALU_OP_BUS]   aluop_i,
  input wire[31:0]  reg1_i,
  input wire[31:0]  reg2_i,
  input wire[4:0]   wd_i,
  input wire        wreg_i,
  input wire        in_delay_i,
  input wire[31:0]  link_addr_i,
  
  output reg[31:0]  mem_addr_o,
  output reg[4:0]   wd_o,
  output reg        wreg_o,
  output reg[31:0]  wdata_o,
  output wire[`ALU_OP_BUS]  aluop_o,
  output wire[31:0]  reg2_o

  
  );
  

  reg[31:0] logicout;
  reg[31:0] shiftout;
  reg[31:0] moveout;
  reg[63:0] arithout;

  assign aluop_o = aluop_i;
  assign reg2_o = reg2_i;
  
  wire[31:0] signed_low16_inst;
   assign signed_low16_inst = { {16{inst_i[15]}}, inst_i[15:0] };
  // 8/8 logic instructions=====================================================
  always @ (*) begin
    if (rst == `RstEnable) begin
      logicout <= `zeroWord;
    end else begin
      case (aluop_i)
        `AND_OP: begin
          logicout <= reg1_i & reg2_i;
        end
        `ANDI_OP: begin                   // immdiate should be load to reg2_i
          logicout <= reg1_i & reg2_i;
        end
        `LUI_OP: begin                    // immdiate should be load to reg1_i
          logicout <= {reg1_i[15:0], 16'b0};
        end
        `NOR_OP: begin
          logicout <= ~(reg1_i | reg2_i);
        end
        `OR_OP: begin
          logicout <= reg1_i | reg2_i;
        end
        `ORI_OP: begin                    // immdiate should be load to reg2_i
          logicout <= reg1_i | reg2_i;
        end
        `XOR_OP: begin
          logicout <= reg1_i ^ reg2_i;
        end
        `XORI_OP: begin                   // immdiate should be load to reg2_i
          logicout <= reg1_i ^ reg2_i;
        end
        default: begin
          logicout <= `zeroWord;
        end
      endcase
    end
  end
  
 //move instructions
  
    always @ (*) begin
      if (rst == `RstEnable) begin
        moveout <= `zeroWord;
      end else begin
        case (aluop_i)
          `MOVN_OP: begin
           if (reg1_i != `zeroWord) begin 
            moveout <= reg2_i;
          end else begin
            moveout <= `zeroWord;
          end
          end
           `MOVZ_OP: begin
             if (reg1_i == `zeroWord) begin 
              moveout <= reg2_i;
            end else begin
              moveout <= `zeroWord;
            end
           end
          default: begin
            moveout <= `zeroWord;
          end
        endcase
      end
    end
   
  // 6/6 shift word instructions================================================
  always @ (*) begin
    if (rst == `RstEnable) begin
      shiftout <= 32'b0;
    end else begin
      case (aluop_i)
        `SLL_OP: begin
          shiftout <= reg1_i << reg2_i;
        end
        `SLLV_OP: begin                 // reg2_i should be 0 at [31:5]
          shiftout <= reg1_i << reg2_i;
        end
        `SRA_OP: begin
         // shiftout <= reg1_i >>> reg2_i;
			 shiftout <= ({32{reg1_i[31]}} << (6'd32-{1'b0, reg2_i[4:0]}))
												| reg1_i >> reg2_i[4:0];
		  end
        `SRAV_OP: begin                 // reg2_i should be 0 at [31:5]
          //shiftout <= reg1_i >>> reg2_i;
			 shiftout <= ({32{reg1_i[31]}} << (6'd32-{1'b0, reg2_i[4:0]}))
												| reg1_i >> reg2_i[4:0];
        end
        `SRL_OP: begin
          shiftout <= reg1_i >> reg2_i;
        end
        `SRLV_OP: begin                 // reg2_i should be 0 at [31:5]
          shiftout <= reg1_i >> reg2_i;
        end
        default: begin
          shiftout <= `zeroWord;
        end
      endcase
    end
  end



  // 8/21 arithmetic instructions===============================================
  always @ (*) begin
    if (rst == `RstEnable) begin
      arithout <= 64'b0;
    end else begin
      case (aluop_i)
        `ADDIU_OP: begin              // immdiate should be load to reg2_i
          arithout <= reg1_i + reg2_i;
        end
        `ADDU_OP: begin
          arithout <= reg1_i + reg2_i;
        end
        `SLT_OP: begin
          arithout <= ($signed(reg1_i) < $signed(reg2_i)) ? 64'b1 : 64'b0;
		    end
        `SLTI_OP: begin               // immdiate should be load to reg2_i
          arithout <= ($signed(reg1_i) < $signed(reg2_i)) ? 64'b1 : 64'b0;
        end
        `SLTU_OP: begin
          arithout <= (reg1_i < reg2_i) ? 64'b1 : 64'b0;
        end
        `SLTIU_OP: begin              // immdiate should be load to reg2_i
          arithout <= (reg1_i < reg2_i) ? 64'b1 : 64'b0;
        end
        `SUBU_OP: begin
          arithout <= reg1_i - reg2_i;
        end
        `MULT_OP: begin
          arithout <= $signed(reg1_i) * $signed(reg2_i);
        end
		    default: begin
          arithout <= 64'b0;
        end
      endcase
    end
  end

  // 10/12 branch jump instructions just do nothing ^_^ Yeah!===================

  // 6/15 load save instructions just do nothing ^_^ Yeah!======================



  // output general
  always @ (*) begin
    wd_o <= wd_i;
    wreg_o <= wreg_i;
    case (alusel_i)
      `LOGIC_SEL: begin
        wdata_o <= logicout;
      end
      `SHIFT_SEL: begin
        wdata_o <= shiftout;
      end
      `MOVE_SEL: begin
        wdata_o <= moveout;
      end
      `ARITH_SEL: begin
        wdata_o <= arithout[31:0];
      end
      `BRANCH_SEL: begin
        wdata_o <= link_addr_i;
      end
      default: begin
        wdata_o <= `zeroWord;
      end
    endcase
  end



  // output mem addr
  always @ (*) begin
    if (rst == `RstEnable) begin
      mem_addr_o <= `zeroWord;
    end else begin
      case (alusel_i)
        `MEM_SEL: begin                      // get offset directly from inst_i
          mem_addr_o <= reg1_i + signed_low16_inst;
        end
        default: begin
          mem_addr_o <= `zeroWord;
        end
		  endcase
    end

  end
endmodule
