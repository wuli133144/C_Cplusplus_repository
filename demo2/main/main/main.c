#if 0

#include<stdio.h>
#include <stdlib.h>
//ȡһ������a�����Ҷ˿�ʼ��4~7λ
int main()
{    

	unsigned int a,b,c,d;
	scanf("%d",&a);
	b=a>>4;//��4~7�Ƶ�ָ����λ��
	c=~(~0<<4);//0��4��ֵ�Ƕ���
	d=b&c;
    printf("%d\n",d);
    system("pause");
	return 0;
}
//     0111 1011=123����4
//     0000 0111

#endif
#if 0
//ѭ����λ
#include<stdio.h>
#include <stdlib.h>
int main()
{   unsigned int a=157653,b,c;
     int n;
	 printf(",,,,,,,,,,,,,,�����ƶ���λ��\n");
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
//ͳ��һ����2�ĸ���
#include<stdio.h>
#include <stdlib.h>
int main()
{    int num,count=0;  
	 printf(". ............��������:\n");
	 scanf("%d",&num);
	 while (num)
	 {
		 if(num&1)//�����һλ�����һλ��0��ô�ͻ�������һ����Ϊ1&0��0
			 count++;//�Լ�XXXXXX0&000000001��ô���������ʲô����0��ֻҪ���һλ����0��ô�ͻ�1&1=1�Լ�1
		 num=num>>1;
	 }

	 printf("%d\n",count);


	system("pause");
	return 0;
}

#endif
#if 0
//�ⷨ2
#include<stdio.h>
#include <stdlib.h>
int main()
{   
	int num,count=0;  
	printf(". ............��������:\n");
	scanf("%d",&num);
	while(num)
	{
           count++;
		   num=num&(num-1);//���õ�λ�������λ��ķ���
		                 //�ж��м���1ֻҪ��һ�ͻ����ѭ��
	 }
	printf("%d\t",count);
	system("pause");
	return 0;
}

#endif
//��ҵ
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
//���ٵ�ת����Сд

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
//��дһ������ ȡ��һ����16λ���������ļ���λ
//����1 3��5��15
main()
{
   //43690
	int i,j,q,z=0,a;
	unsigned int num;
	printf("--------------\n");
	scanf("%d",&num);

	//////////////////////////////////////////////////////////////////////////
	//�������������λ
	//ÿ���ƶ���λ��ô�Ϳ��԰�����λ��¶����
	//�ٻ�ȡ����λ

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
	//�߼����Ʊ����������
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
{  //�������Ʊ���߼�����
	
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

		printf("��ֵ����");
		m=0;
	}
	else
	{
		printf("�߼�����");
		m=1;
	}
	
	if(m==1)
	{
		printf("������Ҫ�������:\n");
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
//ʵ��ѭ������
unsigned short move1(unsigned short value,int n)
{   
	unsigned short a=value;
	value=value>>n;
	a=a<<16-n;
	value=a|value;
	return value;
}

//ʵ��ѭ������
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
   printf("�������ƶ���λ��\n");
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
		printf("�����Ĳ���:%d\n",num);
	}
	else
	{
	    num=~num+1;
		printf("�����Ĳ���Ϊ:%d\n",num);
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
	//�ļ�ϵͳ������
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
	    int key = A[p];//����
	    int i = p,j,tep;//��¼λ��
	    for(j= p + 1;j < q; j++ )
		    {
				       if( A[j] <= key )
				        { 
				              i++; //swap<int>(A[i],A[j]);//����
							  _swap(&A[i],&A[j]);
					   }
			 }
		 _swap(&A[i],&A[p]);//ʼ����a[i]��С
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
//���������㷨
#include <stdio.h>
int parttion(int A[],int p,int q)
{
	int key=A[p];
	int i=p;
	for (int j=p+1;j<q;j++)
	{
		if (A[j]<=key)
		{   
			i++;//i++����
			swap<int>(A[j],A[i]);//iָ�����
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
//��������

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