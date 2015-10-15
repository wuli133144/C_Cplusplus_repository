//#include <stdio.h>
//#include <stdlib.h>
//
///*
//creator:吴玉杰
//time:2015/9/12
//place:xust
//*/
//
//#define _TYPE  int
//typedef struct _node 
//{
//  _TYPE data;//数据域
//  struct _node *next;
//}listlink,*pzlistlink;
//
////初始化
//pzlistlink Initlistlink()
//{
//	pzlistlink head;
//	if(!(head=(pzlistlink)malloc(sizeof(pzlistlink))))
//		return NULL ;
//	head->next=NULL;
//	return head;
//}
////bool 
////判断链表是否是空链表
//
//int IsEmptylistlink(pzlistlink head)
//{
//	if(head->next==NULL)
//		return  1;
//	return 0;
//}
//
////找到第i费节点
//pzlistlink Get(pzlistlink head,int i)
//{
//	pzlistlink p;
//	int j;
//	if(IsEmptylistlink(head))
//		return NULL;
//	if(i<1)
//		return NULL;
//	j=0;
//	p=head;
//	while(p->next!=NULL&&j<i)
//	{
//     p=p->next;
//	 j++;
//	}
//	if(j==i)
//		return p;
//	else
//		return NULL;//没有找到第i个元素
//
//}
//
////查找链表中元素是e的元素
//pzlistlink Location_Postion_List(pzlistlink head,_TYPE value)
//{
//	pzlistlink p;
//	_TYPE data;
//	if(IsEmptylistlink(head))
//		return NULL;
//	p=head;
//	while(p->data!=value&&p->next!=NULL)
//	{
//		p=p->next;
//	}
//	if(p->data==value)
//		return p;//找到指定的元素
//	else
//		return NULL;//找不到指定的元素
//
//}
//
////定位操作
//int Location_Pos(pzlistlink head,_TYPE value)
//{
// pzlistlink p;
// int i=0;
// p=head;
// if(IsEmptylistlink(head))
//	 return -1;
//  while(p)
//  {
//    if(p->data!=value)
//	{p=p->next;
//	 i++;
//	}
//	else
//		break;
//  }
//  if(p->data==value)
//	  return i;
//  else
//	  return 0;
//}
//
////插入操作
////在单链表的第i个位置插入元素e
//int insert_list(pzlistlink head,int __j/*j从1开始计数*/,_TYPE e)
//{
//	pzlistlink p,q;
//	int i;
//	p=head;
//	i=0;
//	while (p->next!=NULL&&i<__j-1)//关键的一步
//	{  
//		p=p->next;
//		i++;
//	}
//	if(i!=__j-1)//超出了插入位置的范围
//	{	
//		printf("插入的位置错误！");
//    	return 0;
//	}
//	if((q=(pzlistlink)malloc(sizeof(listlink)))==NULL)
//		exit(-1);
//	q->data=e;
//	q->next=p->next;
//	p->next=q;
//	return 1;
//}
//
//int Del_list_Element(pzlistlink head,int i)
//{
//	pzlistlink p,q;
//	int j=0;
//	p=head;
//	while(p->next!=NULL&&j<i-1&&p->next->next!=NULL)
//	{
//		p=p->next;
//		j++;
//	}
//	if(j!=i-1)
//	{
//		printf("删除的位置不合理");
//		exit(-1);
//    }
//	q=p->next;
//	//*e=p->next->data;
//	p->next=q->next;
//	free(q);
//	return 1;
//
//    
//}
//
////求链表的长度
//int getlength(pzlistlink head)
//{
//	int i=0;
//	pzlistlink p;
//	p=head;
//	while(p->next!=NULL)
//	{  
//		p=p->next;
//		i++;
//	}
//	return i;
//}
//
////销毁链表
//void destory(pzlistlink head)
//{
//	pzlistlink p,q;
//	p=head;
//	while(p!=NULL)
//	{
//		q=p;
//		p=p->next;
//		free(q);
//		q=NULL;
//	}
//}
////遍历单链表
//void printfallelement(pzlistlink head)
//{
//	pzlistlink p;
//	p=head;
//	while(p->next!=NULL)
//	{
//			p=p->next;
//			printf("%d ",p->data);
//	}
//}