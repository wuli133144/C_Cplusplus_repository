#include "Fun_Esc.h"
#include "OS_TIME.h"
#define  OS_MAX_SIZE   50
//#include <conio.h>
#include"OS_GOTOXY.h"

//#include <stdio.h>
/*
 *Copyright (C), 2015-2020 吴玉杰,
 *All rights reserved.
 *
 *文件名称：
 *文件标示：
 *摘要：打字游戏
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
//extern void gotoxy();

int main()
{ 
	//clrscr();
	//	system("pause");
	//gotoxy(1,1);
   //开始
	int i,j;
    //int fun_esc();
	//gotoxy()布局是好的函数
	system("cls");
	gotoxy(18,1);
	printf("%s\n",kw[0]);
	gotoxy(20,3);
	printf("%s\n",kw[1]);
	gotoxy(22,5);
	printf("%s\n",kw[2]);
	//
	gotoxy(11,20);//11列25行
	for(i=1;i<OS_MAX_SIZE;i++)
	{
		printf("=");
	}
	gotoxy(0,1);
	printf("总得分:%ld\n得分：%ld\n失分：%ld\n",allcount,rightcount,wrongcount);

	gotoxy(50,1);
	printf("输入ESC退出游戏");
	gotoxy(50,2);
	printf("输入Enter停止");
	gotoxy(26,12);
	printf("按任意键开始");
	gotoxy(51,13);
	if(getch()==27)//27=ESC
	{
		if(fun_esc()==1)
		{
			system("cls");
			exit(0);//退出
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
         //开始游戏
		OS_PLAY_FUN();
	}

	//printf("\n**********hello world!");
	//getch();
    getch();
    return 0;
}