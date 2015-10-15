/*
 *Copyright (C), 2015-2020 吴玉杰,
 *All rights reserved.
 *
 *文件名称：
 *文件标示：
 *摘要：
 *
 *当前版本：1.1
 *作者: 吴玉杰
 *创建时间: 2015/09/13
 * 
 *取代版本：1.0
 *原作者：吴玉杰
 *完成时间：2015/09/13
 *
*/	
#include"OS_TIME.h"
#include "OS_GOTOXY.h"
int fun_esc()
{
	char key='#';
	gotoxy(26,12);
	printf("*********************************");
	gotoxy(26,13);
	printf("你确定要退出么？(Y/N)");
	gotoxy(26,14);
	printf("*********************************");
	gotoxy(51,13);
	while(key!='Y'&&key!='y'&&key!='n'&&key!='N')
	{
	key=getch();
	if(key=='Y'||key=='y')
	{
		return 1;//退出
	}
	if(key=='n'||key=='N')
	{
		//return 0;
		gotoxy(24,12);
		printf(" ");
		gotoxy(24,13);
		printf(" ");
		gotoxy(24,14);
		printf(" ");
		return 0;
	}
	
	
	}
}

//int OS_PLAY_FUN(void)
//{
//	int x,y;
//	int i,j;
//	unsigned int timeer;
//	char ch;
//	char cur;
//	time_t _mytime;
//	srand((unsigned)time(&_mytime));
//	gotoxy(26,12);
//	printf("							");
//	gotoxy(26,13);
//	printf("							");
//	gotoxy(26,14);
//	printf("							");
//	y=6;
//	timeer=100000;
//	i=rand()%3;
//	j=rand()%(9-i);
//	ch=kw[i][j*4];
//	x=18+i*2+j*4;
//	while(y<=24)
//	{
// 
//		if(kbhit())
//		{
//				cur=getch();
//				if(cur==ch||cur==ch+32)
//				{
//			        ch='*';
//					timeer=1000;
//				}
//				else if(cur==27)
//				{
//						if(fun_esc()==1)
//						{
//					     system("cls");
//						 exit(0);
//						}
//				}
//				else if(cur=='\r')
//				{
//			            gotoxy(x,y-1);
//						printf(" ");
//						gotoxy(26,12);
//						printf("****************");
//						gotoxy(26,13);
//						printf("are you continue?");
//						gotoxy(26,14);
//						printf("****************");
//						getch();
//						gotoxy(28,13);
//						printf(" ");
//
//				}
//				else 
//				{
//			    wrongcount++;
//				}
//          }
//		if(y>6)
//		{
//	       gotoxy(x,y-1);
//		   printf(" ");
//		}
//		gotoxy(x,y);
//		printf("%c",ch);
//		gotoxy(0,1);
//		printf("总得分：%ld\n得分：%ld\n失分：%ld\n",allcount,rightcount,wrongcount);
//		delay(timeer);
//		y++;
//	}
//	allcount++;
//	if(ch=='*')
//	{
//           rightcount++;
//	}
//
//}