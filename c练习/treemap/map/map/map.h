#include <stdlib.h>
#include<stdio.h>

#define  infinity   1000
#define  maxsize    20




//typedef struct 
//{
//	int verdaa;//定点值
//	infotype *info;//节点的信息
//}vertexttype;
//
//typedef struct 
//{
//	int edges[maxsize][maxsize];//节点的信息
//	int vexnum,arcnum;//节点的个数
//	vertexttype vexs[maxsize];//节点的信息
//}MGraph;
typedef struct 
{
	char Vertex[maxsize];
	int edge[maxsize][maxsize];
	int istraverse[maxsize];
	int verNum;
	int edgenum;
	int Graphtype;
}MatrixGraph;


void  Createmap(MatrixGraph *TU)
{
	int i,j,weight,k;
	char start,end;
	printf_s("输入各定点的值\n");
	/*
	输入定点的信息
	*/
	fflush(stdin);
	for(i=0;i<TU->verNum;i++)
	{
		//getchar();
		printf_s("第%d个定点:",i);
		scanf_s("%c",&(TU->Vertex[i]));//输入顶地的值
		fflush(stdin);
	}

	printf_s("输入构成个边的两个定点的信息及权值\n");
	fflush(stdin);
	for(k=0;k<TU->edgenum;k++)
	{
		//getchar();
		//fflush(stdin);
		printf_s("\n第%d条边:",k+1);
		fflush(stdin);
		//getchar();
		//scanf_s("%c#%c#%d",&start,&end,&weight);
		//printf_s("\n");
		scanf_s("%c",&start);
		fflush(stdin);
		scanf_s("%c",&end);
		fflush(stdin);
		scanf_s("%d",&weight);
		for(i=0;start!=TU->Vertex[i];i++);
		for(j=0;end!=TU->Vertex[j];j++);
		TU->edge[i][j]=weight;

		if(TU->Graphtype==0)
		{
			TU->edge[j][i]=weight;
		}

    }


}

/*
输出节点
*/
void outnumber(MatrixGraph *map)
{

	int i,j;
	for(i=0;i<map->verNum;i++)
	{
		printf_s("\t%c  ",map->Vertex[i]);
	}

	printf_s("\n");

	for(i=0;i<map->verNum;i++)
	{
		printf_s("%c",map->Vertex[i]);

		for(j=0;j<map->verNum;j++)
		{
			if(map->edge[i][j] == infinity)
			{
			 printf_s("\t~");
			}
			else 
			{
				printf_s("\t%d",map->edge[i][j]);
			}
		}
		printf_s("\n");
   }
}

