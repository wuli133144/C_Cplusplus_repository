#if 0
#include<stdio.h>
#include <stdlib.h>

char *getmemory()
{
	char p[]="jakc";
	return p;
  
}
//������������Ϊp�Ƕ�̬�����ڴ��
//�ں������ý����Ǿͻ��ͷ��ڴ�ռ�
//����*p�����ǡ�jack��
int main()
{  
	char *m=getmemory();
	printf("%s",m);


	system("pause");
	return 0 ;
}

#endif

#if 0
#include <stdio.h>
#include <stdlib.h>
//��̬�Ĵ�������
//β�巨
typedef struct list 
{
	int data;
	struct list *next;

}LIST,*LPLIST;
#define  SIZE sizeof(LIST)
//���캯����
#define  LEN 20
LPLIST Create_List()
{
	LPLIST head=NULL;
	LPLIST p,q;
	int i=0;
	if(p=(LPLIST)malloc(SIZE))
	{
		head=q=p;
		p->next=p;
		p->data=i;//��ֵ

		while (p->next&&i<LEN)
		{   
			p=(LPLIST)malloc(SIZE);
			q->next=p;
			q=p;
			i++;
		    p->data=i;
		}
		q->next=NULL;
	}
	return head;
	
}
int main()
{   
	/*


	*/

	LPLIST li=Create_List();
	while (li->next)
	{  
		
		printf("%d\t",li->data);
		li=li->next;
	}
	getchar();
	return 0;
}


#endif
#if 0
#include<stdio.h>
#include <stdlib.h>
//Լɪ��ѭ��
typedef struct list 
{
	int data;
	struct list *next;

}LIST,*LPLIST;
#define  SIZE sizeof(LIST)
#define LEN 3
//���캯����

  void create_circle_list()
  {
	  LPLIST p,q,head;
	  int i=1;//��ӳ�Ա��ֵ
	  int num=1,cout=0;//cout��¼ɾ����������num��¼��1��2
	  p=(LPLIST)malloc(SIZE);
	  head=q=p;
	  if(p==NULL) return ;
	  else
	  { p->data=i;
		
		p->next=p;
		while (i++<LEN)
			{
				p=(LPLIST)malloc(SIZE);
				p->data=i;
				q->next=p;
				q=p;
				p->next=head;
			}
	  }
	
	  while(cout<LEN-1)
	  {   
		  if(num==2) 
		  {   head=head->next->next;
			  num=1;
			  cout++;
			}
		  num++;
		  head=head->next;
		 
	  }
	  printf("%d",head->data);
}
main()
{
    create_circle_list();
	system("pause");
	return 0;
}
#endif
#if 0
#include<stdio.h>
#include<stdlib.h>
char *new_my(int n)
{  char *p=NULL;
    return p=(char *)malloc(n*(sizeof(char)));
}
void free_my(char *p)
{   
	while(*p)
	free(p++);
}

int main()
{   

	system("pause");
	return 0;
}

#endif
#if 0
#include<stdlib.h>
#include<stdio.h>

typedef struct list 
{
	int data;
	struct list *next;

}LIST,*LPLIST;
#define  SIZE sizeof(LIST)
//���캯����
#define  LEN 20
LPLIST Create_List()
{
	LPLIST head=NULL;
	LPLIST p,q;
	int i=0;
	if(p=(LPLIST)malloc(SIZE))
	{
		head=q=p;
		p->next=p;
		p->data=i;//��ֵ

		while (p->next&&i<LEN)
		{   
			p=(LPLIST)malloc(SIZE);
			q->next=p;
			q=p;
			i++;
			p->data=i;
		}
		q->next=NULL;
	}
	return head;

}


