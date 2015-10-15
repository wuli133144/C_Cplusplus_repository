#if 0

#ifndef  _TREE_H
#define  _TREE_H

#include <stdlib.h>
#include <stdio.h>
#define  maxsize  10
#define  infinity   100000
#define vertype  int 
#define  infoptr char

#define  vertexttype  char 

typedef enum{UD,DN,UG,UN}Graphkind;

/******************************/
//�洢�ߵ���Ϣ
typedef struct _tree
{
    vertype adj;//��¼0��1
	infoptr  *p;
}arcnode,adjmatrix[maxsize][maxsize];


//�洢�������Ϣ
typedef struct  
{
	vertexttype vex[maxsize];//��¼
	adjmatrix   arc;//��¼��ϵ1��0
	int vernum,arcnum;//��¼�ڵ����ͱ���
	Graphkind kind;//��¼����
}MGraph;




int locatevalue(MGraph N,vertexttype v);
/**********************************/
//����ͼ
void CreateMap(MGraph *M)
{
	int i,j,w,infoflag,I0,J0;
//	char s[maxsize];
	vertexttype v1,v2;
	printf_s("������������N�Ķ��������arc�� ������Ϣ���ǣ�1 ��0��:\n");
	fflush(stdin);
	scanf_s("%d,%d,%d",&(*M).vernum,&(*M).arcnum,&infoflag);
	
	//����ڵ��ֵ
	for(i=0;i<(*M).vernum;i++)
	{    
		printf_s("��%d�����㣺",i+1);
		fflush(stdin);
        scanf_s("%c",&(*M).vex[i]);
	}
	//��ʼ���ڽӾ���
	for(i=0;i<(*M).vernum;i++)
	{
		for(j=0;j<(*M).vernum;j++)
		{
	           (*M).arc[i][j].adj=infinity;
			   (*M).arc[i][j].p=NULL;

		}
	}


	//����ߺ�Ȩֵ
	printf_s("\n");
	printf("����%d���߼�Ȩֵ����Ϣ:\n",(*M).arcnum);
	fflush(stdin);
	for(i=0;i<(*M).arcnum;i++)
	{
	
		
		//scanf_s("%c,%c,%d",&v1,&v2,&w);
	    fflush(stdin);
	
		scanf_s("%c",&v1);
		scanf_s("%c",&v2);
		scanf_s("%d",&w);
		
		I0=locatevalue((*M),v1);
		J0=locatevalue((*M),v2);
		if((*M).arc[I0][J0].adj == infinity)
		{
		   (*M).arc[I0][J0].adj=w;
		   (*M).arc[J0][I0].adj=w;
		}
		else
			continue;
	}
}

#include <string.h>

int locatevalue(MGraph N,vertexttype v)
{
	int i;
	for(i=0;i<N.vernum;i++)
	{
		if(v == N.vex[i])
			return i;
	}
	return -1;
}


void printf_map(MGraph N)
{
	int i,j;
	printf("������ͼ��%d�������%d����",N.vernum,N.arcnum);
	for(i=0;i<N.vernum;i++)
	{
             printf(" %c ",N.vex[i]);
	}

	printf_s("\n");

	for(i=0;i<N.vernum;i++)
	{
		printf_s("\t%c",N.vex[i]);
	}
	printf_s("\n");

	for(i=0;i<N.vernum;i++)
	{
		printf_s("%c",N.vex[i]);
		for(j=0;j<N.vernum;j++)
		{  
			if(N.arc[i][j].adj == infinity)
				 printf_s("\t~",N.arc[i][j]);
			else 
			    printf_s("\t%d",N.arc[i][j]);
		}
		printf_s("\n");
	}


}
#endif 
#endif 
/**************************************************************/
/*														 */		
/*              �ڽӱ�Ĵ���														 */
/**************************************************************/



#if 1


#include <stdlib.h>
#include <stdio.h>

