`timescale 1ns / 1ps
`include "header.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:29:17 11/24/2015 
// Design Name: 
// Module Name:    phy_mem 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
/*
 * $File: phy_mem_ctrl.v
 * $Date: Fri Dec 20 19:11:35 2013 +0800
 * $Author: jiakai <jia.kai66@gmail.com>
 */

`timescale 1ns/1ps

`define COM_DATA_ADDR	32'h1FD003F8	// only lowest byte contributes
`define COM_STAT_ADDR	32'h1FD003FC	// {30'b0, read_ready, write_ready}

`define SEGDISP_ADDR	32'h1FD00400	// 7-segment display monitor

`define ADDR_IS_RAM(addr) ((addr & 32'h007FFFFF) == addr)
`define ADDR_IS_ROM(addr) (addr[31:12] == 20'h1FC00)

`define ROM_ADDR_WIDTH	12

`define RAM_WRITE_WIDTH	1	// width of write signal
`define RAM_WRITE_READ_RECOVERY 1	// recovery time before next read after write

// physical memory controller
module phy_mem(
	input clk50M,
	input rst,

	//connect to MMU
	input is_write,
	input [31:0] addr_in,
	input [31:0] data_in,
	output reg [31:0] data_out,

	output reg int_com_ack,

	output reg [31:0] segdisp,


	// ram interface
	output [19:0] baseram_addr,
	inout [31:0] baseram_data,
	output  baseram_ce,
	output  baseram_oe,
	output  baseram_we,
	output [19:0] extram_addr,
	inout [31:0] extram_data,
	output  extram_ce,
	output  extram_oe,
	output  extram_we,

	// serial port interface
	input [7:0]com_data_in,
	output [7:0] com_data_out,
	output reg enable_com_write,
	input com_read_ready,
	input com_write_ready

	);

	// ------------------------------------------------------------------
	wire[31:0] addr = addr_in;


	reg [31:0] write_addr_latch, write_data_latch;
	reg [1:0] state;
	reg [3:0] write_cnt;
	wire [3:0] write_cnt_next = write_cnt + 1'b1;
	localparam READ = 2'b00,
		WRITE_RAM = 2'b01, RECOVERY_READ = 2'b11;

	assign addr_is_ram = `ADDR_IS_RAM(addr),
			addr_is_com_data = (addr == `COM_DATA_ADDR),
			addr_is_com_stat = (addr == `COM_STAT_ADDR),
			addr_is_rom = `ADDR_IS_ROM(addr);

	wire [`ROM_ADDR_WIDTH-1:0] rom_addr = addr[`ROM_ADDR_WIDTH-1:0];
	reg [31:0] rom_data;

	task rom_bootloader;
		`include "bootloader.v"
	endtask

	task rom_memtrans;
		`include "memstrans.v"
	endtask

	always @(rom_addr)//, rom_selector)
		rom_bootloader();
		/*
		case (rom_selector)
			1'b0: rom_memtrans();
			1'b1: rom_bootloader();
		endcase
		*/

	assign com_data_out = write_data_latch[7:0];

	assign ram_oe = (state == WRITE_RAM),
		ram_we = ~(state == WRITE_RAM && write_cnt < `RAM_WRITE_WIDTH);


	wire [20:0]
		ram_addr = (ram_oe ? write_addr_latch[22:2] : addr[22:2]);

	assign ram_selector = ~ram_addr[20], ///use extend ram
		baseram_ce = ram_selector,
		extram_ce = ~ram_selector,
		baseram_oe = ~(~ram_selector & ~ram_oe),
		extram_oe = ~(ram_selector & ~ram_oe),
		baseram_we = ~(~ram_selector & ~ram_we),
		extram_we = ~(ram_selector & ~ram_we);

	// set data after oe changes, so before we data is ready
	assign baseram_data = baseram_oe ? write_data_latch : {32{1'bz}},
		extram_data = extram_oe ? write_data_latch : {32{1'bz}},
		baseram_addr = ram_addr[19:0],
		extram_addr = ram_addr[19:0];

	always @(negedge clk50M or negedge rst) begin
		if (rst == `RstEnable) 
		data_out <= 0;
		else 
		case ({addr_is_ram, addr_is_com_data, addr_is_com_stat,
				 addr_is_rom})
			5'b1000: data_out <= ram_selector ? extram_data : baseram_data;
			5'b0100: data_out <= {24'b0, com_data_in};
			5'b0010: data_out <= {30'b0, com_read_ready, com_write_ready};
			5'b00001: data_out <= rom_data;
		endcase
	end

	// assign int ack
	always @(negedge clk50M) begin
		int_com_ack <= addr_is_com_data && !is_write;
	end
	
	reg is_write_prev;
	assign is_write_posedge = !is_write_prev && is_write;

	// main FSM
	always @(negedge clk50M or negedge rst) begin
		if (rst == `RstEnable) begin
			state <= READ;
			enable_com_write <= 0;
			is_write_prev <= 0;
		end
		else begin
			enable_com_write <= 0;
			is_write_prev <= is_write;
		case (state)
			READ: if (is_write_posedge) begin
				write_addr_latch <= addr;
				write_data_latch <= data_in;
				write_cnt <= 0;
				case ({addr_is_ram, addr_is_com_data})
					3'b10: state <= WRITE_RAM;
					3'b01: enable_com_write <= 1;
				endcase
			end
			WRITE_RAM: begin
				write_cnt <= write_cnt_next;
				if (write_cnt_next ==
						`RAM_WRITE_READ_RECOVERY + `RAM_WRITE_WIDTH)
					state <= RECOVERY_READ;
			end
			RECOVERY_READ:
				state <= READ;
			default:
				state <= READ;
		endcase
	end
	end

endmodule


