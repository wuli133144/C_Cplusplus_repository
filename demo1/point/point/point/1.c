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
	//g�ı����ָ���ָ�򣬲�û�иı������ֵ
	printf_s("*p1=%d,*p2=%d\n",*p1,*p2);
	printf_s("a=%d,b=%d",a,b);
	system("pause");

}
#endif
#if 0
#include<stdio.h>
#include <stdlib.h>
/*
��������swap();
������int *lp1,int *lp2
����ֵ��void��
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
	//�Ա���һ������Ĵ���
	int a,b,*lp1=NULL,*lp2=NULL;

	//int *lptem=NULL;
	a=12;b=45;
	lp1=&a;
	lp2=&b;
//��������
//������ָ��ָ��ĵ�ֵ
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
	  printf("%s",*++argv);//char *argv[]�����в���

  }
//  system("pause");
  return 0;


}
#endif
#if 0
#include<stdio.h>
#include <stdlib.h>
//pointer��ʹ��
int main()
{  
	//����һ��ָ��
	int *p=NULL;
	int i=0;
     int a[5];
	//
	 p=a;//��ֵ
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
	 //while(p<a+5)��ִ�е�Ч���Ǻܸߵ�
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
    //����������֪a[0]��*aָ��ͬһλ��
	printf("%d\n",*(a+0));//a[i]=*(a+i)
	//�ܽ��������Ԫ�صķ�����
	//a[�±�]
	//ָ��
	//*(a+i)
	system("pause");
	return  0;
}

#endif
#if 0
#include <stdio.h>
#include<stdlib.h>
#define  SIZE 5
//������ʾ
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
	//������a�е�n��Ԫ�ذ��෴��˳�����д��
	int a[]={2,3,4,5,6};
	//��ʵ����a[i]��a[size-i-1]����
	//coding
	//ע��ѭ���յ�
	//
	int tem;
	int i=0;
	int index=SIZE/2;
	//for(;i<index;i++)
	//{
	//	//����ֵ
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
{   //��ά�����ʹ��
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
	p=a[0];//a[i]����ָ��
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
    //��p2���Ƹ�p1
	while((*p2)!='\0')
		*(p1++)=*(p2++);
	*p1='\0';
}
int main()
{   
	//���ƺ���
	char a[]="jack";
	char b[]="mama";
	int i=0;
	//copy_string(a,b);
	/*while(*(b+i)!='\0')
	{
		*(a+i)=*(b+i);
		i++;
	}*/
	//��д����
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
	//printf("%s",b);//b��ָ��
	
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
		//ע������Ĵ��������
		//*name[i]ֻ��ָ��ĵ�һ��Ԫ��
		//������strcmp�����������
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
	//����
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
//̷��ǿ p278ϰ��
//ϰ��ȫ����ָ�봦��
//1����3����������С���ﴦ��
#if 0
#include <stdio.h>
#include<stdlib.h>
int main()
{  
	//����
	system("pause");
	return 0;
}

#endif

#if 0
#include<stdio.h>
#include <stdlib.h>
#define  NUM 5
//����10������
void prin(int a[],int n)
{    int i=0;
	printf("����10��������\n");
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
	//�ҵ���С��ֵ������ֵ

	int index=0;
	int max=a[0];
	int min=a[0];
	int i=0,k=0;
	int tem;
	int k1=0;
	
	
	for (;i<n-1;i++)
	{
		//�����ֵ
		if(a[i]>=max)
		{
			//swap_(&max,&a[i]);
			tem=max;
			max=a[i];
			a[i]=tem;
			k=i;
		}
	}
	//��������ֵ����10λ
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
{//����λ��
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
	scanf("%d",&n);//��������
	p=num;
	for (i=0;i<n;i++)
	{
		*(p+i)=i+1;//��ʼ��
	}
	i=0;
	m=0;
	k=0;
	while(m<n-1)//ʣ��һ����
	{
		if (*(p+i)!=0)
		{
			k++;
		}
		if (k%3==0)
		{
         *(p+i)=0;//���
		 k=0;//���´�1��ʼ��3
		 m++;//��ɾ��������
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
	printf("ʣ��%d",*p);
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
	printf("��������Ϸ���˸���:n=\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		*(p+i)=i+1;//���˱�Ŵ�1��ʼ��n
	}
	i=0,j=0,k=0,m=0;//m��¼ɾ��������
	while (m<n-1)
	{
		if(*(p+i)!=0)
		{
			k++;//����1��3
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
//��дstrncpy()
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