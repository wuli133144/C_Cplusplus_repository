//#include <stdio.h>
//#include <stdlib.h>
//
///*
//creator:�����
//time:2015/9/12
//place:xust
//*/
//
//#define _TYPE  int
//typedef struct _node 
//{
//  _TYPE data;//������
//  struct _node *next;
//}listlink,*pzlistlink;
//
////��ʼ��
//pzlistlink Initlistlink()
//{
//	pzlistlink head;
//	if(!(head=(pzlistlink)malloc(sizeof(pzlistlink))))
//		return NULL ;
//	head->next=NULL;
//	return head;
//}
////bool 
////�ж������Ƿ��ǿ�����
//
//int IsEmptylistlink(pzlistlink head)
//{
//	if(head->next==NULL)
//		return  1;
//	return 0;
//}
//
////�ҵ���i�ѽڵ�
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
//		return NULL;//û���ҵ���i��Ԫ��
//
//}
//
////����������Ԫ����e��Ԫ��
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
//		return p;//�ҵ�ָ����Ԫ��
//	else
//		return NULL;//�Ҳ���ָ����Ԫ��
//
//}
//
////��λ����
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
////�������
////�ڵ�����ĵ�i��λ�ò���Ԫ��e
//int insert_list(pzlistlink head,int __j/*j��1��ʼ����*/,_TYPE e)
//{
//	pzlistlink p,q;
//	int i;
//	p=head;
//	i=0;
//	while (p->next!=NULL&&i<__j-1)//�ؼ���һ��
//	{  
//		p=p->next;
//		i++;
//	}
//	if(i!=__j-1)//�����˲���λ�õķ�Χ
//	{	
//		printf("�����λ�ô���");
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
//		printf("ɾ����λ�ò�����");
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
////������ĳ���
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
////��������
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
////����������
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