#define  MAXSIZE  100
typedef enum{GN,DN,UG,UN}GraphKind;

#define   typechar  char 

typedef struct _tagarc
{
	int pos;//��һ�����
	struct _tagarc *next;//��һ���ڵ�
	char *info;//����Ϣ
}arcNode;

typedef struct _tagVNode
{
	typechar data;
	arcNode * firstarc;
}ARR,ARRAYARC[MAXSIZE];

typedef struct ��tag
{
  ARRAYARC arr;
  int vernum;//������Ŀ
  int verarc;//�����Ŀ
  GraphKind kind;//ͼ������
}adjlistgraph;




int locatepos(adjlistgraph map,typechar v)
{
	int i;
	for(i=0;i<map.vernum;i++)
	{
		if(map.arr[i].data == v)
		{
			return i;
		}

	}
	return -1;
}

//�����ڽӱ�
void Create_Map(adjlistgraph *map)
{
	int i,j,k;
	typechar v1,v2;
	arcNode *p;
	printf_s("������ͼ�Ķ�����,������");
	fflush(stdin);
	scanf_s("%d,%d",&(*map).vernum,&(*map).verarc);
	printf_s("������%d�������ֵ:\n",map->vernum);
	fflush(stdin);

	/********************************/
	//��ʼ���ڵ�
	for(i=0;i<map->vernum;i++)
	{   
		//getchar();
		scanf_s("%c",&map->arr[i].data);
		map->arr[i].firstarc=NULL;
	}

	/*****************************************/

	printf_s("�����뻡β�ͻ�ͷ��ֵ:(�Կո����):\n");
	fflush(stdin);
	for(k=0;k<map->verarc;k++)
	{   
		  fflush(stdin);
          scanf_s("%c",&v1);

		  fflush(stdin);
		  scanf_s("%c",&v2);
		  i=locatepos(*map,v1);
		  j=locatepos(*map,v2);


		  //jΪ��� iΪ����
		  p=(arcNode *)malloc(sizeof(arcNode));
		  p->pos=j;
		  p->info=NULL;
		  p->next=map->arr[i].firstarc;
		  map->arr[i].firstarc=p;
		 // p->pos=i;
		  /*iΪ��� jΪ����*/
		  p=(arcNode*)malloc(sizeof(arcNode));
		  p->pos=i;
		  p->info=NULL;
		  p->next=map->arr[j].firstarc;
		  map->arr[j].firstarc=p;

	}
	(*map).kind=UG;

}


//destroy
void destroymap(adjlistgraph *map)
{
	int i,j;
	arcNode *p,*q;
	for(i=0;i<map->vernum;i++)
	{
		p=map->arr[i].firstarc;
		if(p!=NULL)
		{
			q=p->next;
			free(p);
			p=q;
		}
	}
	map->verarc=0;
	map->vernum=0;

}


void displayelement(adjlistgraph *map)
{
	int i;
	arcNode *p;
	printf_s("%d������:\n",map->vernum);
	//p=map->arr[i].firstarc;
	for(i=0;i<map->vernum;i++)
	{
	    p=map->arr[i].firstarc;
		if(p!=NULL)
		{
			printf("%c->%c",map->arr[i].data,map->arr[p->pos].data);
			p=p->next;
		}
		printf_s("\n");

	}

}

//�������̽��
//������ȱ����͹�����ȱ���
//
//void depthtravetse(MGraph N)
//{
//
//}

void visit(int i)
{
	printf_s("%d",i);
}
/********************************/
int visited[MAXSIZE]={0};
//ȫ�ֱ���
/***********************************/

void DFSsearch(adjlistgraph map,int i)
{    
	arcNode *p;
	visit(i);
	visited[i]=1;
	//for(i=)
	p=map.arr[i].firstarc;
	while(p!=NULL)
	{
		if(!visited[p->pos])
		{
		   //visit(p->pos);
			DFSsearch(map,p->pos);
			p=p->next;
		}
	}
}


#endif