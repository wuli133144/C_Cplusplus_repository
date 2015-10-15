#if 0
#include <stdlib.h>
#include<stdio.h>

main()
{
	int a,b,*p1,*p2;
	int *lptem=NULL;
	scanf("%d,%d",&a,&b);
	p1=&a;
	p2=&b;
	
	lptem=p1;
	p1=p2;
	p2=lptem;
	//g改变的是指针的指向，并没有改变变量的值
	printf_s("*p1=%d,*p2=%d\n",*p1,*p2);
	printf_s("a=%d,b=%d",a,b);
	system("pause");

}
#endif
#if 0
#include<stdio.h>
#include <stdlib.h>
/*
函数名：swap();
参数：int *lp1,int *lp2
返回值：void型
	*/
void swap_(int *lp1 ,int *lp2)
{
	int tem;
	tem=*lp1;
	*lp1=*lp2;
	*lp2=tem;
}
int main()
{  
	//对比上一个程序的代码
	int a,b,*lp1=NULL,*lp2=NULL;

	//int *lptem=NULL;
	a=12;b=45;
	lp1=&a;
	lp2=&b;
//交换函数
//交换了指针指向的的值
	swap_(lp1,lp2);
	printf_s("a=%d,b=%d",a,b);
	system("pause");
	return 0;
}


#endif
#if 0
#include"stdall.h"

BEGIN  
	//int m[]={45,12};
	int a[]={1,3,4,7,8};
    int b[]={9,8,7};
	int i=0;
    int *p=&a;
	printf_s("a=%d\n",a);
	printf_s("p=%d\n",p);
	printf_s("%d\n",b);
	printf_s("a[0]=%d\n",&a[0]);
	printf_s("a[1]=%d\n",&a[1]);

//	while(i<3)
	 printf_s("%d\n", *(p-3));
	// printf("%d",&b);

END

#endif
#if 0
#include <stdlib.h>
#include<stdio.h>
	int main(int argc ,char *argv[])
{
  while (argc-->0)
  {
	  printf("%s",*++argv);//char *argv[]命令行参数

  }
//  system("pause");
  return 0;


}
#endif
#if 0
#include<stdio.h>
#include <stdlib.h>
//pointer的使用
int main()
{  
	//定义一个指针
	int *p=NULL;
	int i=0;
     int a[5];
	//
	 p=a;//赋值
	 for(;i<5;i++)
	 {
		 scanf("%d",p++);
	 }
	 p=a;
	/* for (i=0;i<5;i++)
	 {
		 printf("%d\t",*p++);
	 }*/
	/* while (p<a+5)
	 {
		 printf("%d\t",*p++);
	 }*/
	 //while(p<a+5)的执行的效率是很高的
	 system("pause");
return 0;
}
#endif
#if 0
#include<stdio.h>
#include <stdlib.h>
int main()
{   //////////////////////////////////////////////////////////////////////////
    int a[]={1,2,3,4,5,6};
	printf("%d\t",a[0]);
	printf("%d\n",*a);
    //有输出结果可知a[0]与*a指向同一位置
	printf("%d\n",*(a+0));//a[i]=*(a+i)
	//总结访问数组元素的方法有
	//a[下标]
	//指针
	//*(a+i)
	system("pause");
	return  0;
}

#endif
#if 0
#include <stdio.h>
#include<stdlib.h>
#define  SIZE 5
//函数表示
int rev(int *p,int n)
{
	int tem;
	int i=0;
	 for (;i<n;i++)
	 {
		 tem=*(p+i);
		*(p+i) =*(SIZE+p-i-1);
		*(SIZE+p-i-1)=tem;
	 }
	 return 0;
}

int main()
{    
	//////////////////////////////////////////////////////////////////////////
	//将数组a中的n个元素按相反的顺序排列存放
	int a[]={2,3,4,5,6};
	//其实就是a[i]与a[size-i-1]调换
	//coding
	//注意循环终点
	//
	int tem;
	int i=0;
	int index=SIZE/2;
	//for(;i<index;i++)
	//{
	//	//交换值
	//	//swap_();
	//	tem=a[i];
	//	a[i]=a[SIZE-i-1];
	//	a[SIZE-1-i]=tem;
	//}
	rev(a,index);
	for ( i=0;i<SIZE;i++)
	{
		printf("%d\t",a[i]);
	}


	system("pause");
	return 0;
}
#endif
#if 0
#include<stdio.h>
#include<stdlib.h>
int main()
{   //多维数组的使用
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	//int (*p)[3]=a;

	int i=0;
	//p=&a[0];
	//for (;i<3;i++)
	//{
	//	printf_s("%d",*p++);
	//}
	
		printf("%d\n",**(a+1));
		printf("%d\n",*a[1]);
		printf("%d\n",*a[1]);

	system("pause");
	return 0;
}

