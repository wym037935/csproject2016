#include <cstdio>
#include <cstdlib>
#include <winsock.h>
#include <windows.h>
#include<string.h>
#include <cstring>
#include <conio.h>
#include<iostream>
using namespace std;

#pragma comment(lib, "ws2_32.lib")

const int SCRN_X = 80;
const int SCRN_Y = 100;
const int asm_total=36;//总共的指令数
const int LimitConsoleBuffer = 4096;
char com_name[] = "COM0";
HANDLE com = INVALID_HANDLE_VALUE;
SOCKET client;
FILE *load_file;
struct AsmID
{
	char *name;
	int id;
};
AsmID RegsList[] = {//32bit 
	{"zero",0},
	{"at",1},
	{"v0",2},
	{"v1",3},
	{"a0",4},
	{"a1",5},
	{"a2",6},
	{"a3",7},
	{"t0",8},
	{"t1",9},
	{"t2",10},
	{"t3",11},
	{"t4",12},
	{"t5",13},
	{"t6",14},
	{"t7",15},
	{"s0",16},
	{"s1",17},
	{"s2",18},
	{"s3",19},
	{"s4",20},
	{"s5",21},
	{"s6",22},
	{"s7",23},
	{"t8",24},
	{"t9",25},
	{"k0",26},
	{"k1",27},
	{"gp",28},
	{"sp",29},
	{"fp",30},
	{"ra",31},

};

