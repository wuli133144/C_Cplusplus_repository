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
	while(i<=n)//����n���ڵ�
	{
           printf("�������%d�ڵ��ֵ��",i);
		   scanf_s("%d",&e);
 		  if(i==1)//������1���ڵ�
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
			 p->next=NULL;//����β�ڵ��ָ��ʽ��
			 q->next=p;//����
			 q=p;//����һλ
		  }
		  i++;

	} 
  if(q!=NULL){
            q->next=head;
	}
	return head;
}

//�����ڵ�
void printf_listnode(pzlistnode head)
{
    pzlistnode p;
	p=head;
	if(head==NULL) return;
	while(p->next!=head)//�������һ���ڵ�
	{
          printf("%d ",p->data);
		  p=p->next;
	}
	//������һ���ڵ�
	printf("%d ",p->data);
}


//����ѭ������

pzlistnode  Create_Circle_list()
{
	pzlistnode p=NULL,q=NULL,head=NULL;
	int e,i=1;
	//printf("�������%d�ڵ�",&i);
	while(scanf_s("%d",&e)==1)
	{  
	   if(i==1)//������һ���ڵ�
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
		   q=p;//q����
	   }
       i++;
	   
	}
	if(q!=NULL)
		q->next=head;
	return head;
}
//����ڵ���
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
//��ɪ��ѭ��
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
          printf("ɾ��%d�����\n\n",index);
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

//Լɪ�����
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

//˵��
//n������n�ĳ���

//��k��ʼ����
void jusephsu(pzlistnode head,int n,int k)
{
   pzlistnode p,q;
    int i;
   p=head;
  
   for(i=1;i<k;i++)
   {  
	  q=p;//q��¼��һ��λ�� ����ɾ��p
      p=p->next;
	//  i++;//�ҵ�kλ��
   }
   while(p->next!=p){
		//����m��ɾ��
	  for(i=1;i<n;i++)
	   {   q=p;
		   p=p->next;
	   }
   q->next=p->next;
   printf("%4d",p->data);
   free(p);
   p=q->next;//���¿�ʼ
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
			 head=p;//ͷ�ڵ���p
		 }
		 else 
		 {q->next=p;//�����ӽڵ� q
		  // head->next=q;
		 }
		 q=p;//��pָ��q�뷨����
	 }
	q->next=head;//
	return head;
}


//������뾭������
//Ĭд����Լɪ��ѭ��-
pzlistnode create_list_node_circle(int n)
{
  pzlistnode p,q;
  pzlistnode head=NULL;
  int i;
  for(i=1;i<=n;i++){
	  p=(pzlistnode)malloc(sizeof(struct _node0));
	  p->data=i;
	  p->next=NULL;
	  if(NULL==head)//��һ�δ����ڵ�
	  {
		  head=p;
	  }
	  else 
	  {
		  q->next=p;
	  }
	  q=p;//��ǰ��ʱ���¼p�ĵ�ַ ������һ�ε���д
  }
    q->next=head;
	return head;
}

//Լɪ��ѭ��
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

//����ѭ������
 pzlistnode create_nomal_list(int n)
 {
	 pzlistnode p,q;
	 pzlistnode head=NULL;
	 int i=1;
	 int value;
	 while(i<=n)
	 {   //����������
		 printf("�����%d���ڵ�Ԫ��",i);
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

 //����ѭ������
 pzlistnode create_list_single_node(int n)
 {
     pzlistnode p,q;
	 pzlistnode head=NULL;
	 int e;
	 int i=1;
	 while(i<=n)
	 {   
		 printf("�����%d���ڵ���",i);
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
		   q=p;//q���ƫ��

      }
		 i++;
	 }
	 if(q!=NULL)
	 {
		 q->next=head;
	 }
	 return head;
 }

 //����������
 pzlistnode create_single_list(int n)
 {
	 pzlistnode p,q;
	 pzlistnode head=NULL;
	 int i=1;
	 int value;
	 while(i<=n)//����n���ڵ�
	 {
		 printf("�����%d���ڵ�ֵ",i);
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
				q=p;//����ͷ�ڵ�
				
		 }

		 //
		  i++;
	 }
		
	 return head;

}

 //����������
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
			   q=head;//��¼ͷ�ڵ�
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

 //���������ת
 //����ͷ�ڵ�

 void reverse_list(pzlistnode head)
 {
     //ת��
    //��ͷ�ڵ�
	 //��ͷ�ڵ����ת
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

 //����Ԫ��
 void insert_value_list(pzlistnode head,int value,int pos)
 {
	 int i=1;
	 pzlistnode p,q,m;
	 p=head;
	 for(;i<pos;i++)//����posλ��
	 {    
		   q=p;
		   p=p->next;
     }
	 m=(pzlistnode)malloc(sizeof(struct _node0));
	 m->data=value;

	 q->next=m;
	 m->next=p;

}

 //��ȡָ����Ԫ��
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

 //ɾ��ָ����Ԫ��
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

