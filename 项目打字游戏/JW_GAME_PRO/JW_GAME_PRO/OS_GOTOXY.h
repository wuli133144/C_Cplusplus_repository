
#ifndef  OS_GOTO_XY_H
#define  OS_GOTO_XY_H


//#include<stdio.h>

#include <Windows.h>

extern   void gotoxy(int _x,int _y)
{
	COORD coord={_x,_y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
#endif