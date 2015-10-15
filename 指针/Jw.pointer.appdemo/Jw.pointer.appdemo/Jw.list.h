/*
creator:�����
time:2015/12
place:xust
*/
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define  _type  int
#define  INT8   int

typedef struct _node{
//	INT8 
	_type data;
	struct _node * next;
}listlink,*pzlistlink;

//��ʼ��
pzlistlink _Init_List_(void)
{
	pzlistlink head;
	//if((!head=(pzlistlink)malloc(sizeof(struct _node))))
	if(!(head=(pzlistlink)malloc(sizeof(struct _node))))
	exit(0);
	head->next=NULL;
	return head;
	//�յ�ͷ�ڵ�
}
//�ж��Ƿ��ǿսڵ�
INT8 _isempty_list(pzlistlink head)
{   
	pzlistlink p=head;
	if(head->next==NULL)
		return 1;
	return 0;
}
//����ڵ�
INT8 insert_list_value(pzlistlink head,int pos,_type value)
{
	pzlistlink p,q;
	int i=0;
	p=head;
	while(p->next!=NULL&&i<pos-1)//pos�Ǵ�1��ʼ��
	{
		p=p->next;
		i++;
	}
	if(i!=pos-1)
	{
	 //�����λ�ò�����
		printf("�����λ�ò�����");
		return 0;
	}
	if(q=(pzlistlink)malloc(sizeof(struct _node)))
	{
       q->next=p->next;
	   p->next=q;
	   q->data=value;
	}
	return 1;
}


INT8 Addlistelement(pzlistlink head,_type value)
{
	pzlistlink p,q;
	int i=0;
	p=head;
	while(p->next!=NULL)
		p=p->next;
	q=(pzlistlink)malloc(sizeof(struct _node));
	if(!q)exit(0);
	p->next=q;
	q->data=value;
	q->next=NULL;
	return 1;
}

//ɾ��ָ����Ԫ��
INT8 delete_list_element_pos(pzlistlink head,int pos)
{
	pzlistlink p,q;
	int i=0;
	p=head;
	while(p->next!=NULL&&i<pos-1&&p->next->next!=NULL)
	{
         p=p->next;
		 i++;
	}
	if(i!=pos-1)
	{
		printf("ɾ����λ������");
		return -1;
	}
	q=p->next;
	p->next=q->next;
	free(q);
	return 0;

}

//ɾ��ָ����λ�õ�Ԫ��
int dele_pos_value(pzlistlink head,_type value)
{
	pzlistlink p,q;
	int i=0;
	p=head;
	while(p->next!=NULL&&p->data!=value)
	{  
	   q=p;
       p=p->next;
	}
	if(p->data==value)
	{
		q->next=p->next;
		free(p);
		return 1;
	}
	else 
	return 0;
}

////ɾ��ָ��ֵ��Ԫ��
int dele_pos_element(pzlistlink head,_type value)
{
	pzlistlink p,q;
	int i;
	p=head;
	i=0;
	while(p->next!=NULL&&p->next->next!=NULL&&p->data!=value)
	{
        p=p->next;
		i++;
	}
	if(value!=p->data)
	{
		printf("ɾ��Ԫ�ز�����");
		return -1;
	}
	q=p->next;
	p->next=q->next;
	free(q);
	return 0;
	
    
}

//�����Ƿ��и�Ԫ��
INT8 Find_Element(pzlistlink head,_type value)
{
	pzlistlink p;
	int i=0;
	p=head;
	while(p->next!=NULL&&p->data!=value)
	{
           p=p->next;
	}
	if(p->data==value)
	{
		//printf("��Ԫ�ز����ڣ�");
		return 1;
	}
	return 0;


}
//ɾ������A�е�Ԫ�� ��Ԫ����B��Ҳ��
int dele_element_collection(pzlistlink A,pzlistlink B)
{
	pzlistlink q,p;
	_type value;
	int i=0;
	q=A;
	p=B;
	while(p->next!=NULL)
	{
       // value=p->data;
		p=p->next;
		value=p->data;

		if(Find_Element(A,value))
		{
		  dele_pos_value(A,value);
		}
	
	}
	return 1;
}

void display(pzlistlink head)
{
	pzlistlink p;
	p=head;
	while(p->next!=NULL)
	{  
		p=p->next;//�Ⱥ�������ͷ�ڵ�
		printf("%d ",p->data);
		
	}
}

//��ȡ����
int getlength(pzlistlink head)
{
	int length=0;
	pzlistlink p;
	p=head;
	while(p)
	{
		p=p->next;
	    length++;
	}
	return length;
}


//��������
void destroy(pzlistlink head)
{
	pzlistlink p,q;
	p=head;
	while(p)
	{ 
      q=p;
	  p=p->next;
	  free(q);
	  q=NULL;
	}
}

//�ϲ������� A ��B ��C �����Ƿǵݼ���ֵ
void mergelist(pzlistlink A,pzlistlink B,pzlistlink C)
{
	pzlistlink pa,pb,pc;
   
	
	pa=A->next;//pa=ָ��A�ĵ�1��Ԫ��
	pb=B->next;//pbָ��B�ĵ�2��Ԫ��

	C=A;
	C->next=NULL;
	pc=C;

	while(pa&&pb)
	{
		if(pa->data>=pb->data)
		{
	        //��pa��ֵ�ŵ�c�ĺ���
			pc->next=pa;
			pc=pa;//��pc���� �������ӿռ�Ŀ���
			pa=pa->next;
		}
		else 
		{    pc->next=pb;
			 pc=pb;
			 pb=pb->next;
		}
	}
	 pc->next=(pa?pa:pb);//pa��nullô ���Ǿ���pb���� �����Ǿ���pa����
     free(B);
	 C=A;
}