struct TASM
{
	char* name;
	unsigned code;
	unsigned x,y,z;
};
const struct TASM const_asm[] = {//32bit,编码方式：code为机器码默认所有的reg为$31,立即数为0;x,y,z相关变量的位数为0，其余为1
    {"AND",0X3FFF824,0XFC1FFFFF,0XFFE0FFFF,0XFFFF07FF},
    {"OR",0X3FFF825,0XFC1FFFFF,0XFFE0FFFF,0XFFFF07FF},
    {"XOR",0X3FFF826,0XFC1FFFFF,0XFFE0FFFF,0XFFFF07FF},
    {"NOR",0X3FFF827,0XFC1FFFFF,0XFFE0FFFF,0XFFFF07FF},

    {"ANDI",0X33FF0000,0XFC1FFFFF,0XFFE0FFFF,0XFFFF0000},
    {"XORI",0X3BFF0000,0XFC1FFFFF,0XFFE0FFFF,0XFFFF0000},
    {"LUI",0X3C1F0000,0XFFE0FFFF,0XFFFF0000,0XFFFFFFFF},
    {"ORI",0X37FF0000,0XFC1FFFFF,0XFFE0FFFF,0XFFFF0000},

    {"SLL",0X1FF800,0XFFE0FFFF,0XFFFF07FF,0XFFFFF83F},
    {"SRL",0X1FF802,0XFFE0FFFF,0XFFFF07FF,0XFFFFF83F},
    {"SRA",0X1FF802,0XFFE0FFFF,0XFFFF07FF,0XFFFFF83F},

    {"SLLV",0X3FFF804,0XFC1FFFFF,0XFFE0FFFF,0XFFFF07FF},
    {"SRLV",0X3FFF806,0XFC1FFFFF,0XFFE0FFFF,0XFFFF07FF},
    {"SRAV",0X3FFF807,0XFC1FFFFF,0XFFE0FFFF,0XFFFF07FF},

    {"MOVN",0X3FFF80B,0XFC1FFFFF,0XFFE0FFFF,0XFFFF07FF},
    {"MOVZ",0X3FFF80A,0XFC1FFFFF,0XFFE0FFFF,0XFFFF07FF},

    {"ADDU",0X3FFF821,0XFC1FFFFF,0XFFE0FFFF,0XFFFF07FF},
    {"SUBU",0X3FFF823,0XFC1FFFFF,0XFFE0FFFF,0XFFFF07FF},
    {"SLT",0X3FFF82A,0XFC1FFFFF,0XFFE0FFFF,0XFFFF07FF},
    {"SLTU",0X3FFF82B,0XFC1FFFFF,0XFFE0FFFF,0XFFFF07FF},

    {"SLTI",0X281F0000,0XFFE0FFFF,0XFFFF0000,0XFFFFFFFF},
    {"SLTIU",0X2CFF0000,0XFC1FFFFF,0XFFE0FFFF,0XFFFF0000},

    {"JR",0X3E00008,0XFC1FFFFF,0XFFFFFFFF,0XFFFFFFFF},
    {"JALR",0X3E00009,0XFC1FFFFF,0XFFFF07FF,0XFFFFFFFF},
    {"J",0X10000000,0XFC000000,0X0XFFFFFFFF,0XFFFFFFFF},
    {"JAL",0X18000000,0XFC000000,0X0XFFFFFFFF,0XFFFFFFFF},

    {"BEQ",0X13FF0000,0XFC1FFFFF,0XFFE0FFFF,0XFFFF0000},
    {"BNE",0X17FF0000,0XFC1FFFFF,0XFFE0FFFF,0XFFFF0000},

    {"BGTZ",0X1FE00000,0XFC1FFFFF,0XFFFF0000,0XFFFFFFFF},
    {"BLEZ",0X1BE00000,0XFC1FFFFF,0XFFFF0000,0XFFFFFFFF},

    {"BGEZ",0X7E10000,0XFC1FFFFF,0XFFFF0000,0XFFFFFFFF},
    {"BLTZ",0X7E00000,0XFC1FFFFF,0XFFFF0000,0XFFFFFFFF},

    {"LW",0X8FFF0000,0XFC1FFFFF,0XFFE0FFFF,0XFFFF0000},
    {"SW",0XAFFF0000,0XFC1FFFFF,0XFFE0FFFF,0XFFFF0000}

};
/*char* get_hex(unsigned int num)
{
	char hex[4];
	int i,j;
	for (i=0;i<4;i++)
	{
		j = ((num & 0xF000) >> 12);
		num = (num << 4);
		if (j < 10)
			hex[i]=(char)(j+48);
		else hex[i]=(char)(j+55);
	}
	return hex;//局部数组指针，木有意义，不过没有调用到这个奇怪的函数>_<

}*/
int  pc_decode(unsigned code)//32bit
{

	char* argv[64];
	const struct TASM *p = const_asm;
	int i;
    unsigned int j ,k;
	for (i=0;i<asm_total;i++)
	{
		j = ((*p).code & (*p).x & (*p).y & (*p).z); 
		k = (code & (*p).x & (*p).y & (*p).z);
		if (j == k)
			break;
		p ++;
	}
	printf("  <%08x>    ",code);
	
	if (i == asm_total)	{
		printf("--- UNKNOWN ---  ");		
		cout<<endl;
		return -1;
	}

	int argc=0;
	printf(" %s",(*p).name);	
	//strcpy(argv[argc],(*p).name);
	//argc++;
	unsigned regs[3];
	unsigned num;
	num=0x0000;
	regs[0] = ~(*p).x;
	regs[1] = ~(*p).y;
	regs[2] = ~(*p).z;
	for (i=0;i<3;i++)
	{
		if (regs[i] != 0)
		{
			k = (regs[i] & (*p).code);
			num = (regs[i] & code);
			if (regs[i] == k)
			{
				while ((regs[i] & 1) == 0)
				{
					num = (num >> 1);
					regs[i] = (regs[i] >> 1);
				}
				printf(" R%d",num);	
				//argv[argc][0]='R';
				//argv[argc][1]=num+'0';
				//argc++;
			}
			else if (k == 0)
			{
				while ((regs[i] & 1) == 0)
				{
					num = (num >> 1);
					regs[i] = (regs[i] >> 1);
				}
				j = ~regs[i];
				if ((num & (j >> 1)) != 0)
					num = (num | j);
                printf(" %08x",num);
				//strcpy(argv[argc],get_hex(num));
				//argc++;
			}
		}//end  if(reg[i]!=0)
	}//end for 
	cout<<endl;
	return 0;
}