main()
{
 /*  LPLIST a,b;
  
   b=Create_List();
   while(a->data=b->data&&a!=NULL)
   {
	   a=a->next;
   }
   printf("%d",a->data);*/
	int num;
	LPLIST a=Create_List();
	LPLIST p=a;
	printf_s("�������֣�\n");
	scanf("%d",&num);
	
	while (num!=a->data&&a!=NULL)
	{   p=a;
		a=a->next;
	}
	if(num==a->data)
      p->next=a->next;
	
	while(a!=NULL)
	{
		printf_s("%d",a->data);
		a=a->next;
	}
   system("pause");
   return 0;
}


#endif
#if 1
#include <stdio.h>
#include <stdlib.h>
struct time_ 
{
	int year;
	int month;
	int day;
}s={2014,12,31};

struct time_ *year_ret(struct time_ *s)
{
	if (s->year%400==0||(s->year%100==0&&s->year%4!=0))
	{
		//����Ķ�����29��
		if(s->month<=2)
		{ 
			switch(s->month)
			{ 
			case 1:
				{
					printf_s("����һ���е�%d��",s->day);
					break;
				}
			case 2:
				{
					printf_s("����һ���е�%d��",s->day+31);
					break;
				}
			default:
				break;
			}

		}
		if (s->month)

		{  switch(s->month){
		case 3:
			{
				printf_s("����һ���е�%d��",s->day+31+29);
				break;
			}
		case 4:
			{
				printf_s("����һ���е�%d��",s->day+31+29+31);
				break;
			}
		case 5:
			{printf_s("����һ���е�%d��",s->day+31+29+31+30);
			break;}
		case 6:
			{
				printf_s("����һ���е�%d��",s->day+31+29+31+30+31);
				break;
			}
		case 7:
			{
				printf_s("����һ���е�%d��",s->day+31+29+31+30+31+30);
				break;
			}
		case 8:
			{printf_s("����һ���е�%d��",s->day+31+29+31+30+31+30+31);
			break;}
		case 9:
			{
				{printf_s("����һ���е�%d��",s->day+31+29+31+30+31+30+31+31);
				break;}
			}
		case 10:
			{
				printf_s("����һ���е�%d��",s->day+31+29+31+30+31+30+31+31+30);
				break;
			}
		case 11:
			{printf_s("����һ���е�%d��",s->day+31+29+31+30+31+30+31+31+30+31);
			break;}
		case 12:
			{
				{printf_s("����һ���е�%d��",s->day+31+29+31+30+31+30+31+31+30+31+30);
				break;}
			}
		default:
			break;
		}
		}
	}
	else
	{
		//����Ķ�����29��
		if(s->month<=2)
		{ 
			switch(s->month)
			{ 
			case 1:
				{
					printf_s("����һ���е�%d��",s->day);
					break;
				}
			case 2:
				{
					printf_s("����һ���е�%d��",s->day+31);
					break;
				}
			default:
				break;
			}

		}
		if (s->month)

		{  switch(s->month){
		case 3:
			{
				printf_s("����һ���е�%d��",s->day+31+29);
				break;
			}
		case 4:
			{
				printf_s("����һ���е�%d��",s->day+31+29+31);
				break;
			}
		case 5:
			{printf_s("����һ���е�%d��",s->day+31+29+31+30);
			break;}
		case 6:
			{
				printf_s("����һ���е�%d��",s->day+31+29+31+30+31);
				break;
			}
		case 7:
			{
				printf_s("����һ���е�%d��",s->day+31+29+31+30+31+30);
				break;
			}
		case 8:
			{printf_s("����һ���е�%d��",s->day+31+29+31+30+31+30+31);
			break;}
		case 9:
			{
				{printf_s("����һ���е�%d��",s->day+31+29+31+30+31+30+31+31);
				break;}
			}
		case 10:
			{
				printf_s("����һ���е�%d��",s->day+31+29+31+30+31+30+31+31+30);
				break;
			}
		case 11:
			{printf_s("����һ���е�%d��",s->day+31+29+31+30+31+30+31+31+30+31);
			break;}
		case 12:
			{
				{printf_s("����һ���е�%d��",s->day+31+29+31+30+31+30+31+31+30+31+30);
				break;}
			}
		default:
			break;
		}
		}
	} 
}
main()
{   
//	//�ж�����ķ���
//	if (s.year%400==0||(s.year%100==0&&s.year%4!=0))
//{
//		//����Ķ�����29��
//        if(s.month<=2)
//		{ 
//			switch(s.month)
//			{ 
//			case 1:
//             {
//				 printf_s("����һ���е�%d��",s.day);
//				 break;
//			 }
//			case 2:
//				{
//					printf_s("����һ���е�%d��",s.day+31);
//					break;
//				}
//			default:
//				break;
//			}
//	      
//		}
//		if (s.month)
//
//		{  switch(s.month){
//			case 3:
//				{
//					printf_s("����һ���е�%d��",s.day+31+29);
//					break;
//				}
//			case 4:
//				{
//					printf_s("����һ���е�%d��",s.day+31+29+31);
//					break;
//				}
//			case 5:
//				{printf_s("����һ���е�%d��",s.day+31+29+31+30);
//				break;}
//			case 6:
//				{
//					printf_s("����һ���е�%d��",s.day+31+29+31+30+31);
//					break;
//				}
//			case 7:
//				{
//					printf_s("����һ���е�%d��",s.day+31+29+31+30+31+30);
//					break;
//				}
//			case 8:
//				{printf_s("����һ���е�%d��",s.day+31+29+31+30+31+30+31);
//				break;}
//			case 9:
//				{
//					{printf_s("����һ���е�%d��",s.day+31+29+31+30+31+30+31+31);
//					break;}
//				}
//			case 10:
//				{
//					printf_s("����һ���е�%d��",s.day+31+29+31+30+31+30+31+31+30);
//					break;
//				}
//			case 11:
//				{printf_s("����һ���е�%d��",s.day+31+29+31+30+31+30+31+31+30+31);
//				break;}
//			case 12:
//				{
//					{printf_s("����һ���е�%d��",s.day+31+29+31+30+31+30+31+31+30+31+30);
//					break;}
//				}
//			default:
//				break;
//		}
//		}
//}
//	else
//	{
//		//����Ķ�����29��
//		if(s.month<=2)
//		{ 
//			switch(s.month)
//			{ 
//			case 1:
//				{
//					printf_s("����һ���е�%d��",s.day);
//					break;
//				}
//			case 2:
//				{
//					printf_s("����һ���е�%d��",s.day+31);
//					break;
//				}
//			default:
//				break;
//			}
//
//		}
//		if (s.month)
//
//		{  switch(s.month){
//		case 3:
//			{
//				printf_s("����һ���е�%d��",s.day+31+29);
//				break;
//			}
//		case 4:
//			{
//				printf_s("����һ���е�%d��",s.day+31+29+31);
//				break;
//			}
//		case 5:
//			{printf_s("����һ���е�%d��",s.day+31+29+31+30);
//			break;}
//		case 6:
//			{
//				printf_s("����һ���е�%d��",s.day+31+29+31+30+31);
//				break;
//			}
//		case 7:
//			{
//				printf_s("����һ���е�%d��",s.day+31+29+31+30+31+30);
//				break;
//			}
//		case 8:
//			{printf_s("����һ���е�%d��",s.day+31+29+31+30+31+30+31);
//			break;}
//		case 9:
//			{
//				{printf_s("����һ���е�%d��",s.day+31+29+31+30+31+30+31+31);
//				break;}
//			}
//		case 10:
//			{
//				printf_s("����һ���е�%d��",s.day+31+29+31+30+31+30+31+31+30);
//				break;
//			}
//		case 11:
//			{printf_s("����һ���е�%d��",s.day+31+29+31+30+31+30+31+31+30+31);
//			break;}
//		case 12:
//			{
//				{printf_s("����һ���е�%d��",s.day+31+29+31+30+31+30+31+31+30+31+30);
//				break;}
//			}
//		default:
//			break;
//		}
//		}
//	}
//	//printf_s("%d",s.day);
//
struct time_ *p=&s;
year_ret(p);
system("pause");
return 0;
}
#endif