#endif
#if 0
#include<stdlib.h>
#include <stdio.h>
int main()
{   
	//
	int a[3][3]={1,2,3,
				4,5,6,
				7,8,9
				};
	int *p=NULL;
	p=a[0];//a[i]是列指针
	for (;p<a[0]+9;p++)
	{   
		if ((p-a[0])%3==0)
		{
			printf("\n");
		}
		printf("%d\t",*p);
	}


	system("pause");
	return 0;
}
#endif
#if 0
#include<stdio.h>
#include <stdlib.h>
int main(int argc,char *argv)
{   int i=0,j=0;
	int a[3][3]={1,2,3,
				4,5,6,
				7,8,9
				};
	int (*p)[3];
	p=a;
	
	scanf("%d,%d",&i,&j);
	printf("a[%d,%d]=%d",i,j,*(*(p+i)+j));
	system("pause");
	return 0;
}

#endif
#if 0
#include<stdio.h>
void copy_string(char *p1,char *p2) 
{
	if(p1==NULL||p1==NULL)return;
    //将p2复制给p1
	while((*p2)!='\0')
		*(p1++)=*(p2++);
	*p1='\0';
}
int main()
{   
	//复制函数
	char a[]="jack";
	char b[]="mama";
	int i=0;
	//copy_string(a,b);
	/*while(*(b+i)!='\0')
	{
		*(a+i)=*(b+i);
		i++;
	}*/
	//重写代码
	for (;*(a+i)!='\0';i++)
	{
		*(b+i)=*(a+i);
    }
	*(b+i)='\0';
	printf("%s",a);
	system("pause");
	return 0;
}

#endif
#if  0

void rev(char *a,char *b)
{  
	while(*b)
	{
	   *a=*b;
		a++;
		b++;
	}
	*a='\0';
   return ;
}

#include <stdlib.h>
#include <stdio.h>


int main()
{   char *aa="ajc";
    char *bb="wuyujie";
	char a[]="jack";
    char b[20];
	char *p,*q;
	int i;
	p=a,q=b;
	for(;*p!='\0';)
	{
	 *q++=*p++;
	}
	*q='\0';
	//rev();
	//printf("%s",b);//b是指针
	
	rev(aa,bb);

	printf("%c",aa);
    system("pause");
	return 0;
}


#endif
#if 0
#include<stdlib.h>
#include<stdio.h>

void sort(char *name[],int n)
{   int i=0,j=0;
	char *tem=NULL;
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-j-1;j++)
		{
			//if (*name[j]>*name[j+1])//
			//{
			//	tem=name[j];
			//	name[j]=name[j+1];
			//	name[j+1]=tem;
			//}
		//注意上面的代码的问题
		//*name[i]只是指向的第一个元素
		//可以用strcmp（）代替代码
			if (strcmp(name[j],name[j+1]))
			{
				tem=name[j];
				name[j]=name[j+1];
				name[j+1]=tem;
			}
	
	}
	}
}
int main()
{    

    char *name[]={"jack","is","number","ijin"};
	int n=3;
	int i=0;
	//排序
	sort(name,4);
	for (;i<4;i++)
	{
		printf("%s\t",name[i]);
	}

	system("pause");
	return 0;
}
#endif
//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
//谭浩强 p278习题
//习题全部用指针处理
//1输入3个整数按由小到达处理
#if 0
#include <stdio.h>
#include<stdlib.h>
int main()
{  
	//排序
	system("pause");
	return 0;
}

#endif

#if 0
#include<stdio.h>
#include <stdlib.h>
#define  NUM 5
//输入10个整数
void prin(int a[],int n)
{    int i=0;
	printf("输入10个整数：\n");
	for (;i<n;i++)
	{
       scanf("%d",&a[i]);
	}
	
}
void swap_(int *_x,int * _b)
{
  int tem;
  tem=*_x;
  *_x=*_b;
  *_b=tem;
}
void out_(int a[],int n)
{   int i=0;
for (;i<n;i++)
{
	printf("%d\t",a[i]);
}
}

