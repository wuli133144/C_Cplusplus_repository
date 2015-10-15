#if 0

#include<stdio.h>
#include <stdlib.h>
//取一个整数a从最右端开始的4~7位
int main()
{    

	unsigned int a,b,c,d;
	scanf("%d",&a);
	b=a>>4;//将4~7移到指定的位置
	c=~(~0<<4);//0《4的值是多少
	d=b&c;
    printf("%d\n",d);
    system("pause");
	return 0;
}
//     0111 1011=123》》4
//     0000 0111

#endif
#if 0
//循环移位
#include<stdio.h>
#include <stdlib.h>
int main()
{   unsigned int a=157653,b,c;
     int n;
	 printf(",,,,,,,,,,,,,,输入移动的位数\n");
	 scanf("%d",&n);
	 b=a<<(16-n);
	 c=a>>n;
	 c>>c|b;
	 printf("%o\t%o\n",a,c);

	system("pause");
	return 0;
}

#endif
#if 0
//统计一个数2的个数
#include<stdio.h>
#include <stdlib.h>
int main()
{    int num,count=0;  
	 printf(". ............请输入数:\n");
	 scanf("%d",&num);
	 while (num)
	 {
		 if(num&1)//如果有一位是最后一位是0那么就会跳过这一步因为1&0是0
			 count++;//自加XXXXXX0&000000001那么无论最后是什么都是0，只要最后一位不是0那么就会1&1=1自加1
		 num=num>>1;
	 }

	 printf("%d\n",count);


	system("pause");
	return 0;
}

#endif
#if 0
//解法2
#include<stdio.h>
#include <stdlib.h>
int main()
{   
	int num,count=0;  
	printf(". ............请输入数:\n");
	scanf("%d",&num);
	while(num)
	{
           count++;
		   num=num&(num-1);//利用低位不足向高位借的方法
		                 //判断有几个1只要有一就会继续循环
	 }
	printf("%d\t",count);
	system("pause");
	return 0;
}

#endif
//作业
//ox20
//oxdf
#if 0
#include <stdlib.h>
#include <stdio.h>
int getbit(int value,int _start,int _end)
{
	int _temp=value ,num,_num;
	num=value>>_start;
	_num=~(~0<<(_end-_start));
	return _num&num;
	
}
int main()
{    
	int a=getbit(123,4,7);
	printf("%d",a);

	system("pause");
	return 0;

}

#endif
#if 0
#include<stdlib.h>
#include <stdio.h>
//快速的转换大小写

main()
{ 
	char c[]="sadfASDFG";
   int i=0;
   while(c[i]!='\0')
   {      
         if(c[i]>='a'&&c[i]<='z')
		 {
			 c[i]=c[i]&0XDF; 
		 }
		 else if (c[i]>='A'&&c[i]<='Z')
		 {
			c[i]=c[i]|0X20;
		 }
		 putchar(c[i++]);

   }
	   
  system("pause");
}

#endif
#if 0
#include <stdio.h>
#include<stdlib.h>
//编写一个函数 取出一个数16位二进制数的寄数位
//即从1 3，5到15
main()
{
   //43690
	int i,j,q,z=0,a;
	unsigned int num;
	printf("--------------\n");
	scanf("%d",&num);

	//////////////////////////////////////////////////////////////////////////
	//计算二进制奇数位
	//每次移动两位那么就可以把奇数位暴露出来
	//再获取奇数位

	for (i=1;i<=15;i+=2)
	{
		q=1;
	for (j=1;j<=(16-i-1)/2;j++)
	{
		q=q*2;
	}
	  a=num>>(16-i);
	  a=a<<15;
	  a=a>15;
	  z=z+a*q;


	}
    printf("----------------%d\n",z);
	
	system("pause");
}

#endif

#if 0
#include<stdio.h>
#include <stdlib.h>
unsigned int getbit(unsigned int value,int n)
{  
	//逻辑右移变成算术右移
	unsigned int m=0;
	m=~m;
	m>>=n;
	m=~m;
    value>>=n;
	value=value|m;
	return value;
}
//
unsigned int getbit1(unsigned int value,int n)
{  //算术右移变成逻辑右移
	
	unsigned int m=0;
	m=~m;
	m>>=n;
	m<<=n;
	m=~m;
	value>>=n;
	value=value&m;
	return value;
}

main()
{
	short int a,n,m;
	a=~0;
	if((a>>5)!=a)
	{

		printf("数值右移");
		m=0;
	}
	else
	{
		printf("逻辑右移");
		m=1;
	}
	
	if(m==1)
	{
		printf("请输入要处理的数:\n");
		scanf("%d",&n);
		printf("%d",getbit(n,3));

	}
	system("pause");
	return ;
		
}

#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
//实现循环右移
unsigned short move1(unsigned short value,int n)
{   
	unsigned short a=value;
	value=value>>n;
	a=a<<16-n;
	value=a|value;
	return value;
}

//实现循环左移
unsigned short move(unsigned short value,int n)
{   
	unsigned short a=value;
	value=value<<n;
	a=a>>16-n;
	value=a|value;
	return value;
}

