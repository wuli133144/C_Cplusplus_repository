/*
 *Copyright (C), 2015-2020 �����,
 *All rights reserved.
 *
 *�ļ����ƣ�
 *�ļ���ʾ��
 *ժҪ��
 *
 *��ǰ�汾��1.1
 *����: �����
 *����ʱ��: 2015/09/13
 * 
 *ȡ���汾��1.0
 *ԭ���ߣ������
 *���ʱ�䣺2015/09/13
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
	printf("��ȷ��Ҫ�˳�ô��(Y/N)");
	gotoxy(26,14);
	printf("*********************************");
	gotoxy(51,13);
	while(key!='Y'&&key!='y'&&key!='n'&&key!='N')
	{
	key=getch();
	if(key=='Y'||key=='y')
	{
		return 1;//�˳�
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
//		printf("�ܵ÷֣�%ld\n�÷֣�%ld\nʧ�֣�%ld\n",allcount,rightcount,wrongcount);
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