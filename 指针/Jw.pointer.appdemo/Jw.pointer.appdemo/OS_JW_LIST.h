/*
 *Copyright (C), 2015-2020 吴玉杰,
 *All rights reserved.
 *
 *文件名称：OS_JW_LIST.h
 *文件标示：osjw
 *摘要：list操作的集合
 *
 *当前版本：1.1
 *作者: 吴玉杰
 *创建时间: 2015/09/13
 * 
 *取代版本：1.0
 *原作者：吴玉杰
 *完成时间：2015/09/13
 *
 */	

/*
 *Copyright (C), 2015-2020 吴玉杰,
 *All rights reserved.
 *
 *文件名称：
 *文件标示：
 *摘要：
 *
 *当前版本：1.1
 *Author: 吴玉杰
 *Created: 2015/09/13
 * 
 *取代版本：1.0
 *原作者：吴玉杰
 *完成时间：2015/09/13
 *
*/
#pragma  once
#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>




#define  INT8 int
typedef struct _node
{
	INT8 data;
	struct _node *next;
}list_node,*pz_list_node;

pz_list_node head=NULL;
//创建带头节点的链表
pz_list_node create_head_list()
{
  pz_list_node head=NULL;
  int value;
  pz_list_node p,q;
  head=(pz_list_node)malloc(sizeof(struct _node));
  head->next=NULL;
  while(scanf_s("%d",&value)==1)
  {
       if(head->next==NULL)
	   {
		   p=(pz_list_node)malloc(sizeof(struct _node));
		   p->data=value;
		   p->next=NULL;
		   head->next=p;
	   }
	   else
	   {
		   q=(pz_list_node)malloc(sizeof(struct _node));
		   q->data=value;
		   q->next=NULL;
		   p->next=q;
		   p=q;//关键的指令

	   }

  }
  
 return head;

}

//遍历
void query_list(pz_list_node head)
{
 pz_list_node p;
 p=head;
 while(p->next!=NULL)
 {
	 p=p->next;
	 printf("%d ",p->data);
 }
}


void rever_list_head(pz_list_node head)
{
	pz_list_node p,q;
	p=head->next;
	head->next=NULL;
	while(p)
	{
		q=p;
		p=p->next;
		q->next=head->next;
		head->next=q;

	}
}

//删除单链表中重复的值
void dele_value_lots_element(pz_list_node head)
{
	pz_list_node p,q,t;
	int value;
	p=head->next;
	
	
	while(p->next!=NULL)
	{   t=q=p;
	    value=p->data;
		p=p->next;
		while(t!=NULL)
			{   //删除该节点
				if(value==t->data)
				{
					q->next=t->next;
					free(t);
				}
				else 
				{
			       t=t->next;
				}
			}
	}
}

//删除重复的节点
void delete_list(pz_list_node head)
{
	pz_list_node p,q,t;
	p=head->next;
	while(p->next&&p->next->next)
	{
		q=p;
		//p=p->next;
		while(q->next)//不是空的
		{
			if(p->data==q->next->data)
			{   //删除该节点
				t=q->next;
				q->next=t->next;
				free(t);
			}
			else q=q->next;
			}
		p=p->next;
	}
}

//删除重复的节点
//带头节点
void dele_useless_value(pz_list_node head)
{
	pz_list_node p,q,t;
	p=head->next;
	while(p->next&&p->next->next)///假设jiu3个重重复的节点
	{
		q=p;
		while(q->next)
		{
			if(p->data==q->next->data)//找到相同的值节点
			{
		         t=q->next;
				 q->next=t;
				 free(t);
			}
			else
			{
				q=q->next;
			}
		}
		p=p->next;
	}
}

//单链表的排序
//带头节点
//void sort_list(pz_list_node head)
//{
//	pz_list_node p,q,t;
//	p=head->next;
//	while(p->next&&p->next->next)
//	{
//		q=p;
//		while(q->next)
//		{
//			if(p->data>q->next->data)
//			{
//					//交换值 注意地址的交换
//				    
//				     
//			}
//		}
//
//
//	}
//
//}

void Sort(pz_list_node S)
	/*利用选择排序法对链表S进行从小到大排序*/
{
	list_node *p,*q,*r;
	int t;
	p=S->next;
	while(p->next)
	{
		r=p;
		q=p->next;
		while(q)
		{
			if(r->data>q->data)
				r=q;
			q=q->next;
		}
		if(p!=r)
		{
			t=p->data;
			p->data=r->data;
			r->data=t;
		}
		p=p->next;
	}	
}

