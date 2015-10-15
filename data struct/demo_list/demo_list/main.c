#if 1
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define LEN  sizeof(LIST)

typedef int INT_32;
  typedef struct _list 
{   
	INT_32 data;
	struct _list *next;
	 
}LIST,*LPList;
  LPList head=NULL;
  LPList head1=NULL;

  //��������:create_list()
  //������void
  //����ֵ��lplist
  LPList create_list()
  {
	  LPList head,p,q;
	  head=p=q=NULL;
	  p=(LPList)malloc(LEN);//���ٿռ�
	  if(p==NULL)return NULL;
	  fflush(stdin);//ˢ��
	  while(scanf("%d",&p->data)==1)
	  {    
             if(head==NULL)
			 {
				 head=p;
				 q=p;
			 }
			 else
			 { 
				 q->next=p;
			 }
			 q=p;
			 p=(LPList)malloc(LEN);//���ٿռ�
	  }
	  q->next=NULL;
	  free(p);
	  p=NULL;
	  return head;

	  
  }
  //////////////////////////////////////////////////////////////////////////
  //��������insertBefore(lplist head)
  //������lplist head
  //����ֵ��lplist 
  LPList insertBefore(LPList head,INT_32 data)
  {   
	  LPList tem=NULL,q=head;
	  //���ٲ����ֵ
	  tem=(LPList)malloc(LEN);
	  tem->data=data;
	  if(tem==NULL)exit(1);
	  if(head==NULL)
	  {
		  head=tem;
		  head->next=NULL;
	  }
	  else
	  {  
		  head=tem;
		  head->next=q;
	  }
	  free(tem);
	  tem=NULL;
		return head ;
  }
  //////////////////////////////////////////////////////////////////////////
  //��������_insertBefore()
  //������lplist head
  //����ֵ��void
  //�������£�
  void _insertbefore(LPList *head,INT_32 data)
  {
	  LPList  tem=NULL;
	  LPList q=*head;
	  //���ٲ����ֵ
	  tem=(LPList)malloc(LEN);
	  (tem)->data=data;
	  if(tem==NULL)exit(1);
	  if(*head==NULL)
	  {
		  *head=tem;
		  (*head)->next=NULL;
	  }
	  else
	  {  
		  *head=tem;
		  (*head)->next=q;
	  }
	 // free(tem);
	  //tem=NULL;
	
	  
  }

  //���
  //��������insertlast()
  //������lplist 
  //����ֵ:lplist
  LPList insertlast(LPList head,INT_32 data)
  {

	  LPList tem=NULL,q=head;
	  //���ٲ����ֵ
	  tem=(LPList)malloc(LEN);
	  tem->data=data;
	  if(tem==NULL)exit(1);
	  if(head==NULL)
	  {
		  head=tem;
		  head->next=NULL;
	  }
	 else
	 {
	    while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=tem;
		tem->next=NULL;

	 }
	 // free(tem);
	 // tem=NULL;
	  return head ;

  }
  //////////////////////////////////////////////////////////////////////////
  void _insertlast(LPList *head,INT_32 data)
  {

	  LPList tem=NULL,q=*head;
	  //���ٲ����ֵ
	  tem=(LPList)malloc(LEN);
	  tem->data=data;
	  if(tem==NULL)exit(1);
	  if(*head==NULL)
	  {
		  *head=tem;
		  (*head)->next=NULL;
	  }
	  else
	  {
		  while(q->next!=NULL)
		  {
			  q=q->next;
		  }
		  q->next=tem;
		  tem->next=NULL;

	  }
	 }
  //////////////////////////////////////////////////////////////////////////
  //�������� showlist����
  //����:lplist head;
  //����ֵ��void
  void showlist(LPList head)
  {
	  LPList ptem=head;
	  if(head==NULL)exit(1);
	  while(ptem!=NULL)
	  {   printf_s("%d\n",ptem->data);
		  ptem=ptem->next;
	  }
  }
  //////////////////////////////////////////////////////////////////////////
  //��������del_list()
  //������lplist
  //����ֵ��lplist
  LPList  dele_list(LPList head)
  {
	  LPList tem=head;
	  if (head==NULL)
	  {
		  exit(0);
	  }
	  else
	  {
		  while(head->next)
	          {
				  head=head->next;
				  free(tem);
				  tem=NULL;
				  tem=head;
		      }
		   free(head);
		   head=NULL;
	  }
	 return NULL;

  }
 //////////////////////////////////////////////////////////////////////////
 //���ܣ�ǰɾ
 //��������_del_list()
 //������lplist