int get_regs_id(char argv[])//32bit
{
	/*if (strlen(argv) != 2)
		return -1;*/
	for (int i=0;i<32;i++)
	{
		if (strcmp(argv,RegsList[i].name) == 0)
			return RegsList[i].id;
	}
	//printf("%s",argv);
	return -1;
}
int get_value(char *s)//32bit   //将一个以字符串形式表示的数（十六进制）转换成整数形式，空串或形式有误都会使error = 1
{
	if (s[0] == 0)
	{
		cout<<"字符串输入为空错误"<<endl;
		return 0xFFFF;
	}
    int i, value;
	value = 0;
	char ch;	
	for (i=0;*(s+i)!=0;i++)
	{
		ch = s[i];
		value = (value << 4);
		if (ch<='9' && ch>='0')
			value = (value | (ch-'0'));
		else if (ch<='f' && ch>='a')
			value = (value | (ch-'W'));
		else if (ch<='F' && ch>='A')
			value = (value | (ch-'7'));
		else
		{			
			return 0xFFFF;
		}
	}
	return value;
}

int run_asm(unsigned &code,char *argv[] ,int argc)//32bit
{	
	if(argc==1)
	{
		code = get_value(argv[0]);
		if (code != 0xffff)
		{ 
			if (strlen(argv[0]) > 4)
				return -1;
			return 0;
		}
	}
	const struct TASM *p = const_asm;
	int i=0;
	for (i=0;i<asm_total;i++)
	{
		if (strcmp(argv[0],(*p).name) == 0)
			break;
		p ++;
	}
	if (i == asm_total)
	{
		cout<<"输入错误0"<<endl;
		return -1;
	}
    unsigned  value;
	code = ((*p).code & (*p).x & (*p).y & (*p).z);
    unsigned regs[3], k;
	regs[0] = ~(*p).x;
	regs[1] = ~(*p).y;
	regs[2] = ~(*p).z;
    unsigned num;
	for (i=0;i<3;i++)
	{
		if (regs[i] != 0)
		{
			if (argc < i+2)/////////cuowu
			{
				cout<<"输入错误2"<<endl;
				return -1;
			}					
			
			k = (regs[i] & (*p).code);
			if (regs[i] == k)
			{
				if ((value = get_regs_id(argv[i+1])) < 0) 
				{
					cout<<"输入错误3"<<endl;
					return -1;
				}
					
				while ((regs[i] & 1) == 0)
				{
					value = (value << 1);
					regs[i] = (regs[i] >> 1);
				}
				code |= value;
			}
			else
			{
				num = regs[i];
				while ((num & 1) == 0) num = (num >> 1);
				if ((value = get_value(argv[i+1])) < 0) 
				{
					cout<<"输入错误4"<<endl;
					return -1;
				}						
				while ((regs[i] & 1) == 0)
				{
					value = (value << 1);
					regs[i] = (regs[i] >> 1);
				}
				code |= value;
			}
		}
		else
		{
			if (argc != i+1)
				return -1;
			break ;
		}
	}	
	//char** argvtem;
	//argvtem=pc_decode(code);
	//for(i=0;i<argc;i++)
	//	if(strcmp(argvtem[i],argv[i]) != 0)
	//		return -1;

	return 0;
}



