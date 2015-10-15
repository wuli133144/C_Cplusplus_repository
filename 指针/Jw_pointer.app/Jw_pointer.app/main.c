/*
指针的学习

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
	char name;//默认按8字节对齐 char是一个字节所以会1字节对齐
	int age;//4
	char sex;//1
	char sex0;//
	char name0[2];//
	char prin;
	char schoolname[3];//16//对齐的位置必须是对其参数的倍数
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

//交换函数
void swap(int *a,int *b)
{
 int tem;
 tem=*a;
 *a=*b;
 *b=tem;
}
//选择法排序
void mysort(int arr[],int size)
{
	int i,j,k;
	for(i=0;i<size-1;i++)//进行比较的次数
	{
	  k=i;
	  for(j=i+1;j<size;j++)
	  {
	   if(arr[j]>arr[k])//交换
		   k=j;
	  }
	  if (k!=i)
	  {
		  //交换
		  swap(&arr[i],&arr[k]);
		 
	  }
	}
}
//默写选择排序
void chosesort(int arr[],int index)
{
 int i,j,k;
 for(i=0;i<index-1;i++)
 {
  k=i;//记录比较的值
  for(j=i+1;j<index;j++)
  {
   if(a[j]>a[k])
   {
      k=j;//找到最大值的索引
   }
  }
  if(k!=i){
	  swap(&a[k],&a[i]);
  }
}
}


//指针的写法
void mysort_plus(int *a,int index)
{
	int i,j,k;
	for(i=0;i<index-1;i++)
	{
		k=i;
		for(j=i+1;j<index;j++)
		{
	        if(*(a+j)>*(a+k))
				j=k;//记录最大值位置
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
//	printf("%p\n",arr+1);//数组名就是arr[0]
//	printf("%p\n",&arr);
//	for(i=0;i<5;i++)
//	 printf("%p\n",&arr[i]);
//    
//	_swap(&a,&b);
//	printf("%d,%d",a,b);//交换了地址
	int a[5]={1,4,2,3,7};
	mysort(a,5);
	printfarr(a,5);
	printf("%d",sizeof(struct student));
	printf("%d",sizeof(struct _list));
	system("pause");
	return 0;
}