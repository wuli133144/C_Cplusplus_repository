/*
ָ���ѧϰ

*/
#include <stdio.h>

void _swap(int *__x,int *__y)
{
	int tem;
	tem=*__x;
	*__x=*__y;
	*__y=tem;
}

#pragma  pack(8)
struct student
{
	char name;//Ĭ�ϰ�8�ֽڶ��� char��һ���ֽ����Ի�1�ֽڶ���
	int age;//4
	char sex;//1
	char sex0;//
	char name0[2];//
	char prin;
	char schoolname[3];//16//�����λ�ñ����Ƕ�������ı���
	char schoolage[2];
};

struct list{
	int age;//4
	char name;//18
};
struct _list{
	struct list a;//8
	int number;
};

//��������
void swap(int *a,int *b)
{
 int tem;
 tem=*a;
 *a=*b;
 *b=tem;
}
//ѡ������
void mysort(int arr[],int size)
{
	int i,j,k;
	for(i=0;i<size-1;i++)//���бȽϵĴ���
	{
	  k=i;
	  for(j=i+1;j<size;j++)
	  {
	   if(arr[j]>arr[k])//����
		   k=j;
	  }
	  if (k!=i)
	  {
		  //����
		  swap(&arr[i],&arr[k]);
		 
	  }
	}
}
//Ĭдѡ������
void chosesort(int arr[],int index)
{
 int i,j,k;
 for(i=0;i<index-1;i++)
 {
  k=i;//��¼�Ƚϵ�ֵ
  for(j=i+1;j<index;j++)
  {
   if(a[j]>a[k])
   {
      k=j;//�ҵ����ֵ������
   }
  }
  if(k!=i){
	  swap(&a[k],&a[i]);
  }
}
}


//ָ���д��
void mysort_plus(int *a,int index)
{
	int i,j,k;
	for(i=0;i<index-1;i++)
	{
		k=i;
		for(j=i+1;j<index;j++)
		{
	        if(*(a+j)>*(a+k))
				j=k;//��¼���ֵλ��
		}
		if(i!=k)
		{
		 int atem;
		 atem=*(a+i);
		 *(a+i)=*(a+k);
		 *(a+k)=atem;
		}
	}
}

//
void printfarr(int a[],int index)
{
	int i=0;
 for(i=0;i<index;i++)
 {
  printf("%d ",a[i]);
 }
}
int main()
{    


//	int a=1,b=2;
//	int i=0;
//	int arr[5]={1,2,3,4,4};
//	printf("%d\n",sizeof(arr));
//	printf("%p\n",arr+1);//����������arr[0]
//	printf("%p\n",&arr);
//	for(i=0;i<5;i++)
//	 printf("%p\n",&arr[i]);
//    
//	_swap(&a,&b);
//	printf("%d,%d",a,b);//�����˵�ַ
	int a[5]={1,4,2,3,7};
	mysort(a,5);
	printfarr(a,5);
	printf("%d",sizeof(struct student));
	printf("%d",sizeof(struct _list));
	system("pause");
	return 0;
}