struct Tconsole//32bit
{
	int mode;
	HANDLE hstdout;
	COORD scrn;
	CONSOLE_SCREEN_BUFFER_INFO sbinf;
	char buffer[LimitConsoleBuffer+1];
	Tconsole()
	{
		mode = 0;
		hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
		WORD attr = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE;
		SetConsoleTextAttribute(hstdout,attr);
		clearscrn();
		work();
	}	
	void clearscrn()
	{
		int size;
		LPDWORD lpNumber = new DWORD;
		scrn.X = SCRN_X;
		scrn.Y = SCRN_Y;
		SetConsoleScreenBufferSize(hstdout,scrn);
		GetConsoleScreenBufferInfo(hstdout,&sbinf);
		size = SCRN_X*SCRN_Y;
		scrn.X = scrn.Y = 0;
		FillConsoleOutputAttribute(hstdout,sbinf.wAttributes,size,scrn,lpNumber);
		FillConsoleOutputCharacter(hstdout,' ',size,scrn,lpNumber);
		gotoxy(0,0);
	}
	void gotoxy(int xpos,int ypos)
	{
		scrn.X = xpos;
		scrn.Y = ypos;
		SetConsoleCursorPosition(hstdout,scrn);
	}
	void gotoxy_cur(int next)
	{
		if (next == 0)
			return ;
		GetConsoleScreenBufferInfo(hstdout,&sbinf);
		int pos = sbinf.dwCursorPosition.Y*SCRN_X+sbinf.dwCursorPosition.X+next;
		if (next > 0)
		{
			if (pos > SCRN_X*SCRN_Y)
				return ;
		}
		else 
		{
			if (pos < 0)
				return ;
		}
		scrn.X = pos%SCRN_X;
		scrn.Y = pos/SCRN_X;
		SetConsoleCursorPosition(hstdout,scrn);
	}
	void goto_pos(int pos)
	{
		GetConsoleScreenBufferInfo(hstdout,&sbinf);
		if (pos == 0)
			pos = 0;
		else pos += sbinf.dwCursorPosition.X;
		if (pos < 0 || pos >= SCRN_X)
			return ;
		scrn.X = pos;
		scrn.Y = sbinf.dwCursorPosition.Y;
		SetConsoleCursorPosition(hstdout,scrn);
	}
	void work();
	void work_com(int );
	void parse_and_run(char [],int );
	int get_input();
	void kernel_run(char [],int ,SOCKET&,HANDLE& com,int isSIM);    //运行监控程序
	void run_R(SOCKET&,HANDLE& com,int isSIM);                      //R命令
	void run_D(SOCKET &client,char* argv[],HANDLE& com,int isSIM );    //D命令
	void run_A(SOCKET &client,char* argv[] ,HANDLE& com,int isSIM);    //A命令
	void run_U(SOCKET &client,char* argv[],HANDLE& com,int isSIM );    //U命令
	void run_G(SOCKET &client, char *argv[],HANDLE& com,int isSIM);    //G命令
	void run_int(SOCKET &client, HANDLE& com,int isSIM);                //中断处理
};


int Tconsole::get_input()//32bit
{
	int len = 0, cur = 0;
	char ch;
	buffer[len] = '\0';
	while (true)
	{
		ch = getch();
		if (ch == 8)
		{
			if (cur != 0)
			{
				if (cur == len)
				{
					cur --;
					buffer[--len] = '\0';
					gotoxy_cur(-1);
					printf(" ");
					gotoxy_cur(-1);
				}
				else
				{
					memcpy(&buffer[cur-1],&buffer[cur],len-cur);
					buffer[--len] = '\0';
					printf("\b%s ",&buffer[--cur]);
					gotoxy_cur(cur-len-1);
				}
			}
		}
		else if (ch == -32)
		{
			ch = getch();
			switch (ch)
			{
			case 75: //left
				if (cur != 0)
				{
					cur --;
					gotoxy_cur(-1);
				}
				break;
			case 77: //right
				if (cur != len)
				{
					cur ++;
					gotoxy_cur(1);
				}
				break;
			case 71: //home
				gotoxy_cur(-cur);
				cur = 0;
				break;
			case 79: //end
				gotoxy_cur(len-cur);
				cur = len;
				break;
			case 83: //delete
				if (cur != len)
				{
					len--;
					memcpy(&buffer[cur],&buffer[cur+1],len-cur);
					buffer[len] = '\0';
					printf("%s ",&buffer[cur]);
					gotoxy_cur(cur-len-1);
				}
				break;
			}
		}
		else if (ch == 13)  //回车换行
		{
			printf("%c",ch);
			return len;
		}
		else if (ch == 27)   //单引号
		{
			for (int i=0;i<len;i++)
				buffer[i] = ' ';
			gotoxy_cur(-cur);
			printf("%s",buffer);
			gotoxy_cur(-len);
			cur = len = 0;
			buffer[len] = '\0';
		}
		else
		{
			if (ch <= 126 && ch >= 32)
			{
				if(ch>='a' && ch<='z')
					ch+='A'-'a';
				if (cur == len)
				{
					if (len != LimitConsoleBuffer)
					{
						cur ++;
						buffer[len++] = ch;
						buffer[len] = '\0';
						printf("%c",ch);
					}
				}
				else
				{
					if (len == LimitConsoleBuffer)
					{
						memcpy(&buffer[cur+1],&buffer[cur],len-cur-1);
						buffer[cur] = ch;
						printf("%s",&buffer[cur++]);
						gotoxy_cur(cur-len);
					}
					else
					{
						memcpy(&buffer[cur+1],&buffer[cur],len-cur);
						buffer[++len] = '\0';
						buffer[cur] = ch;
						printf("%s",&buffer[cur++]);
						gotoxy_cur(cur-len);
					}
				}
			}
		}
	}
}

