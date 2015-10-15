

/*
 *Copyright (C), 2015-2020 吴玉杰,
 *All rights reserved.
 *
 *文件名称：_main.c
 *文件标示：
 *摘要：学生消费系统的客户端
 *
 *当前版本：1.1
 *作者: 吴玉杰
 *创建时间: 2014/09/14
 * 
 *取代版本：1.0
 *原作者：吴玉杰
 *完成时间：2014/09/14
 *
*/	

#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<conio.h>
#include "FUNCTION.h"





#ifndef _TM_DEFINED
struct tm {
	int tm_sec;     /* seconds after the minute - [0,59] */
	int tm_min;     /* minutes after the hour - [0,59] */
	int tm_hour;    /* hours since midnight - [0,23] */
	int tm_mday;    /* day of the month - [1,31] */
	int tm_mon;     /* months since January - [0,11] */
	int tm_year;    /* years since 1900 */
	int tm_wday;    /* days since Sunday - [0,6] */
	int tm_yday;    /* days since January 1 - [0,365] */
	int tm_isdst;   /* daylight savings time flag */
};
#define _TM_DEFINED
#endif

int main()
{  


	 Menu();
	 getch();
 
 //getch();
 return 0;

}