int * change(int a[],int n)
{
	//找到最小的值和最大的值

	int index=0;
	int max=a[0];
	int min=a[0];
	int i=0,k=0;
	int tem;
	int k1=0;
	
	
	for (;i<n-1;i++)
	{
		//找最大值
		if(a[i]>=max)
		{
			//swap_(&max,&a[i]);
			tem=max;
			max=a[i];
			a[i]=tem;
			k=i;
		}
	}
	//交换最大的值到第10位
    //swap_(&max,&a[10]);
	//swap_(&max,&a[i]);
	/*tem=b[k];
	b[k]=b[n-1];
	b[n-1]=tem;*/

	tem=a[k];
	a[k]=a[n-1];
	a[n-1]=tem;
	out_(a,5);
	printf("\n");
	//////////////////////////////////////////////////////////////////////////

	for (i=0;i<n-1;i++)
	{  if(a[i]<=min)
		{//swap_(&max,&a[i]);
			tem=min;
			min=a[i];
			a[i]=tem;
			k1=i;
		}
	}
	//swap_(&min,&a[0]);
	/*tem=b[k1];
	b[k1]=b[0];
	b[0]=tem;*/
	tem=a[k1];
	a[k1]=a[0];
	a[0]=tem;
	out_(a,5);
	printf("\n");
	
	return b;

}

int main()
{    int * m=NULL;
	int a[NUM];
    prin(a,NUM);
   // m=change(a,NUM);

	out_(a,NUM);
	system("pause");
	return 0;
}

#endif
#if 0

#include <stdio.h>
#include<stdlib.h>
#define INDEX_LEN 3
#define  SIZE 10
int  * jac(int a[],int n,int m)
{//调整位置
	int *p=a;
	p=a+n-m;
	p+m=a;
//	int i=0,j=0,l=0;
//	if(m>n) return 0;
//	for (;i<m;i++)
//	{
//		a[i+m]=a[i];
//	}
////////////////////////////////////
/////////////////////////////////////////
//
//	for (j=n-m;j<n;j++,l++)
//	{  
//		a[l]=a[j];
//	}
//
	return p;

}
void out_(int a[],int n)
{   int i=0;
for (;i<n;i++)
{
	printf("%d\t",*a++);
}
}
int main()
{    
	int a[]={1,2,4,1,4,3};
	//jac(a,6,2);
	int *p=jac(a,6,2);
	out_(p,6);
	
	system("pause");
	return 0;
}

#endif
#if 0
#include<stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,j,k,m,num[50],*p;
	printf("input number student of person:\n");
	scanf("%d",&n);//输入人数
	p=num;
	for (i=0;i<n;i++)
	{
		*(p+i)=i+1;//初始化
	}
	i=0;
	m=0;
	k=0;
	while(m<n-1)//剩下一个数
	{
		if (*(p+i)!=0)
		{
			k++;
		}
		if (k%3==0)
		{
         *(p+i)=0;//清除
		 k=0;//从新从1开始到3
		 m++;//记删除的人数
		}
		i++;
		if (i==n)
		{
			i=0;
		}
	}
	while(*p==0)
	{
		p++;
	}
	printf("剩下%d",*p);
	system("pause");
	return 0;

}


#endif

#if 0
#include<stdio.h>
#include <stdlib.h>

int main()
{   //
	int num[50],i,n,j,k,m,*p;
	p=num;
	printf("请输入游戏的人个数:n=\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		*(p+i)=i+1;//给人编号从1开始到n
	}
	i=0,j=0,k=0,m=0;//m记录删除的人数
	while (m<n-1)
	{
		if(*(p+i)!=0)
		{
			k++;//增加1到3
		}
		if(k==3)
			{
				*(p+i)=0;
				 k=0;
				 m++;
		    }
            i++;
		if (i==n)
			{
				i=0;
			}
			
	}
	while(*(p)==0)
		p++;
	printf("%d",*p);



	
	system("pause");
	return 0;
}

#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
int lenth(char *str)
{
	//char *strtem=NULL;
	//strtem=str;
	int len=0;
	while (*str++!=0)
	{
		len++;
	}
	return len;
}
int main()
{   
	char *lp="jakc";
	printf("%d",lenth(lp));

	system("pause");
	return 0;
}

#endif
#if 1
//从写strncpy()
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
void strncpy_my(char *lp,char *lp1,int n)
{ // if(strlen(lp1)<n) return ;
   int n1=0;
   while(n1<n-1)
  {
	  n1++;
	  lp1++;
  }
  while(*lp1!='\0')
  {
	  *lp=*lp1;
	  lp1++;
	  lp++;
  }
  *lp='\0';
}
main()
{    
	char *a="jakc";
	char *b="my";
	strncpy_my(a,b,1);
	printf("%s",a);
    system("pause");
}

#endif