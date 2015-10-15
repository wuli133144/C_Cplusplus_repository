#include <stdio.h>
#include <malloc.h>

#define _type int

typedef struct _node0
{
  _type data;
  struct _node0 *next;
} listnode,*pzlistnode;

pzlistnode Createlistnode(int n)
{
	pzlistnode head=NULL,p,q;
	_type e;
	int i;
	i=1;
	q=NULL;
	while(i<=n)//创建n个节点
	{
           printf("请输入第%d节点的值：",i);
		   scanf_s("%d",&e);
 		  if(i==1)//创建第1个节点
		  {
			  head=(pzlistnode)malloc(sizeof(listnode));
			  head->data=e;
			  head->next=NULL;
			  q=head;
		  }
		  else
		  {
		     p=(pzlistnode)malloc(sizeof(listnode));
			 p->data=e;
			 p->next=NULL;//设置尾节点的指针式空
			 q->next=p;//链接
			 q=p;//后移一位
		  }
		  i++;

	} 
  if(q!=NULL){
            q->next=head;
	}
	return head;
}

//遍历节点
void printf_listnode(pzlistnode head)
{
    pzlistnode p;
	p=head;
	if(head==NULL) return;
	while(p->next!=head)//不是最后一个节点
	{
          printf("%d ",p->data);
		  p=p->next;
	}
	//输出最后一个节点
	printf("%d ",p->data);
}


//创建循环链表

pzlistnode  Create_Circle_list()
{
	pzlistnode p=NULL,q=NULL,head=NULL;
	int e,i=1;
	//printf("请输入第%d节点",&i);
	while(scanf_s("%d",&e)==1)
	{  
	   if(i==1)//创建第一个节点
	   {
		   if(!(head=(pzlistnode)malloc(sizeof(struct _node0))))
			   exit(-1);
		   head->data=e;
		   head->next=NULL;
		   q=head;
		}
	   else 
	   {
           p=(pzlistnode)malloc(sizeof(struct _node0));
		   p->data=e;
		   p->next=NULL;
		   q->next=p;
		   q=p;//q后移
	   }
       i++;
	   
	}
	if(q!=NULL)
		q->next=head;
	return head;
}
//计算节点数
int getcount(pzlistnode head)
{
	pzlistnode p=head;
	int i=1;
	while(p->next!=head)
	{
	  i++;
	  p=p->next;
	}
	return i;

	
}
//于瑟夫循环
void yuesefu_circle(pzlistnode head,int n)
{
	int i=1,index=1,tag=0;
	int count=getcount(head);
	pzlistnode p=head;
	for(;;)
	{   
		if(p->data==0)
		{
	         p=p->next;
		}
		if(i%(n+1)==0)
		{ 
          printf("删除%d个玩家\n\n",index);
		  tag++;
		  p->data=0;
		 
		  i=0;
		  if(tag==count-1)
		  {
			  break;
		  }
	     }

		if(index<count)
		    index++;
		else 
			index=1;
		
		i++;
		p=p->next;
	}
}