void Tconsole::parse_and_run(char buffer[],int len)//32bit
{
	if (strcmp("q",buffer) == 0||strcmp("Q",buffer) == 0)
	{
		mode = -1;
		printf("\n");
		return ;
	}
	char *argv[64];
	int in_command = 0;
	int argc = 0;
	for (int i=0;buffer[i] != '\0';i++)
	{
		if (buffer[i] != ' ')
		{
			if (in_command == 0)
				argv[argc++] = &buffer[i];
			in_command = 1;
		}
		else
		{
			buffer[i] = '\0';
			in_command = 0;
		}
	}
	if (argc == 1)
	{
		if (strcmp(argv[0],"help") == 0||strcmp(argv[0],"HELP") == 0)
		{
			printf("Help....\n");
			return ;
		}
		//丑陋的实现>_<，com1~com9
		else if (strcmp("com1",argv[0]) == 0 || strcmp(argv[0],"COM1") == 0)
			mode = 1;
		else if (strcmp("com2",argv[0]) == 0 || strcmp(argv[0],"COM2") == 0)
			mode = 2;
		else if (strcmp("com3",argv[0]) == 0 || strcmp(argv[0],"COM3") == 0)
			mode = 3;
		else if (strcmp("com4",argv[0]) == 0 || strcmp(argv[0],"COM4") == 0)
			mode = 4;
		else if (strcmp("com5",argv[0]) == 0 || strcmp(argv[0],"COM5") == 0)
			mode = 5;
		else if (strcmp("com6",argv[0]) == 0 || strcmp(argv[0],"COM6") == 0)
			mode = 6;
		else if (strcmp("com7",argv[0]) == 0 || strcmp(argv[0],"COM7") == 0)
			mode = 7;
		else if (strcmp("com8",argv[0]) == 0 || strcmp(argv[0],"COM8") == 0)
			mode = 8;
		else if (strcmp("com9",argv[0]) == 0 || strcmp(argv[0],"COM9") == 0)
			mode = 9;
		else printf("\n  ->Unknown command. Use ``help'' to list commands.\n");
	}
	else printf("\n  ->Unknown command. Use ``help'' to list commands.\n");
}

void Tconsole::work()//32bit
{
	while (true)
	{
		printf(">>");
		mode = 0;
		while (mode == 0)
		{
			int len = get_input();
			parse_and_run(buffer,len);
			if (mode == 0)
				printf("\n>>");
		}
		switch (mode)
		{
		case -1:
			exit(0);
		case 1:
			work_com(1);
			break;
		case 2:
			work_com(2);
			break;
		case 3:
			work_com(3);
			break;
		case 4:
			work_com(4);
			break;
		case 5:
			work_com(5);
			break;
		case 6:
			work_com(6);
			break;
		case 7:
			work_com(7);
			break;
		case 8:
			work_com(8);
			break;
		case 9:
			work_com(9);
			break;
		}
	}
}


