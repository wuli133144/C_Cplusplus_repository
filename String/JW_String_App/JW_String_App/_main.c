
#include"_String.h"
#include <Windows.h>
#include<stdio.h>

void gotoxy(int x,int y)
{
	COORD coord={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	//SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main() 
{   
	//CreateWindow();
	Pzstring str[10];
	char name[]={"jak"};
	//Pzstring p="jakcwuisnumberone";
	//注意p本身是没有空间的
	memset(str,'\0',sizeof(str));
	//Pzstring str;
	StrAssign(str,name);

	printf("%d",strcompare(str,name));
	printf("%s",str);
	getch();
    
	return 0;
}