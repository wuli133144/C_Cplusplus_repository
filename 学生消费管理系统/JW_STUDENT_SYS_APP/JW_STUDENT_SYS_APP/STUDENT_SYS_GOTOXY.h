
/*
 *Copyright (C), 2015-2020 �����,
 *All rights reserved.
 *
 *�ļ����ƣ�STUDENT_SYS_GOTOXY_H
 *�ļ���ʾ��
 *ժҪ��
 *
 *��ǰ�汾��1.1
 *����: �����
 *����ʱ��: 2015/09/14
 * 
 *ȡ���汾��1.0
 *ԭ���ߣ������
 *���ʱ�䣺2015/09/14
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