void Tconsole::kernel_run(char [],int order_len,SOCKET& client,HANDLE& com,int isSIM)//32bit
{
	char *argv[64];
	int in_command = 0;
	int argc = 0;

	buffer[order_len]='\0';
	for (int i=0;buffer[i] != '\0';i++)
	{
		if (buffer[i] != ' ')
		{
			if (in_command == 0)
				argv[argc++] = &buffer[i];
			in_command = 1;
		}
		else
		{
			buffer[i] = '\0';			
			in_command = 0;
		}
	}
	argv[argc]="z";
	argv[argc++]="z";
	argv[argc++]="z";


	switch(buffer[0])
	{
		case 0x52:    //R
			run_R(client,com,isSIM);
			break;
		case 0x44:  //D
			run_D(client,argv,com,isSIM);
			break;
		case 0x41:     //A
			run_A(client,argv,com,isSIM);
			break;
		case 0x55:  //u
			run_U(client,argv,com,isSIM);
			break;
		case 0x47:   //G
			run_G(client,argv,com,isSIM);
			break;
		default:
			break;	
	}
	return ;
}

void Tconsole::run_R(SOCKET &client,HANDLE& com,int isSIM)//32bit
{
	int len=0,count=0;
    unsigned int regnum=0;
    int temp=0;
	DWORD size;
 	char ch;

	//发送命令R
	
	{
		ch=0x52;
		size=0;
		while(size==0)
		{
			WriteFile(com,&ch,1,&size,NULL);
		}
        while(count<116){
			ReadFile(com,&ch,1,&size,NULL);
            if(size==1)
			{						
                temp = temp << 8;
                temp |= int(ch);
                if(count % 4 == 3)
                {
                    cout << "R" << cout/4+2 << "=";
                    printf("%08x\n",temp);
                    temp = 0;
                }
				++count;	
			}		
			if (com == INVALID_HANDLE_VALUE)
			{
				printf("  COM lost...\n");
				return;
			}
		}		
	
	}
	return;
}

void Tconsole::run_D(SOCKET &client,char* argv[64],HANDLE& com,int isSIM ) //32bit
{
	int len=0;
	char ch;	
    int count=0,num=0,temp=0;  //读取次数、内存中的数,临时用
    unsigned int first_addr=0;//首地址
	DWORD size;
	first_addr = get_value(argv[1]);
	if(first_addr>=0xBF00 || first_addr<0x8000) 
		first_addr = 0x8000;
	count=get_value(argv[2]);
	if (count==0xFFFF ||  count < 10)      //省略第三个参数或第三个参数小于10
		count = 0x0a;

 //与串口连接
	{
		//发送命令D
		ch=0x44;
		size=0;
		while(size==0)		
			WriteFile(com,&ch,1,&size,NULL);
		//SEND ADDR
		temp=0;
		ch=(first_addr&0x00ff);
		size=0;
		while(size==0)		
			WriteFile(com,&ch,1,&size,NULL);
		temp=(first_addr>>8);
		ch=temp&0x00ff;
		size=0;
		while(size==0)		
			WriteFile(com,&ch,1,&size,NULL);
		//SEND MEMS
		temp=0;
		ch=(count&0x00ff);
		size=0;
		while(size==0)		
			WriteFile(com,&ch,1,&size,NULL);
		temp=(count>>8);
		ch=temp&0x00ff;
		size=0;
		while(size==0)		
			WriteFile(com,&ch,1,&size,NULL);

		temp=0;
		int countorder=0;
        while(countorder<4*count){
			ReadFile(com,&ch,1,&size,NULL);
			if(size==1)
			{				
                num = num << 8;
                num |= int(ch);
                if(countorder % 4 == 3)
				{					
                    printf("[%04x]    ",(first_addr+countorder/2));
                    printf("%08x \n",(unsigned int)(num));
					num=0;	
				}
				countorder=countorder+1;
			}	

			if (com == INVALID_HANDLE_VALUE)
			{
				printf("  COM lost...\n");
				return;
			}
					
		}	
		countorder=0;
	}	
	return;
}

