#ifndef  CRANDOM_TEST_H
#define   CRANDOM_TEST_H

 

#include<stdio.h>
#include<stdlib.h>


#include<time.h>
#define  maxsise  10
#define  VALUE     50


	int arr[maxsise];
	//��ʼ������
	//�������������


void Initarr(int min,int max);
int returnmax();
int returnmin();
int countnum();
//�������������
void Initarr(int max,int min)
{

	int i,j;
	int flag=0;//����Ƿ�������ͬ�������
	//memset(arr,0,sizeof(arr));
	srand((unsigned int)(time(NULL)));
	for(i=0 ; i<maxsise ; i++)
	{  flag=0;
		do
		{
		  arr[i]= (max-min+1)*rand() / (RAND_MAX + 1) +min;
		  for(j=0;j<i;j++)
		  {
			  if(arr[j] == arr[i])
				  flag=1;
		  }
	     }while(flag);
		

	}

}
//��ȡ���ֵ
int returnmax()
{   int i=0;
	int maxvalue=arr[0];
	for(i=0;i<maxsise;i++)
	{
          if(arr[i]>maxvalue)
		  {
		    //����
			  maxvalue=arr[i];
		  }
   }
	return maxvalue;
}
//�ҵ���Сֵ
int returnmin()
{  
	int i=0;
int minvalue=arr[0];
for(i=0;i<maxsise;i++)
{
	if(arr[i]<minvalue)
	{
		//����
		minvalue=arr[i];
	}
}
return minvalue;
}

//����ڵ���
int  countnum()
{
	int num=0;
	int i=0;
	for(i=0;i<maxsise;i++)
	{
		if(arr[i] >= VALUE)
		{
			num++;
		}
	}
	return num;
}

//������е�ֵ
void printfall()
{
	int i=0;
	for(i=0;i<maxsise;i++)
	{
		printf_s("%d ",arr[i]);
	}
		printf_s("\n");
}

//��ӡ���е�ֵ
void printf_allnum()
{
	int i=0;
	for (;i<maxsise;i++)
	{
		if(arr[i] >= 50)
		{
               printf("%d ",arr[i]);	
 		}
	}
}

//��������
void insertsort(int array[],int n)
{
	int i=0,j=0;
	int x;
	//int j=0;
	for(i=1;i<n;i++)
	{
	 x=array[i];
	 for(j=i-1;x<array[j] && j>=0;--j)
	 {
		// arr[j]=arr[j+1];
		 array[j+1]=array[j];
	 }
	 array[j+1]=x;
	}
//printf_all(arr,int n)
}

//������е�ֵ
void printf_all(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf_s(" %d",arr[i]);
	}
}


void Insertsort(int array[],int n)
{
  int i=0,j=0;
  int x;
  for(i=1;i<n;i++)
  {
	  x=array[i];
	  for(j=i-1;j > 0 && x<array[j];--j)
	  {
            array[j+1]=array[j];
	  }
	  array[j+1]=x;
  }
}


//����������
//˼�룺
/*
 1��2��5��87��4��9


*/
void binsort(int array[],int n)
{
	int i=0,j=0;
	int x,low,high,mid;
	for( i=2;i <= n;i++)
	{
		x=array[i];
		low=0,high=i-1;//0   i-1����
		while(low <= high)
		{
	      mid=(low+high)/2;
		  
		}




	}
}
#endif