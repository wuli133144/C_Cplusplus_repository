#include<stdio.h>
//#include"vector.h"
////#include "Jw_List.h"
//#include<malloc.h>
//#include"Jw.list.h"
//#include "Circle_List.h"
/*
creator:jackwu 
time:2015/9/11
place:xust
*/

struct time
{
	int year;
	int month;
	int day;
};
struct student
{
	char name[20];
	int age;//24
	struct time times;//36
	char sex;//40
};
//插入排序
//
void sort(int arr[],int index)
{  
	int i,j,k;
  for(i=0;i<index-1;i++)
  {
	  k=arr[i+1];//取出第i+1个元素排序
	  j=i;//记录下标
	  while(j>-1&&k<arr[j])
	  {
	     arr[j+1]=arr[j];
		 j--;
	  }
	  arr[j+1]=k;
   }
}

//插入排序默写
void insertsort(int a[],int index)
{
	int i,j,k;
	for(i=0;i<index-1;i++)
	{
		k=a[i+1];//待排序的值
		j=i;
		while(j>=0&&k<a[j])
		{
			//
			a[j+1]=a[j];//交换值
			j--;//--可以向前移动的比较
		}
		a[j+1]=k;
	}
}

//指针的形式
void myinsertsort(int *a,int index)
{
	int i,j,k;
	for(i=0;i<index-1;i++)
	{
		k=*(a+i+1);//获取待排序的元素
		j=i;
		while(j>-1&&k<*(a+j))
		{
	        *(a+j+1)=*(a+j);
			j--;
		}
		*(a+j+1)=k;
	}
}

//pzlistnode create_single_list_circle(int m)
//{
//	pzlistnode p,q;
//	pzlistnode head=NULL;
//	int i=0;
//	for(i=1;i<=m;i++)
//	{
//             p=(pzlistnode)malloc(sizeof(struct _node0));
//			 p->data=i;
//			 p->next=NULL;
//			 if(NULL==head)//第一次创建节点
//			 {
//				 head=p;
//			 }
//			 else
//			 {
//			       q->next=p;
//			 }
//			 q=p;
//	}
//	q->next=head;
//	return head;
//}

//void  query_list_node(pzlistnode head);

#include "OS_JW_LIST.h"
#include "Jw_List.h"
//时间：2015/9/13
//place :xust
//creator:jackwu


int main()
{    
	//int i=0;
	//int *p=NULL;
	//sqelist *l=NULL;
	//l=(sqelist *)malloc(sizeof(sqelist));
	//if(l==NULL)return ;
	//Initlist(l);
	//for(i=0;i<5;i++)
	//insertlist(l,i+1,i);

	//for(i=0;i<5;i++)
	//{
	//	delelist(l,i+1,p);
	//}
	////sqeclear(l);
	//printflist(l);
	
	//pzlistlink head=NULL;
	//pzlistlink tail=NULL;
	//pzlistlink tem=NULL;
	//int i=1;
	//head=_Init_List_();
	//tail=_Init_List_();
	//for(;i<5;i++)
	////insert_list_value(head,i,i);
	//Addlistelement(head,i);//1,2,3,4
	//display(head);
	//printf("\n");
	//for(i=1;i<5;i++)
	//	
	//Addlistelement(tail,i+1);//2/3/4/5
	//display(tail);
	//printf("\n");
	////destroy(head);
	////for(i=1;i<5;i++
	//
	//mergelist(head,tail,tem);
	//display(head);
 // 


	//printf("\n");

	////delete_list_element_pos(head,1);
	////dele_pos_element(head,5);
	////dele_pos_element(head,2);
	////dele_pos_element(head,2);
	//printf("\n");
	////display(head);

 //   printf("长度：%d",getlength(head));
	//pzlistnode head=NULL;
	//pzlistnode tail=NULL;
	/*head=Createlistnode(5);
	printf_listnode(head);*/
	/*printf("创建第二个节点\n");

	tail=Create_Circle_list();
	jusephsu(head,3,1);
	printf_listnode(tail);*/
	//tail=create_nomal_list(3);
	//head=create_single_list_circle(5);
	//jusephsu(head,3,1);
	//printf_listnode(tail);
   // printf_listnode(head);
	/*head=create_list_single_node(5);
	printf_listnode(head);*/

	//tail=create_single_list(3);
    // printf_listnode(tail);
	//head=_Create_single_list();
	//query_list_node(tail);
	//query_list_node(head);
	//insert_value_list(head,54,2);

  //  printf("%d",find_value_list(head,2));

	//delele_list(head,2);
	//head=reverse_list(head);
	//query_list_node(head);


	/*pz_list_node head=NULL;
	head=create_head_list();
	rever_list_head(head);


	query_list(head);
	printf("\n");
	printf("\n");
	printf("\n");
	sort_list(head);

	query_list(head);


	getchar();
	getchar();
	getchar();*/
   create_menu();
	while(1)
	{
     
	  choose_count();
	}
	
	
	getchar();

	return 0;
}

//单链表的遍历

//void  query_list_node(pzlistnode head)
//{
//	pzlistnode p;
//	p=head;
//	while(p->next!=NULL)
//	{
//		 printf("%d ",p->data);
//		 p=p->next;
// 	}
//	printf("%d",p->data);
//}