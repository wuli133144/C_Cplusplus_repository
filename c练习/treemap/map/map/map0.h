#include<stdlib.h>
#include<stdio.h>

#define maxsize     20
typedef struct 
{
	char data;//����
	char *info;//��Ϣ
} Edgenode;

typedef struct 
{
	Edgenode *adlist[maxsize];
	int vernum;//������
	int edgenum;//����
	int graphtype;//����

}Lingraph;


void createmap(Lingraph *p)
{
	int i,weight;
	int start,end;
	Edgenode *node;
	for(i=0;i<p->vernum;i++)
	{
            //��ʼ��
		p->adlist[i]=NULL;
	}

	for(i=0;i<p->vernum;i++)
	{

		fflush(stdin);
		printf_s("��%d����",i+1);
		fflush(stdin);
		scanf_s("%d,%d,%d",&start,&end,&weight);

		node=(Edgenode *)malloc(sizeof(Edgenode));
		node->data=

	}
}