void Tconsole::run_A(SOCKET &client,char* argv[64],HANDLE& com,int isSIM )
{
	char ch;
	DWORD size;
    unsigned int addr=0x4000,temp=0,len=0;
	addr = get_value(argv[1]);
	if(addr>=0x8000 || addr<0x4000) 
		addr = 0x4000;
	
{
		ch=0x41;
		size=0;
		while(size==0)		
			WriteFile(com,&ch,1,&size,NULL);
		while(true)
		{
			
			if (com == INVALID_HANDLE_VALUE)
			{
				printf("  COM lost...\n");
				return;
			}
			printf("[%04x]  ",addr);
			int mips=get_input();
			cout<<endl;
			if(mips==0)
			{
				ch=0;
				size=0;
				while(size==0)		
					WriteFile(com,&ch,1,&size,NULL);		
				size=0;
				while(size==0)		
					WriteFile(com,&ch,1,&size,NULL);	
				return;
			}			
			int in_command = 0;
			int argc = 0;
			buffer[mips]='\0';
			for (int i=0;buffer[i] != '\0';i++)
			{
				if (buffer[i] != ' ')
				{
					if (in_command == 0)
						argv[argc++] = &buffer[i];
					in_command = 1;
				}
				else
				{
					buffer[i] = '\0';			
					in_command = 0;
				}
			}

			/////////////	
            unsigned int code=0;
			if(run_asm(code,argv,argc)==-1)
				continue;

			//printf("code:%04x \n",code);	
			temp=0;
			ch=(addr&0x00ff);
			size=0;
			while(size==0)		
				WriteFile(com,&ch,1,&size,NULL);
			temp=addr>>8;
			ch=temp&0x00ff;
			size=0;
			while(size==0)		
				WriteFile(com,&ch,1,&size,NULL);
			
			ch=code&0x00ff;
			size=0;
			while(size==0)		
				WriteFile(com,&ch,1,&size,NULL);
			temp=code>>8;
			ch=temp&0x00ff;
			size=0;
			while(size==0)		
				WriteFile(com,&ch,1,&size,NULL);
			addr=addr+1;		
		}		
	}
	return ;

}

void Tconsole::run_U(SOCKET &client, char *argv[],HANDLE& com,int isSIM)
{
	int len=0;
	char ch;
	DWORD size;
    unsigned int count=0,first_addr=0,num=0,temp=0;  //读取次数、首地址、内存中的数,临时用


	first_addr = get_value(argv[1]);
	if(first_addr>=0x8000 || first_addr<0x4000) 
		first_addr = 0x4000;
	count=get_value(argv[2]);
	if (count==0xFFFF ||  count < 10)      //省略第三个参数或第三个参数小于10
		count = 0x0a;

	{
		//发送命令U
		ch=0x55;
		size=0;
		while(size==0)		
			WriteFile(com,&ch,1,&size,NULL);
		//SEND ADDR
		if (com == INVALID_HANDLE_VALUE)
		{
			printf("  COM lost...\n");
			return;
		}

		ch=(first_addr&0x00ff);
		size=0;
		while(size==0)		
			WriteFile(com,&ch,1,&size,NULL);
		temp=(first_addr>>8);
		ch=temp&0x00ff;
		size=0;
		while(size==0)		
			WriteFile(com,&ch,1,&size,NULL);
		//SEND MEMS
		ch=(count&0x00ff);
		size=0;
		while(size==0)		
			WriteFile(com,&ch,1,&size,NULL);
		temp=(count>>8);
		ch=temp&0x00ff;
		size=0;
		while(size==0)		
			WriteFile(com,&ch,1,&size,NULL);   	

		int countorder=0;
		while(countorder<2*count){
			ReadFile(com,&ch,1,&size,NULL);
			if(size==1)
			{							
				if((countorder&1)==0)
				{
                    temp=int(ch);
					temp=temp&0x00ff;						
				}
				else if(countorder&1 !=0)
				{					
                    num=int(ch);
					num=num<<8;
					num=num&0xff00;					
					num |=temp;					
					printf("[%04x]    ",(first_addr+countorder/2));
					pc_decode(num);
					num=0;						
				}
				countorder=countorder+1;						
			}				
		}	//end while	
	} //end if
			
	return;

}

