case (rom_addr)
0: rom_data = 32'h34210001; //r1 = 1
4: rom_data = 32'h34420001; //r2 = 1
8: rom_data = 32'h34630000; //r3 = 0
12: rom_data = 32'h34840003;//r4 = 3
16: rom_data = 32'h00000000;
20: rom_data = 32'h00000000;
24: rom_data = 32'h00000000;
28: rom_data = 32'h00000000;
32: rom_data = 32'hac610004;//r1 写到 r3 + 4
36: rom_data = 32'h00000000;
40: rom_data = 32'h00000000;
44: rom_data = 32'h00000000;
48: rom_data = 32'h00000000;
52: rom_data = 32'hac620008;//r1 写到 r3 + 8
56: rom_data = 32'h00000000;
60: rom_data = 32'h00000000;
64: rom_data = 32'h00000000;
68: rom_data = 32'h00000000;
72: rom_data = 32'h00220821;//r1 = r1 + r2
76: rom_data = 32'h00000000;
80: rom_data = 32'h00000000;
84: rom_data = 32'h00000000;
88: rom_data = 32'h00000000;
92: rom_data = 32'h00221021;//r2 = r1 + r2
96: rom_data = 32'h24630008;//r3 = r3 + 8
100: rom_data = 32'h2482ffff;//r4 = r4 - 1
104: rom_data = 32'h00000000;
108: rom_data = 32'h00000000;
112: rom_data = 32'h00000000;
116: rom_data = 32'h00000000;
120: rom_data = 32'h1c80ffe8;//if r4 > 0 调到 24
124: rom_data = 32'h00000000;
128: rom_data = 32'h00000000;
132: rom_data = 32'h00000000;
136: rom_data = 32'h00000000;
140: rom_data = 32'h2463ffe8;// r3 = r3 - 24
144: rom_data = 32'h00000000;
148: rom_data = 32'h00000000;
152: rom_data = 32'h00000000;
156: rom_data = 32'h00000000;
160: rom_data = 32'h8c210004;// r3 +4 读到 r1
164: rom_data = 32'h00000000;
168: rom_data = 32'h00000000;
172: rom_data = 32'h00000000;
176: rom_data = 32'h00000000;
180: rom_data = 32'h8c220008;// r3 +8 读到 r2
184: rom_data = 32'h00000000;
188: rom_data = 32'h00000000;
192: rom_data = 32'h00000000;
196: rom_data = 32'h00000000;
200: rom_data = 32'h8c23000c;// r3 +12 读到 r3
204: rom_data = 32'h00000000;
208: rom_data = 32'h00000000;
212: rom_data = 32'h00000000;
216: rom_data = 32'h00000000;
220: rom_data = 32'h8c230010;// r3 +16 读到 r4
224: rom_data = 32'h00000000;
228: rom_data = 32'h00000000;
232: rom_data = 32'h00000000;
236: rom_data = 32'h00000000;
240: rom_data = 32'h8c230014;// r3 +20 读到 r5
244: rom_data = 32'h00000000;
248: rom_data = 32'h00000000;
252: rom_data = 32'h00000000;
256: rom_data = 32'h00000000;
260: rom_data = 32'h8c230018;// r3 + 24 读到 r6
264: rom_data = 32'h00000000;
268: rom_data = 32'h00000000;
272: rom_data = 32'h00000000;
276: rom_data = 32'h00000000;
default: rom_data = 0;
endcase
