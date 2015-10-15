
/*
 *Copyright (C), 2015-2020 吴玉杰,
 *All rights reserved.
 *
 *文件名称：STUDENT_SYS_GOTOXY_H
 *文件标示：
 *摘要：
 *
 *当前版本：1.1
 *作者: 吴玉杰
 *创建时间: 2015/09/14
 * 
 *取代版本：1.0
 *原作者：吴玉杰
 *完成时间：2015/09/14
 *
*/	
#ifndef  STUDENT_SYS_GOTOXY_H
#define  STUDENT_SYS_GOTOXY_H

#include<stdio.h>
#include<Windows.h>

void gotoxy(int _x,int _y)
{
	COORD coord={_x,_y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	
}
#endif