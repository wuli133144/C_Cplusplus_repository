#include<stdlib.h>
#include<stdio.h>

#define maxsize     20
typedef struct 
{
	char data;//数据
	char *info;//信息
} Edgenode;

typedef struct 
{
	Edgenode *adlist[maxsize];
	int vernum;//定点数
	int edgenum;//边数
	int graphtype;//类型

}Lingraph;


void createmap(Lingraph *p)
{
	int i,weight;
	int start,end;
	Edgenode *node;
	for(i=0;i<p->vernum;i++)
	{
            //初始化
		p->adlist[i]=NULL;
	}

	for(i=0;i<p->vernum;i++)
	{

		fflush(stdin);
		printf_s("第%d条边",i+1);
		fflush(stdin);
		scanf_s("%d,%d,%d",&start,&end,&weight);

		node=(Edgenode *)malloc(sizeof(Edgenode));
		node->data=

	}
}