//选择排序
void sort_list(pz_list_node head)
{
	pz_list_node p,q,s;
	int value;
	p=head->next;
	
	while(p->next)
	{
		s=p;
		q=p->next;
		while(q)
		{
			if(s->data>q->data)
			{
		           s=q;
			}
			q=q->next;
		}
		if(p!=s)
		{
	         value=p->data;
			 p->data=s->data;
			 s->data=value;
		}
		p=p->next;

	}
}

//sort_list()
void sort_list_(pz_list_node head)
{

	pz_list_node p,q,t;
	int value;
	p=head->next;
	while(p->next)
	{
		t=p;
	    q=p->next;
		while(q)
		{
			if(q->data<t->data)
			{
		         q=t;
			}
			q=q->next;
		}
		if(p!=t)
		{   //交换值
			value=p->data;
			p->data=t->data;
			t->data=value;
		}
	}
	p=p->next;
}

//默写单链表的逆转
void reverse_list_value(pz_list_node head)
{
	pz_list_node p,q;
	p=head->next;
	head->next=NULL;
	while(p)
	{
		q=p;
		p=p->next;
		q->next=head->next;
		head->next=q;
	}
}

//销毁单链表
//参数：pz_list_node
void destroy_list(pz_list_node head)
{
	pz_list_node p,q;
	p=head->next;
	while(p->next)
	{
		q=p;
		p=p->next;
		free(q);
		q=NULL;
	}
}
//创建界面的函数
void create_menu(void)
{
	printf("\t\t\t*******************\n");
	printf("\t\t\t\t0.创建单链表\n");
    printf("\t\t\t\t1.排序单链表\n");
	printf("\t\t\t\t2.删除单链表\n");
	printf("\t\t\t\t3.逆转单链表\n");
	printf("\t\t\t\t4.遍历单链表\n");
	printf("\t\t\t\t5.退出\n");
	printf("\t\t\t*******************\n");
	fflush(stdin);
	getchar();//暂停
}

void delay()
{   int i=0;
	for(;i<1000000;i++)
	{
		i++;
		i--;
	}
}

void timefun(){
   int i; 
   printf("进度:\n");
   for(i=1;i<=99;i++)
   {
      delay();
	  printf("\b\b%-2d",i);
	 
	 
   }
}

//遍历链表
//含有头节点
void query_list_element(pz_list_node head)
{
	pz_list_node p,q;
	p=head->next;
	while(p->next){
		//p->next;
		printf("%d ",p->data);
		p=p->next;
	}
	printf("%d\n",p->data);
}

void choose_count()
{  
    int i;
	printf("输入选择的数据\n");
	scanf_s("%d",&i);
	switch(i)
	{
	case 0:
		{
	        //创建单链表
			system("cls");
			head=create_head_list();
			timefun();
			printf("\n创建成功!\n");
			//system("pause");
			printf(" 按任意键 回主界面\n");
		   // flush(basic_streambuf);//清空缓冲区
			fflush(stdin);
			getchar();
		    system("cls");
			create_menu();
		
			break;

		}
	case 1:
		{
			//排序
			system("cls");
			sort_list(head);
			timefun();
			printf("\n排序成功!");

			printf(" 按任意键 回主界面\n");
			fflush(stdin);
			getchar();
			system("cls");
			create_menu();
			break;

		}
	case 2:
		{
			//删除单链表
				system("cls");
			destroy_list(head);
			timefun();
			printf("\n删除成功!");

			printf(" 按任意键 回主界面\n");
			getchar();
			system("cls");
			create_menu();
			break;
		}
	case 3:
		{
			//转置
			system("cls");
			reverse_list_value(head);
			timefun();
			printf("\n逆转成功!");

			printf(" 按任意键 回主界面\n");
			fflush(stdin);
			getchar();
			system("cls");
			create_menu();
			break;
		}
	case 4:
		{
			//退出
			//exit(0);
			query_list_element(head);

			printf("\n按任意键 回主界面\n");
			fflush(stdin);
			getchar();
			system("cls");
			create_menu();
			break;

		}
	case 5:
		{
	    exit(0);
		}
	default:
		{   
			printf("输入错误 按任意键 回主界面\n");
			getchar();
			system("cls");
			create_menu();
			break;
		}
	}

}