void delete_li(LPList *head)
{

	LPList tem=*head;
	if (*head==NULL)
	{
		exit(0);
	}
	else
	{
		while((*head)->next)
		{
			*head=(*head)->next;
			free(tem);
			tem=NULL;
			tem=*head;
		}
		free(*head);
		*head=NULL;
	}

}
//�����ڵ���
int num_list(LPList head)
{  int num=0;
	while(head->next)
	{
		++num;
		head=head->next;
	}
	return ++num;
}
//////////////////////////////////////////////////////////////////////////
//���ܣ��ƶ���λ�ò���
//������insert_location(lp)
//������head
//�������ͣ�lplist
//����ֵ��lplist
//
LPList insert_location(LPList head,INT_32 tag,INT_32 data)
{   LPList p=NULL,q=NULL;
    INT_32 posi=0;//��¼λ��
	LPList tem=head;
	p=(LPList)malloc(LEN);
	if (p==NULL)return NULL;
	p->data=data;
    if(head==NULL) exit(0);
	if (tag>num_list(head)||tag<0)exit(1);
	while(tem->next)
	{   posi++;
		if (posi==tag)//�ҵ�λ�ò���
		{
			q->next=p;
			p->next=tem;
			break;
		}
	    q=tem;
		tem=tem->next;
	}
   return head;
}
//////////////////////////////////////////////////////////////////////////
//���ܣ�ָ����λ��ɾ��
//��������dele_location()
//������lplist head
//����ֵ��lplist
LPList dele_list_location(LPList head ,INT_32 tag)
{   INT_32 posi=0;
	LPList tem=head;
	LPList p=NULL;
	if(head==NULL) exit(0);
	if(tag==1)
	{    head=head->next;
		 free(tem);
	}
	if (tag==num_list(head))
	{
		while(tem->next)
		{
		  tem=tem->next;
		}
		free(tem);
		tem=NULL;
	}
	else
	while(tem->next)
	{
		posi++;
		if(posi==tag)
		{
			//ɾ��
			p->next=p->next->next;
			free(tem);
			break;
		}
		p=tem;
		tem=tem->next;
	}
    return head;
}
//////////////////////////////////////////////////////////////////////////
//���ܣ���������
//void sort_list(lplist head)
//������lplist
//����ֵ��lplist
LPList sort_list(LPList head)
{
	LPList p=NULL,q=NULL;
    p=head;
	q=p->next;
    p->next=NULL;
	// p=head;
	if(head==NULL)exit(0);
	while(q)
	{  
      p=q;
      q=q->next;
      p->next= head;	
	  head=p;
	}
    return head;
}

