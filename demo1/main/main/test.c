#if 0
#include<stdio.h>
//计算x*x*x-5*x*x+16*x-80=0
//牛顿的迭代法
#include<math.h>
#include <stdlib.h>
//计算多项式的值

float f(float x)
{
	float y;
	y=x*x*x-5*x*x+16*x-80;
	return y;
}
float xpoint(float x1,float x2)
{
	float y;
	y=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
	return y;

}
float root(f
{loat x1,float x2)
	float x,y,y1;
	y1=f(x1);
	do 
	{
		x=xpoint(x1,x2);
		y=f(x);
		if (y*y1>0)
		{
			y1=y;
			x1=x;

		}
		else
			x2=x;
	} while(fabs(y)>=0.0001);
	return x;
}
int main()
{   float x1,x2,f1,f2,x;
	do{
	//std::flush(std::stdin);
	printf("input x1,x2\n");
	scanf_s("%f,%f",&x1,&x2);
	f1=f(x1);
	f2=f(x2);
    }while(f1*f2>=0);

x=root(x1,x2);
printf_s("%f",x);
system("pause");

  return 0;
}
#endif
#if 0
#include<stdio.h>
#include<string.h>
#define  MAX(a,b)  a>b?a:b
//#define  DEBUG1


int main()
{
	//printf("hello jack\n");
	int a=1,b=2;
	int m=MAX(a,b);
	printf("%d",m);

      #ifdef  DEBUG1
	    printf_s("%d\t",m);
      #endif
	system("pause");
	return 0;


}

#endif
#if 0
#include<stdio.h>
#include <string.h>
#include <ctype.h>
#define LETTER 0
int main()
{
	char str[20]="c language",c;
	int i=0;
	while((c=str[i++])!='\0')
	{
        #if LETTER 
             if(isupper(c))//大写
			 {
				 c=c+32;//转化为小写
			 }
		#else
		     if(islower(c))
			 {c=c-32;
			 printf_s("%c",c);
			 }
        #endif
	}
	//printf_s("%s",str);


system("pause");
return 0;
}

#endif
#if 0
#include "stdall.h"
//习题的练习
//p217
//谭浩强 C语言第三版
#define swap_(a,b) tem=a;a=b;b=tem
int main()
{
  int a=23,b=45,tem;

  swap_(a,b);
  printf("a=%d,b=%d",a,b);
  system("pause");
  return 0;
}

#endif

#if 0
#include "stdall.h"
//优点：简单，明了
#define YEAR(y) ((y%400==0)||(y%100==0&&y%4!=0))?1:0
int main()
{
	int year;
	printf("输入year的值\n");
	scanf("%d",&year);
	if(YEAR(year))
	{
		printf("是闰年");
	}
	else printf("不是闰年");
	system("pause");
	return 0;
}

#endif
#if 0
#include"stdall.h"
//#define NL putch('\n')
#define DEB
#define PR(fomat,value) printf("value=%fomat",value)

int main()
 {    
	float m=20;
	 PR(f,m);
	// NL;
		#ifdef DEB
	     float fnum=20;
		 printf("%d",fnum);
		 #endif


	 system("pause");
  return 0;
}
#endif
#if 0

#include"stdall.h"
#define CHANGE 0
//密码编码
int main()
{ 
	char str[100]={'\0'};
	int i=0;
	while ((str[i++]=getchar())!='\0')
	{ 
	   #if CHANGE
		putchar(str[--i]);
		//printf("%s",str);
		#else
		if (islower(str[--i])||isupper(str[i]))
		{
			str[i]=str[i]+1;
			putchar(str[i]);
		}
	   #endif
}


  return 0;
}

#endif
#if 1
//关于内存对齐的解析
//系统默认是以8字节对齐
//就是#pragram push(pack,8)
#include"stdall.h"

struct student
{   char sno;
	double age;
	char name[20];
	double na;
}s;
//////////////////////////////////////////////////////////////////////////
//28的值
int main()
{   
	printf("%d\n",&s);
	printf("%d\n",&s.sno);
	printf("%d\n",&s.age);
	printf("%d\n\n",s.name);

	printf_s("%d\n",&s.name[19]);
	printf("%d\n",&s.na);
	printf("%d",sizeof(struct student));
	//
	system("pause");
	return 0;
}

#endif