main()
{
   unsigned short a,n;
   printf("#####################\n");
   scanf("%d",&a);
   printf("请输入移动的位数\n");
   scanf("%d",&n);
   printf("%d",move(a,n));
   system("pause");
   return ;

}

#endif
#if 0
#include<stdio.h>
#include <stdlib.h>

main()
{  
	int num;
	while(1){
	scanf("%d",&num);
	if (num>=0)
	{
		printf("该数的补码:%d\n",num);
	}
	else
	{
	    num=~num+1;
		printf("该数的补码为:%d\n",num);
	}
	}
  system("pause");
}


#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
main()
{  
	FILE *fp;
	char c;
	if ((fp=fopen("1.txt","a+"))==NULL)
	{
		printf("cannt open this file \n");
		exit(0);
	}
	else
	{
		while((c=getchar())!='#')
		{
		    fputc(c,fp);
		}
    }
	fclose(fp);
	if ((fp=fopen("1.txt","a+"))==NULL)
	{
		printf("cannt open this file \n");
		exit(0);
	}
	else
	{
         while(!feof(fp))
		 {
			 c=fgetc(fp);
			 putchar(c);
		 }
	}

		
	fclose(fp);
   system("pause");
   return ;
}

#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
main()
{   char *p;
	char *lpstr=(char *)malloc(sizeof(char)*20);
	FILE *fp;
	char c;
	p=lpstr;

	gets(lpstr);

	while(*lpstr!='\0')
	{
		if(*lpstr>='a'&&*lpstr<='z')
		{
			*lpstr=*lpstr&0xdf;
		}
		else if (*lpstr>='A'&&*lpstr<='Z')
		{
			*lpstr=*lpstr|0x20;
		}
		lpstr++;
	}

	
	if ((fp=fopen("1.txt","a+"))==NULL)
	{
		printf("cannt open this file \n");
		exit(0);
	}
	else
	{
		while((*p)!='\0')
		{
			fputc(*p++,fp);
		}
	}
	fclose(fp);
	



	
	system("pause");
	return ;
}

#endif
#if 0
#include <stdio.h>
#include <stdlib.h>
main()
{    
	//文件系统的作用
	FILE* fp1,*fp2;
	FILE *fp;
	int i=0;
	char stra[100]={'\0'};
	if((fp1=fopen("a.txt","a+"))==NULL)
	{
	  printf("cannt open file erro \n");
	  exit(0);
	}
	else
	{  
	   while(!feof(fp1))
		   stra[i++]=fgetc(fp1);
         fclose(fp1);
	}

	if ((fp2=fopen("b.txt","a+"))==NULL)
	{
		printf("cannt open file erro \n");
		exit(0);
	}
	else
	{
		while(!feof(fp2))
			stra[i++]=fgetc(fp2);
		fclose(fp2);
	}
	
	if ((fp=fopen("c.txt","a+"))==NULL)
	{
		printf("cannt open file erro \n");
		exit(0);
	}
	else
	{    i=0;
		while(stra[i]!=0)
			{  
			 fputc(stra[i++],fp);
		     }
		fclose(fp);
	}
	


	


	system("pause");
	return;
}

#endif
#if 0

#include <stdio.h>
main()
{
int i, n = 0;
float x = 1, y1 = 2.1 / 1.9, y2 = 1.9 / 2.1;
for ( i = 1; i < 22; i++ )
	x = x * y1;

while ( x!= 1.0 )
{
	x = x * y2;
	n++;
}
  printf("%d / n", n );
	system("pause");
}

#endif

#if 1

void _swap(int *a,int *b)
{   int tep;
	tep=*a;
	*a=*b;
	*b=tep;
}
int Partition( int A[], int p, int q )
	 {
	    int key = A[p];//基点
	    int i = p,j,tep;//记录位置
	    for(j= p + 1;j < q; j++ )
		    {
				       if( A[j] <= key )
				        { 
				              i++; //swap<int>(A[i],A[j]);//交换
							  _swap(&A[i],&A[j]);
					   }
			 }
		 _swap(&A[i],&A[p]);//始终让a[i]最小
		    return i;
	 }

void QuickSort( int A[], int p, int q )
    {
		    if( p < q )
		     {
			         int r = Partition(A, p, q);
			         QuickSort(A,p,r-1);
				     QuickSort(A,r+1,q);
			 }
	 }
main()
{
	int a[]={1,2,3,4,5,6,7,4};
	int i=0;
	 QuickSort(a,0,8);
	 for (i=0;i<8;i++)
	 {
		 printf("%d\n",a[i]);
	 }
	system("pause");
	return ;

}

#endif
#if 0
//快速排序算法
#include <stdio.h>
int parttion(int A[],int p,int q)
{
	int key=A[p];
	int i=p;
	for (int j=p+1;j<q;j++)
	{
		if (A[j]<=key)
		{   
			i++;//i++后移
			swap<int>(A[j],A[i]);//i指针后移
		}

	}
	swap<int>(A[p],A[i]);
	return i;
}
main()
{

}

#endif
#if 0
//快速排序

#include <stdio.h>
int parttion(int A[],int low,int high)
{
	int key;
	A[0]=A[low];
	key=A[0];
	while


}
main()
{

}
#endif