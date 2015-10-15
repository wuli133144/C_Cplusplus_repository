#pragma  once 
#include<stdio.h>
#define  TYPE int
#define MAXSIZE  5

typedef struct 
{
  TYPE data[MAXSIZE];
  int length;
}sqelist;
//顺序表

//接口
//初始化顺序表
void Initlist(sqelist * L)
{
 L->length=0;
}

//bool 
//判断表是否是空
int IsemptyList(sqelist *L)
{
	return L->length==0;

}
//获取元素
void Getelement(sqelist *L,int index,TYPE * e)
{   
	if(index<0||index>L->length)return ;
	   e=&L->data[index];
}


int Locationelement(sqelist *L,	TYPE data)
{  
	int i=0;
	while(i<L->length)
	{
           if(data=L->data[i])
			 return i;
		   i++;
	}
	return 0;
}

//插入操作
//参数说明：l是表结构
//i是带插入的位置
//e是要插入的元素
int insertlist(sqelist *L,int i,TYPE e)
{
	int j;
	if(i<0||i>L->length+1)
	{
        printf("插入位置不合理");
		return -1;
	}
	else if(L->length>=MAXSIZE)
	{
		printf("表已经满了!");
		return 0;
	}
	else 
	{
		for(j=L->length;j>=i;j--)
		{
			L->data[j]=L->data[j-1];
		}
		L->data[i-1]=e;
		L->length=L->length+1;
		return 1;
	}
}

//删除元素
int delelist(sqelist *L,int i,TYPE *e)
{
	int j;
	if(i<0||i>L->length)
	{
		printf("删除位置出错！");
		return -1;
    }
	else if(L->length==0)
	{
		printf("表是空表！");
		return 0;
	}
	else
	{    e=&L->data[i-1];
		for(j=i;j<L->length-1;j++)
		{
			L->data[j-1]=L->data[j];

		}	
		
		L->length=L->length-1;
		return 1;
 	}

}
	
//返回链表长度
int  sqelistlength(sqelist *L)
{
	return L->length;
}
//清空操作
void sqeclear(sqelist *L)
{
 L->length=0;
}

//输出
void printflist(sqelist *L)
{   int i=0;
	for(;i<L->length;i++)
	{
		printf("%d ",L->data[i]);
	}
}