//约瑟夫输出
void printf_node(pzlistnode head)
{
	pzlistnode p=head;
	while(p->next!=head)
	{  
		if(p->data!=0)
		   printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
}

//说明
//n是数到n的出队

//从k开始报数
void jusephsu(pzlistnode head,int n,int k)
{
   pzlistnode p,q;
    int i;
   p=head;
  
   for(i=1;i<k;i++)
   {  
	  q=p;//q记录上一个位置 用于删除p
      p=p->next;
	//  i++;//找到k位置
   }
   while(p->next!=p){
		//数到m的删除
	  for(i=1;i<n;i++)
	   {   q=p;
		   p=p->next;
	   }
   q->next=p->next;
   printf("%4d",p->data);
   free(p);
   p=q->next;//重新开始
   }
    printf("%4d",p->data);
  }


pzlistnode createcirclelist(int n)
{
	pzlistnode head=NULL;
	pzlistnode p,q;
	int i;
	for(i=1;i<=n;i++)
	{
         p=(pzlistnode)malloc(sizeof(struct _node0));
		 p->data=i;
		 p->next=NULL;
		 if(NULL==head){
			 head=p;//头节点是p
		 }
		 else 
		 {q->next=p;//建立子节点 q
		  // head->next=q;
		 }
		 q=p;//让p指向q想法奇特
	 }
	q->next=head;//
	return head;
}


//代码必须经常的码
//默写创建约瑟夫循环-
pzlistnode create_list_node_circle(int n)
{
  pzlistnode p,q;
  pzlistnode head=NULL;
  int i;
  for(i=1;i<=n;i++){
	  p=(pzlistnode)malloc(sizeof(struct _node0));
	  p->data=i;
	  p->next=NULL;
	  if(NULL==head)//第一次创建节点
	  {
		  head=p;
	  }
	  else 
	  {
		  q->next=p;
	  }
	  q=p;//当前的时候记录p的地址 用于下一次的书写
  }
    q->next=head;
	return head;
}

//约瑟夫循环
pzlistnode create_link_circle(int n)
{
	//pzlinkcircle
	pzlistnode p,q;
	pzlistnode head=NULL;
	int i;
	for(i=1;i<=n;i++)
	{
		p=(pzlistnode)malloc(sizeof(struct _node0));
		p->data=i;
		p->next=NULL;
		if(head==NULL)
		{
			head=p;
		}
		else 
	    {
			q->next=p;
		}
       q=p;
	}
	 
	q->next=head;
	return head;

}

//创建循环链表
 pzlistnode create_nomal_list(int n)
 {
	 pzlistnode p,q;
	 pzlistnode head=NULL;
	 int i=1;
	 int value;
	 while(i<=n)
	 {   //创建单链表
		 printf("输入第%d个节点元素",i);
		 scanf_s("%d",&value);
		 if(i==1)
		 {  
			 head=(pzlistnode)malloc(sizeof(struct _node0));
			 head->data=value;
			 head->next=NULL;
			 q=head;
		 }
		 else
		 {
			  p=(pzlistnode)malloc(sizeof(struct _node0));
			  p->data=value;
			  p->next=NULL;
			  q->next=p;
			  q=p;
			  
		 }
		 i++;
	 }
	 if(q!=NULL)
	  q->next=head;
	    return head;
 }

 //创建循环链表
 pzlistnode create_list_single_node(int n)
 {
     pzlistnode p,q;
	 pzlistnode head=NULL;
	 int e;
	 int i=1;
	 while(i<=n)
	 {   
		 printf("输入第%d个节点数",i);
		 scanf_s("%d",&e);
	     if(i==1)
		 {
		    head=(pzlistnode)malloc(sizeof(struct _node0));
			head->data=e;
			head->next=NULL;
		    q=head;
		 }
		 else
		 {
		   p=(pzlistnode)malloc(sizeof(struct _node0));
		   p->data=e;
		   p->next=NULL;
		   q->next=p;
		   q=p;//q向后偏移

      }
		 i++;
	 }
	 if(q!=NULL)
	 {
		 q->next=head;
	 }
	 return head;
 }

 //创建单链表
 pzlistnode create_single_list(int n)
 {
	 pzlistnode p,q;
	 pzlistnode head=NULL;
	 int i=1;
	 int value;
	 while(i<=n)//创建n个节点
	 {
		 printf("插入第%d个节点值",i);
		 //
		 scanf_s("%d",&value);
		 if(i==1)
		 {
			 head=(pzlistnode)malloc(sizeof(struct _node0));
			 head->next=NULL;
			 head->data=value;
			 q=head;
		 }
		 else
		 {
				p=(pzlistnode)malloc(sizeof(struct _node0));
				//p=p->next;
				p->next=NULL;
				p->data=value;
				q->next=p;
				q=p;//保持头节点
				
		 }

		 //
		  i++;
	 }
		
	 return head;

}

 //创建单链表
 pzlistnode _Create_single_list()
 {
       pzlistnode p,q;
	   pzlistnode head=NULL;
	   int e;
	   while(scanf_s("%d",&e)==1)
	   {
		   if(NULL==head)
		   {
			   head=(pzlistnode)malloc(sizeof(struct _node0));
			   head->data=e;
			   head->next=NULL;
			   q=head;//记录头节点
		   }
		   else
		   {
			   p=(pzlistnode)malloc(sizeof(struct _node0));
			   p->data=e;
			   p->next=NULL;
			   q->next=p;
			   q=p;
		   }
	   }

   return head;
 }

 //单链表的逆转
 //不带头节点

 void reverse_list(pzlistnode head)
 {
     //转置
    //带头节点
	 //带头节点的逆转
	 pzlistnode p,q;
	 p=head->next;
	 head->next=NULL;

	 while(p)
	 {
		 q=p;
		 p=p->next;
		 q->next=head->next;//
		  head->next=q;
	 }
	 
	
	
 }

 //插入元素
 void insert_value_list(pzlistnode head,int value,int pos)
 {
	 int i=1;
	 pzlistnode p,q,m;
	 p=head;
	 for(;i<pos;i++)//插入pos位置
	 {    
		   q=p;
		   p=p->next;
     }
	 m=(pzlistnode)malloc(sizeof(struct _node0));
	 m->data=value;

	 q->next=m;
	 m->next=p;

}

 //获取指定的元素
 int find_value_list(pzlistnode head,int i)
 {
	 int j=1;
	 pzlistnode p;
	 p=head;
	 while(p->next!=NULL&&j<i)
	 {   
		 j++;
		 p=p->next;
	 }
	 if(j==i)
	 {
		 return p->data;
	 }
	 else 
		 return 0;

 }

 //删除指定的元素
 void delele_list(pzlistnode head,int pos)
 {
   pzlistnode p,q;
   int i=1;
   p=head;
  
   for(;i<pos;i++)
   {
     q=p;
	 p=p->next;
   }
   if(i==pos)
   {
      q->next=p->next;
	  free(p);
   }

 }