void Tconsole::run_G(SOCKET &client, char *argv[],HANDLE& com,int isSIM)
{
	int len=0;
	char ch;
	DWORD size;
    unsigned int first_addr=0,temp=0;  //首地址
	first_addr = get_value(argv[1]);
	if(first_addr>=0x8000 || first_addr<0x4000) 
		first_addr = 0x4000;


	{
		//发送命令g
		ch=0x47;
		size=0;
		while(size==0)		
			WriteFile(com,&ch,1,&size,NULL);

		ch=(first_addr&0x00ff);
		size=0;
		while(size==0)		
			WriteFile(com,&ch,1,&size,NULL);
		temp=(first_addr>>8);
		ch=temp&0x00ff;
		size=0;
		while(size==0)		
			WriteFile(com,&ch,1,&size,NULL);

		while(true)
		{
			if (com == INVALID_HANDLE_VALUE)
			{
				printf("  COM lost...\n");
				return;
			}
			ReadFile(com,&ch,1,&size,NULL);
			if(size==1)
			{				
				switch(ch)
				{
					case 0x0f:
						run_int(client,com,isSIM);
						break;
					case 0x07:
						return;					
					default:
						printf("%c",ch);
						break;
				}					
			}
		}
	}
	return;
}

void Tconsole::run_int(SOCKET &client, HANDLE &com, int isSIM)//32bit
{
	int len=0;
	char ch;
	DWORD size;

	{
		while(true)
		{
			if (com == INVALID_HANDLE_VALUE)
			{
				printf("  COM lost...\n");
				return;
			}
			ReadFile(com,&ch,1,&size,NULL);
			if(size==1)
			{				
				switch(ch)
				{
					case 0x10:
						cout<<"外部中断"<<endl;
						break;
					case 0x20:
						cout<<"时钟中断"<<endl;
						break;
					case 0x00:
						cout<<"int 指令中断"<<endl;
						break;
					case 0x0f:
						return;					
					default:
						printf("%c",ch);
						break;
				}					
			}
		}	
	}
	return;
}

void Tconsole::work_com(int com_num)//32bit
{
	com_name[3] = '0'+com_num;
	DCB dcb;
	com = CreateFileA(com_name,GENERIC_READ|GENERIC_WRITE,0,NULL,OPEN_EXISTING,0,NULL);
	if (com == INVALID_HANDLE_VALUE)
	{
		printf("\n   Can not open %s\n",com_name);
		return ;
	}
	GetCommState(com,&dcb);
	dcb.BaudRate = 9600;
	dcb.ByteSize = 8;
	dcb.StopBits = ONESTOPBIT;
	SetCommState(com,&dcb);
	dcb.ByteSize = 8;
	dcb.Parity = ODDPARITY;//奇校验
	dcb.StopBits = ONESTOPBIT;
	dcb.fBinary = TRUE;
	dcb.fParity = FALSE;
	SetCommState(com,&dcb);
	unsigned char ch;
	DWORD size;
	int len;
	load_file = NULL;
    unsigned int code;
	char hi, lo;
	printf("\n   Ok..  Connected with com...\n");

	int flag=0; //标志是否是刚进入kernel
	while (true)
	{		
		if (com == INVALID_HANDLE_VALUE)
		{
			printf("  COM lost...\n");
			goto break_loop;
		}
		int k=4;
		
		while(k>0&&flag==0){    //print ok from kernel
			ReadFile(com,&ch,1,&size,NULL);
			if(size==1)
			{			
					printf("%c",ch);
					k--;					
			}	
		}		

		cout<<"  >> ";
		int order_len = get_input();  //输入命令
		cout<<endl;
		kernel_run(buffer,order_len,client,com,0); //调用kernel
		cout<<endl;
		flag=1;
	}
break_loop:	
	return ;
}								
							

int main()
{
	Tconsole console;
	return 0;
}
