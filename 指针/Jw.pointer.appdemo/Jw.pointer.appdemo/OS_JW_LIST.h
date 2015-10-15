/*
 *Copyright (C), 2015-2020 �����,
 *All rights reserved.
 *
 *�ļ����ƣ�OS_JW_LIST.h
 *�ļ���ʾ��osjw
 *ժҪ��list�����ļ���
 *
 *��ǰ�汾��1.1
 *����: �����
 *����ʱ��: 2015/09/13
 * 
 *ȡ���汾��1.0
 *ԭ���ߣ������
 *���ʱ�䣺2015/09/13
 *
 */	

/*
 *Copyright (C), 2015-2020 �����,
 *All rights reserved.
 *
 *�ļ����ƣ�
 *�ļ���ʾ��
 *ժҪ��
 *
 *��ǰ�汾��1.1
 *Author: �����
 *Created: 2015/09/13
 * 
 *ȡ���汾��1.0
 *ԭ���ߣ������
 *���ʱ�䣺2015/09/13
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
//������ͷ�ڵ������
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
		   p=q;//�ؼ���ָ��

	   }

  }
  
 return head;

}

//����
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

//ɾ�����������ظ���ֵ
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
			{   //ɾ���ýڵ�
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

//ɾ���ظ��Ľڵ�
void delete_list(pz_list_node head)
{
	pz_list_node p,q,t;
	p=head->next;
	while(p->next&&p->next->next)
	{
		q=p;
		//p=p->next;
		while(q->next)//���ǿյ�
		{
			if(p->data==q->next->data)
			{   //ɾ���ýڵ�
				t=q->next;
				q->next=t->next;
				free(t);
			}
			else q=q->next;
			}
		p=p->next;
	}
}

//ɾ���ظ��Ľڵ�
//��ͷ�ڵ�
void dele_useless_value(pz_list_node head)
{
	pz_list_node p,q,t;
	p=head->next;
	while(p->next&&p->next->next)///����jiu3�����ظ��Ľڵ�
	{
		q=p;
		while(q->next)
		{
			if(p->data==q->next->data)//�ҵ���ͬ��ֵ�ڵ�
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

//�����������
//��ͷ�ڵ�
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
//					//����ֵ ע���ַ�Ľ���
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
	/*����ѡ�����򷨶�����S���д�С��������*/
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

//ѡ������
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
		{   //����ֵ
			value=p->data;
			p->data=t->data;
			t->data=value;
		}
	}
	p=p->next;
}

//Ĭд���������ת
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

//���ٵ�����
//������pz_list_node
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
//��������ĺ���
void create_menu(void)
{
	printf("\t\t\t*******************\n");
	printf("\t\t\t\t0.����������\n");
    printf("\t\t\t\t1.��������\n");
	printf("\t\t\t\t2.ɾ��������\n");
	printf("\t\t\t\t3.��ת������\n");
	printf("\t\t\t\t4.����������\n");
	printf("\t\t\t\t5.�˳�\n");
	printf("\t\t\t*******************\n");
	fflush(stdin);
	getchar();//��ͣ
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
   printf("����:\n");
   for(i=1;i<=99;i++)
   {
      delay();
	  printf("\b\b%-2d",i);
	 
	 
   }
}

//��������
//����ͷ�ڵ�
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
	printf("����ѡ�������\n");
	scanf_s("%d",&i);
	switch(i)
	{
	case 0:
		{
	        //����������
			system("cls");
			head=create_head_list();
			timefun();
			printf("\n�����ɹ�!\n");
			//system("pause");
			printf(" ������� ��������\n");
		   // flush(basic_streambuf);//��ջ�����
			fflush(stdin);
			getchar();
		    system("cls");
			create_menu();
		
			break;

		}
	case 1:
		{
			//����
			system("cls");
			sort_list(head);
			timefun();
			printf("\n����ɹ�!");

			printf(" ������� ��������\n");
			fflush(stdin);
			getchar();
			system("cls");
			create_menu();
			break;

		}
	case 2:
		{
			//ɾ��������
				system("cls");
			destroy_list(head);
			timefun();
			printf("\nɾ���ɹ�!");

			printf(" ������� ��������\n");
			getchar();
			system("cls");
			create_menu();
			break;
		}
	case 3:
		{
			//ת��
			system("cls");
			reverse_list_value(head);
			timefun();
			printf("\n��ת�ɹ�!");

			printf(" ������� ��������\n");
			fflush(stdin);
			getchar();
			system("cls");
			create_menu();
			break;
		}
	case 4:
		{
			//�˳�
			//exit(0);
			query_list_element(head);

			printf("\n������� ��������\n");
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
			printf("������� ������� ��������\n");
			getchar();
			system("cls");
			create_menu();
			break;
		}
	}

}

