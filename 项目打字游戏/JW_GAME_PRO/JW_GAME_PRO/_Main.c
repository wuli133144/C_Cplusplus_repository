#include "Fun_Esc.h"
#include "OS_TIME.h"
#define  OS_MAX_SIZE   50
//#include <conio.h>
#include"OS_GOTOXY.h"

//#include <stdio.h>
/*
 *Copyright (C), 2015-2020 �����,
 *All rights reserved.
 *
 *�ļ����ƣ�
 *�ļ���ʾ��
 *ժҪ��������Ϸ
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
//extern void gotoxy();

int main()
{ 
	//clrscr();
	//	system("pause");
	//gotoxy(1,1);
   //��ʼ
	int i,j;
    //int fun_esc();
	//gotoxy()�����Ǻõĺ���
	system("cls");
	gotoxy(18,1);
	printf("%s\n",kw[0]);
	gotoxy(20,3);
	printf("%s\n",kw[1]);
	gotoxy(22,5);
	printf("%s\n",kw[2]);
	//
	gotoxy(11,20);//11��25��
	for(i=1;i<OS_MAX_SIZE;i++)
	{
		printf("=");
	}
	gotoxy(0,1);
	printf("�ܵ÷�:%ld\n�÷֣�%ld\nʧ�֣�%ld\n",allcount,rightcount,wrongcount);

	gotoxy(50,1);
	printf("����ESC�˳���Ϸ");
	gotoxy(50,2);
	printf("����Enterֹͣ");
	gotoxy(26,12);
	printf("���������ʼ");
	gotoxy(51,13);
	if(getch()==27)//27=ESC
	{
		if(fun_esc()==1)
		{
			system("cls");
			exit(0);//�˳�
		}

	}
	gotoxy(23,12);
	printf(" ");
	gotoxy(23,13);
	printf(" ");
	gotoxy(23,14);
	printf(" ");
	while(1)
	{
         //��ʼ��Ϸ
		OS_PLAY_FUN();
	}

	//printf("\n**********hello world!");
	//getch();
    getch();
    return 0;
}