#pragma  once 
#include<stdio.h>
#include <stdlib.h>

/*
 *Copyright (C), 2015-2020 �����,
 *All rights reserved.
 *
 *�ļ����ƣ�
 *�ļ���ʾ��
 *ժҪ��
 *
 *��ǰ�汾��1.1
 *����: �����
 *����ʱ��: 2015/09/28
 * 
 *ȡ���汾��1.0
 *ԭ���ߣ������
 *���ʱ�䣺2015/09/28
 *
*/

int source[]={1,2,5,4,5,2,2};
typedef struct _bittree
{
	int data;
	struct _bittree *lchild;
	struct _bittree *rchild;
}*pzbittree,m_bittree;


//����ڵ�
void InsertBitTree(pzbittree *pztree,int key)
{   
	pzbittree *p,*parent,*q;
	*p=(pzbittree )malloc(sizeof(struct _bittree));
	if((*p)== NULL)
		exit(-1);
	(*p)->data=key;
	(*p)->lchild=NULL;
	(*p)->rchild=NULL;
	q=pztree;
	while(q)
	{
            parent=q;
			if(key<(*q)->data)
			{
				(*q)=(*q)->lchild;
			}
			else
			{
	            (*q)=(*q)->rchild;
			}
	}

	if(key<(*parent)->data)
	{
		(*parent)->lchild=(*p);
	}
	else 
	{
			(*parent)->rchild=(*p);
	}
}

void createbittree(pzbittree *tree,int data[],int n)
{
	int i;
	(*tree)->data=data[0];
	(*tree)->lchild=(*tree)->rchild=NULL;
	for(i=0;i<n;i++)
	{
		InsertBitTree(tree,data[i]);
	}
}

void traverse(pzbittree tree)
{
	if(tree)
	{
		printf("%2d",tree->data);
		traverse(tree->lchild);
		traverse(tree->rchild);
	}
}