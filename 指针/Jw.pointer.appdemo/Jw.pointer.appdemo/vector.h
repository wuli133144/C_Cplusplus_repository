#pragma  once 
#include<stdio.h>
#define  TYPE int
#define MAXSIZE  5

typedef struct 
{
  TYPE data[MAXSIZE];
  int length;
}sqelist;
//˳���

//�ӿ�
//��ʼ��˳���
void Initlist(sqelist * L)
{
 L->length=0;
}

//bool 
//�жϱ��Ƿ��ǿ�
int IsemptyList(sqelist *L)
{
	return L->length==0;

}
//��ȡԪ��
void Getelement(sqelist *L,int index,TYPE * e)
{   
	if(index<0||index>L->length)return ;
	   e=&L->data[index];
}


int Locationelement(sqelist *L,	TYPE data)
{  
	int i=0;
	while(i<L->length)
	{
           if(data=L->data[i])
			 return i;
		   i++;
	}
	return 0;
}

//�������
//����˵����l�Ǳ�ṹ
//i�Ǵ������λ��
//e��Ҫ�����Ԫ��
int insertlist(sqelist *L,int i,TYPE e)
{
	int j;
	if(i<0||i>L->length+1)
	{
        printf("����λ�ò�����");
		return -1;
	}
	else if(L->length>=MAXSIZE)
	{
		printf("���Ѿ�����!");
		return 0;
	}
	else 
	{
		for(j=L->length;j>=i;j--)
		{
			L->data[j]=L->data[j-1];
		}
		L->data[i-1]=e;
		L->length=L->length+1;
		return 1;
	}
}

//ɾ��Ԫ��
int delelist(sqelist *L,int i,TYPE *e)
{
	int j;
	if(i<0||i>L->length)
	{
		printf("ɾ��λ�ó���");
		return -1;
    }
	else if(L->length==0)
	{
		printf("���ǿձ�");
		return 0;
	}
	else
	{    e=&L->data[i-1];
		for(j=i;j<L->length-1;j++)
		{
			L->data[j-1]=L->data[j];

		}	
		
		L->length=L->length-1;
		return 1;
 	}

}
	
//����������
int  sqelistlength(sqelist *L)
{
	return L->length;
}
//��ղ���
void sqeclear(sqelist *L)
{
 L->length=0;
}

//���
void printflist(sqelist *L)
{   int i=0;
	for(;i<L->length;i++)
	{
		printf("%d ",L->data[i]);
	}
}