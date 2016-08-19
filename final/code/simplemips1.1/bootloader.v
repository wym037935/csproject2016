case (rom_addr)
0: rom_data = 32'h34000000; //r0 = 0
4: rom_data = 32'h00000000;
8: rom_data = 32'h00000000;
12: rom_data = 32'h00000000;
16:rom_data = 32'h00000000;
20:rom_data = 32'h34210001; //r1 = 1
24:rom_data = 32'h00000000;
28:rom_data = 32'h00000000;
32:rom_data = 32'h00000000;
36:rom_data = 32'h00000000; 
40:rom_data = 32'h00011021;// r2 = r1 + r0
44:rom_data = 32'h00000000;
48:rom_data = 32'h00000000;
52:rom_data = 32'h00000000;
56:rom_data = 32'h00000000;
60:rom_data = 32'h00221821;// r3
64:rom_data = 32'h00000000;
68:rom_data = 32'h00000000;
72:rom_data = 32'h00000000;
76:rom_data = 32'h00000000;
80:rom_data = 32'h00432021; //r4
84:rom_data = 32'h00000000;
88:rom_data = 32'h00000000;
92:rom_data = 32'h00000000;
96:rom_data = 32'h00000000;
100:rom_data = 32'b00000000011001000010100000100001; //r5
104:rom_data = 32'h00000000;
108:rom_data = 32'h00000000;
112:rom_data = 32'h00000000;
116:rom_data = 32'h00000000;
120:rom_data = 32'b00000000100001010011000000100001;//r6 
default: rom_data = 0;
endcase
