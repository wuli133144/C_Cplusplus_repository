#include <stdlib.h>
#include<stdio.h>

#define  infinity   1000
#define  maxsize    20




//typedef struct 
//{
//	int verdaa;//����ֵ
//	infotype *info;//�ڵ����Ϣ
//}vertexttype;
//
//typedef struct 
//{
//	int edges[maxsize][maxsize];//�ڵ����Ϣ
//	int vexnum,arcnum;//�ڵ�ĸ���
//	vertexttype vexs[maxsize];//�ڵ����Ϣ
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
	printf_s("����������ֵ\n");
	/*
	���붨�����Ϣ
	*/
	fflush(stdin);
	for(i=0;i<TU->verNum;i++)
	{
		//getchar();
		printf_s("��%d������:",i);
		scanf_s("%c",&(TU->Vertex[i]));//���붥�ص�ֵ
		fflush(stdin);
	}

	printf_s("���빹�ɸ��ߵ������������Ϣ��Ȩֵ\n");
	fflush(stdin);
	for(k=0;k<TU->edgenum;k++)
	{
		//getchar();
		//fflush(stdin);
		printf_s("\n��%d����:",k+1);
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
����ڵ�
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