//���ݼ�ֵ����ff
//��������sort_value
//����ֵ����lplist
//������lplist head
LPList sort_value(LPList head)
{
	LPList p=head;
	INT_32 max;
	INT_32 n,m,tem_max;
	INT_32 lenth=num_list(head);
	if(p==NULL)exit( 0);
	 max=p->data;

	for(n=0;n<lenth-1;n++)
	{    p=head;
		for(m=0;m<lenth-n-1;m++)
		{
			//
			p=p->next;
			if (p->data>max)
			{
				tem_max=p->data;
				max=tem_max;
				p->data=tem_max;
			}
		}
	}
	return head;
}
//ɾ������
//delete_Clear()
//ɾ������
void delete_clear(LPList head)
{   LPList p=head,tem=NULL;
	while(head->next)
	{  
		tem=head;
		head=head->next;
        free(tem);
		tem=NULL;
	}
}
//����ϲ�
//������union_list()
//������lplist a,lplist b
//����ֵ��lplist head
//ϸ���������ڶ����������ӵ���һ����������
//////////////////////////////////////////////////////////////////////////
LPList union_list(LPList a,LPList b)
{   
	LPList _tem0,_tem1;
	_tem0=NULL;
	_tem1=NULL;
	_tem0=a;
	if(a==NULL) exit(0);
	while (_tem0->next)
	{   
       _tem0=_tem0->next;//����
    }
	if(b!=NULL)
	_tem0->next=b;
    return a;
}
//////////////////////////////////////////////////////////////////////////
//���ܣ��Ƴ���
//������void
//����ֵ��void
void _close_list(void)
{
	exit(0);
}

//����:��������
void design_ui(void)
{
	printf_s("\t\t\t**************************\n");
	printf_s("\t\t\tһ��������Ĳ���\n");
	printf_s("\t\t\t 1,��������\n");
	printf_s("\t\t\t 2,ǰ��ڵ�\n");
	printf_s("\t\t\t 3,���ڵ�\n");
	printf_s("\t\t\t 4,ǰɾ\n");
	printf_s("\t\t\t 5��ָ��λ�õĲ���\n");
	printf_s("\t\t\t 6��ָ��λ�õ�ɾ��\n");
	printf_s("\t\t\t 7,��������\n");
    printf_s("\t\t\t 8,���ݼ�ֵ����\n");
	printf_s("\t\t\t 9,ɾ������\n");
	printf_s("\t\t\t 10,����ϲ�\n");
	printf_s("\t\t\t 11,�������\n");

	printf_s("\t\t\t 12,�Ƴ�\n");
	printf_s("\t\t\t**************************\n");
	printf_s("����������ѡ��\n");
}
void choose_(INT_32 num)
{
	switch(num)
	{
case 1:{head=create_list();break;}
case 2:{
	  int num;
	  printf_s("����������������\n");
	  scanf("%d",&num);
      head1=insertBefore(head,num);//ǰ��
	  break;
	  }
case 3:
    {
		int num;
		printf_s("����������������\n");
		scanf("%d",&num);
		head1=insertlast(head,num);//ǰ��
	}
case 4:
	{
		delete_li(&head);
		break;
	}
case 5:
	{
		int num,posi;
		printf_s("����������������\n");
		scanf("%d",&num);
		printf_s("\n");
		printf_s("���������������ֵ�λ��\n");
		scanf("%d",&posi);
		insert_location(head,posi,num);
		break;
	}
case 11:
	{

		showlist(head);
		printf_s("\n\n");
		//showlist(head1);
		break; 
	}
case 6:
	{
		int posi;
		printf_s("��������ɾ�������ֵ�λ��\n");
		scanf("%d",&posi);
		dele_list_location(head,posi);
		break;
	}
case 7:
	{
      sort_list(head);
	  break;
	}
case 8:
	{
		sort_value(head);
		break;
	}
case 9:
	{
		delete_clear(head);
		delete_clear(head1);
		break;
	}
case 10:
	{
		union_list(head,head1);
		break;
	}
case 12:
	{
		exit(0);
		break;
	}
default:
 break;
	}
	
}

main()
{  
	//�������
    //head1=insertBefore(head,8);
	//_insertbefore(&head,8);
   // head1=insertlast(head,8);
   //  _insertlast(&head,8);	
	// delete_li(&head);
	//showlist(head);//��������
	//insert_location(head,2,8);
	//head1=dele_list_location(head,2);
	//head1=sort_list(head);
	//head1=sort_value(head);
	/*
	showlist(head);
	delete_clear(head1);*/	
	int num;
	
	design_ui();
    scanf("%d",&num);
	choose_(num);

	system("pause");
	
}
#endif