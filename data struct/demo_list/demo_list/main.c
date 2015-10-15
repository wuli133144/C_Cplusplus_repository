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

  //创建函数:create_list()
  //参数：void
  //返回值：lplist
  LPList create_list()
  {
	  LPList head,p,q;
	  head=p=q=NULL;
	  p=(LPList)malloc(LEN);//开辟空间
	  if(p==NULL)return NULL;
	  fflush(stdin);//刷新
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
			 p=(LPList)malloc(LEN);//开辟空间
	  }
	  q->next=NULL;
	  free(p);
	  p=NULL;
	  return head;

	  
  }
  //////////////////////////////////////////////////////////////////////////
  //函数名：insertBefore(lplist head)
  //参数：lplist head
  //返回值：lplist 
  LPList insertBefore(LPList head,INT_32 data)
  {   
	  LPList tem=NULL,q=head;
	  //开辟插入的值
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
  //函数名：_insertBefore()
  //参数：lplist head
  //返回值：void
  //代码如下：
  void _insertbefore(LPList *head,INT_32 data)
  {
	  LPList  tem=NULL;
	  LPList q=*head;
	  //开辟插入的值
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

  //后插
  //函数名：insertlast()
  //参数：lplist 
  //返回值:lplist
  LPList insertlast(LPList head,INT_32 data)
  {

	  LPList tem=NULL,q=head;
	  //开辟插入的值
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
	  //开辟插入的值
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
  //遍历函数 showlist（）
  //参数:lplist head;
  //返回值：void
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
  //函数名：del_list()
  //参数：lplist
  //返回值：lplist
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
 //功能：前删
 //函数名：_del_list()
 //参数：lplist
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
//遍历节点数
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
//功能：制定的位置插入
//函数：insert_location(lp)
//参数：head
//参数类型：lplist
//返回值：lplist
//
LPList insert_location(LPList head,INT_32 tag,INT_32 data)
{   LPList p=NULL,q=NULL;
    INT_32 posi=0;//记录位置
	LPList tem=head;
	p=(LPList)malloc(LEN);
	if (p==NULL)return NULL;
	p->data=data;
    if(head==NULL) exit(0);
	if (tag>num_list(head)||tag<0)exit(1);
	while(tem->next)
	{   posi++;
		if (posi==tag)//找到位置插入
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
//功能：指定的位置删除
//函数名：dele_location()
//参数：lplist head
//返回值：lplist
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
			//删除
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
//功能：逆序排序
//void sort_list(lplist head)
//参数：lplist
//返回值：lplist
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

//根据键值排序ff
//函数名：sort_value
//返回值：；lplist
//参数：lplist head
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
//删除链表
//delete_Clear()
//删除链表
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
//联表合并
//函数：union_list()
//参数：lplist a,lplist b
//返回值：lplist head
//细节描述：第二个参数连接到第一个参数后面
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
       _tem0=_tem0->next;//后移
    }
	if(b!=NULL)
	_tem0->next=b;
    return a;
}
//////////////////////////////////////////////////////////////////////////
//功能：推出：
//参数：void
//返回值：void
void _close_list(void)
{
	exit(0);
}

//函数:界面的设计
void design_ui(void)
{
	printf_s("\t\t\t**************************\n");
	printf_s("\t\t\t一下是链表的操作\n");
	printf_s("\t\t\t 1,创建链表\n");
	printf_s("\t\t\t 2,前插节点\n");
	printf_s("\t\t\t 3,后插节点\n");
	printf_s("\t\t\t 4,前删\n");
	printf_s("\t\t\t 5，指定位置的插入\n");
	printf_s("\t\t\t 6，指定位置的删除\n");
	printf_s("\t\t\t 7,逆序链表\n");
    printf_s("\t\t\t 8,根据键值排序\n");
	printf_s("\t\t\t 9,删除链表\n");
	printf_s("\t\t\t 10,联表合并\n");
	printf_s("\t\t\t 11,浏览链表\n");

	printf_s("\t\t\t 12,推出\n");
	printf_s("\t\t\t**************************\n");
	printf_s("请输入您的选择\n");
}
void choose_(INT_32 num)
{
	switch(num)
	{
case 1:{head=create_list();break;}
case 2:{
	  int num;
	  printf_s("输入您想插入的数字\n");
	  scanf("%d",&num);
      head1=insertBefore(head,num);//前插
	  break;
	  }
case 3:
    {
		int num;
		printf_s("输入您想插入的数字\n");
		scanf("%d",&num);
		head1=insertlast(head,num);//前插
	}
case 4:
	{
		delete_li(&head);
		break;
	}
case 5:
	{
		int num,posi;
		printf_s("输入您想插入的数字\n");
		scanf("%d",&num);
		printf_s("\n");
		printf_s("输入您想插入的数字的位置\n");
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
		printf_s("输入您想删除的数字的位置\n");
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
	//插入操作
    //head1=insertBefore(head,8);
	//_insertbefore(&head,8);
   // head1=insertlast(head,8);
   //  _insertlast(&head,8);	
	// delete_li(&head);
	//showlist(head);//遍历链表
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