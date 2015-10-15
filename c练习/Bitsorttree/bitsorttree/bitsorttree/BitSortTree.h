#pragma  once 
#include<stdio.h>
#include <stdlib.h>

/*
 *Copyright (C), 2015-2020 吴玉杰,
 *All rights reserved.
 *
 *文件名称：
 *文件标示：
 *摘要：
 *
 *当前版本：1.1
 *作者: 吴玉杰
 *创建时间: 2015/09/28
 * 
 *取代版本：1.0
 *原作者：吴玉杰
 *完成时间：2015/09/28
 *
*/

int source[]={1,2,5,4,5,2,2};
typedef struct _bittree
{
	int data;
	struct _bittree *lchild;
	struct _bittree *rchild;
}*pzbittree,m_bittree;


//插入节点
void InsertBitTree(m_bittree * pztree,int key)
{   

	//创建节点 
	m_bittree *p=NULL,*parent,*q;
	p=(m_bittree * )malloc(sizeof(struct _bittree));
	if((p)== NULL)
		exit(-1);
	(p)->data=key;
	(p)->lchild=NULL;
	(p)->rchild=NULL;

	//插入节点 找到合适的位置
	q=pztree;
	while(q)
	{
            parent=q;
			if(key<(q)->data)
			{
				(q)=(q)->lchild;
			}
			else
			{
	            (q)=(q)->rchild;
			}
	}
	//
	if(key < (parent)->data)
	{
		(parent)->lchild=(p);
	}
	else 
	{
		 (parent)->rchild=(p);
	}
}

void CreateBitTree(pzbittree tree,int data[],int n)
{
	int i;
	(tree)->data=data[0];
	(tree)->lchild=(tree)->rchild=NULL;
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

int search(pzbittree tree,int key)
{
	pzbittree p;
	p=tree;
	while(p->data!=key && p != NULL)
	{
         if(p->data > key)
		 {
			 p=p->lchild;
		 }
		 else 
		 {
		  p=p->rchild;
		 }
	}
	if(p != NULL)
	{
          return 1;
	}
	return 0;

}