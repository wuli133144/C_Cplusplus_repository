//#include<string.h>
//#include<stdlib.h>
//#include<stdio.h>
//#include<Windows.h>
//#include<iostream>
//#include<cassert>
//#include<math.h>
//#include<string.h>
//#include <cstring>
#if 0


int main()
{   
//�ж��ǲ�������
	
	int m,k,j;
	scanf_s("%d",&m);
	k=sqrt((float)m);
	int i=2;
	for (;i<=k;i++)
	{
		if (m%i==0)break;
	}
	if (i>k)
	{
		printf_s("������\n");
	}
	else
		printf_s("��������");


	system("pause");
	return 0;
}
#endif
#if 0
int main()
{
//�ж�����
	//��100-200��������
	int tag=0;
	for (int m=100;m<=200;m++)
	{
       int k=sqrt((float)m);
	   int tem=2;
		   for (;tem<=k;tem++)
		   {
			   if (m%tem==0)
			   break;
			}
		    if (tem>k)
		    {   if (tag++%5==0) 
			    printf_s("\n");
		        printf_s("%d\t",m);
		    }
			else
				continue;
	}
	
	system("pause");
return 0;
}
#endif
#if 0
//������
int main()
{    
	char c;
	while ((c=getchar())!=0)
	{
		if (c>='a'&&c<='z'||c>='A'&&c<='Z')
		{
			c=c+4;
		}
		putchar(c);
	}
	system("pause");
	return 0;


	//system("pause");
	//return 0;
}

#endif
#if 0
int main()
{


float a,x1,x2; 
scanf("%f",&a);
x1=1;x2=a;/*    notice!   */
while(fabs(x1-x2)>=1e-5)/*    notice!   */
{
	x1=x2;
	x2=(x1+a/x1)/2;
} 
printf("%f,%f",x1,x2);
system("pause");
}
#endif
#if 0
int main()
{   
	float a,x1,x2;
	 x1=1;
     scanf("%f",&a);
	  x2=a;
     while(fabs(x1-x2)>=1e-5)
	 {
		 x1=x2;
		 x2=(x1+a/x1)/2;
	 }
	 printf("%f\n",x1);
	 printf_s("%f",x2);
	 system("pause");
	 return 0;
}


#endif
#if 0
int main()
{   
	char str[100];
	gets(str);
	int i=0,tag=0;
	while (str[i]!=0)
	{
		if(str[i++]==' ')
			tag++;
	}
	//strcpy();
	printf_s("%d",++tag);
	system("pause");
	return 0;
}


#endif
#if 0
int main()
{
	//�����ַ����������ҵ�����
	char str[3][100];
	char strig1[10];
	for (int i=0;i<3;i++)
	{
		gets(str[i]);
	}
	if(strcmp(str[0],str[1])>0)
		 strcpy(strig1,str[0]);
	else
		strcpy(strig1,str[1]);
	if(strcmp(strig1,str[2])<0)
		strcpy(strig1,str[2]);
	printf_s("%s",strig1);
	system("pause");
	return 0;
}

#endif
#if 0
void max_add(char *_lpa,char *_lpb,char *_lpc)
{    const char *temp;
	if (strcmp(_lpa,_lpb)>0)
	{
		temp=_lpa;
	}
	else temp=_lpb;
	if (strcmp(temp,_lpc)<0)
	 temp=_lpc;
	printf("%s",temp);
}
int main()
{   
	char *lp="hahf";
	char *lp1="fsh";
	char *lp2="jdshg";
	max_add(lp,lp1,lp2);


	system("pause");
	return 0;
}

#endif
#if 0
void swap_(int a,int b)
{
	int tem;
	tem=a;
	a=b;
	b=tem;
}
int main()
{   
	//ɸѡ����100���ڵ�����

	//int i,j,k;
	//int a[100];
	//for (int j=1;j<100;j++)
	//{     
	//	for(int i=j;i<100;i+j)
	//	{
	//	     //a[i]=0;
	//	}
	//}1235678
	int a[10]={9,8,7,6,5,4,3,2,1,0};
	for (int i=1;i<10;i++)//iֻ�𵽱�ʾ������
	{
		for (int j=0;j<10-i;j++)
		{
			if (a[j]>a[j+1])
			{
				swap_(a[j],a[j+1]);
			}
		}
	}
	for (int i=0;i<10;i++)
	{   
		if (i%5==0)
		{
			printf("\n");
		}
		printf("%d\t",a[i]);
	}
	system("pause");
	return 0;
}


#endif
#if 0
void swap_(int &a,int &b)
{
	int tem;
	tem=a;
	a=b;
	b=tem;
}
void sort(int a[],int n)
{  
	//k������¼�����±�
	//������
	//ÿһ���ҵ�����ֵ����¼����λ��
	//ѭ������ÿ��ȥ����һ�ε����ֵ
	int i=0,j=0,k=0;
	for (int i=0;i<n;i++)
	{
		k=i;
		for (j=i+1;j<n;j++)//
		{  if(a[j]>a[k])
			{
				k=j;
			}

		}//�ҵ�����ֵa[k]
		if (k!=i)
		{
			swap_(a[k],a[i]);
		}
    }
}
int main()
{
	int a[]={1,2,3,4,5,6};
	sort(a,6);
	for (int i=0;i<6;i++)
	{
		if (i%3==0) printf("\n");
		printf("%d\t",a[i]);
	}
	system("pause");
	return 0;
}


#endif
#if  0
//��������
#include<stdlib.h>
int main()
{  
	char a[10];
    char *p;
	p=a;
    gets(p);
  //gets(p);
 // printf_s("%c",*p);
  while (*p!='\0')
  {  
	  if (*p>='a'&&*p<='z'||*p>='A'&&*p<='Z')
	  {  int i=*p-65;
	  if (i>26)
	  {	
		  i=*p-97;
	  }
		
		  putchar(*(p++)-26+i-1);
	  }
	
  
  }
  //putch(p);
	//��Ϻõ�д��
  /* char c;
  while ((c=getchar())!=0)
  {
  if (c>='a'&&c<='z'||c>='A'&&c<='Z')
  {  
	  int tem=0;
	  tem=c-65;
	  if (tem>26)
	  {
		  tem=c-97;
	  }
      c=c-26+tem-1;
  }s
  putchar(c);
  }*/
  system("pause");
  return 0;
}

#endif
#if 0
//strcpy()��д����
char *strcpy_add(char *_str1,char *_str2)
{
	char *lp;
	lp=_str2;
	while (*(_str2++)!=0)
	{
		_str1=_str2;
		_str1++;
	}
	//*_str1='\0';
	return lp;
}
int main()
{   
	char *lp1="ji", *lp="jack";
	char *lp3=strcpy_add(lp,lp1);
	printf_s("%s",lp3);
	system("pause");
	return 0;
}
#endif 
#if 0
 void delay()
 {
	 for(int i=0;i<100000000;i++)
	 {
         i++;
		 i--;
	 }
 }
int main()
{
	int i=1;
	printf("\t\t\t\t\t");

	for (int i=1;i<=100;i++)
	{    
		delay();
		printf("\b\b\b%d%",i);
		if (i!=100)
		{   
			for(int i1=i;i1<i;i1++)
			 printf("-");
		}

	}

	system("pause");
	return 0;
}

#endif
#if 0

int main()
{   
  	for (int i=1;i<=100;i++)
	{
		printf("%-3d",i);
		for (int j=1;j<=i;j++)
		{
			printf("=");
		}
		Sleep(100);
		system("cls");
	}
	system("pause");
	return 0;
	


}
#endif
#if 0
//ѡ������
void swap_(int &a,int &b)
{
   int tem;
   tem=a;
   a=b;
   b=tem;
}
void sort(int a[],int n)
{
	int i,j,k;
	for (i=0;i<n-1;i++)
	{
		k=i;//������ֵ�±�
		//�����ҵ���һ������a[]
		//�ҵڶ������ֵ �ȽϺ����ֵ
		//�Ƚ����ڵ�λ��ֵ�ô�С
		for(j=i+1;j<n;j++)
		{
			if (a[j]>a[k])k=j;
		}
		if (i!=k)
		{//����λ��,������ֵ����ǰ��
			swap_(a[i],a[k]);
		}

	}
}
int main()
{
	int a[]={1,2,3,5,6};
	sort(a,5);
	for (int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}	
	system("pause");
	return 0;


	
}
#endif

#if 0

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define  N 100

void swap_(int &a,int &b)
{
	int tem;
	tem=a;
	a=b;
	b=tem;
}

int main()
{    
	int a[N];
	for (int i=2;i<=N;i++)
	{
		a[N]=i;
	}
	for(int j=2;j<(int)sqrt((float)N);j++)
	{
		if (a[j]!=0)
		{
			for (int m=2*j;m<=N;m+=j)
			{
				a[m]=0;
			}
		}
	}
	for(int j=2;j<=N;j++)
	{
		if (a[j])
		{
			printf("%d\t",j);
		}
	}
    

	system("pause");
	return 0;
}

#endif
#if 0
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include<stdlib.h>

void swap_(int &a,int &b)
{
	int tem;
	tem=a;
	a=b;
	b=tem;
}

int main()
{   int x,y;
    int x1,y1;
	int a[3][3]={
		          1,3,3,
				  4,5,6,
				  7,8,9
				};
	int max=a[0][0];
	//�ҵ�����Ԫ��
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			if (a[i][j]>=max)
			{   
				x=i;
				y=j;
				swap_(a[i][j],max);
			}
			//�ж��ڸ�����С
		//	min=max;
			
		}
		if(a[0][y]<=a[1][y]&&a[0][y]<=a[2][y]&&x==0)
		{
			printf("����:a[0][%d]\n",y);
		} 
		if(a[1][y]<=a[0][y]&&a[2][y]<=a[2][y]&&x==1)
		{
			printf("����:a[1][%d]\n",y);
		} 
		if(a[2][y]<=a[0][y]&&a[2][y]<=a[1][y]&&x==2)
		{
			printf("����:a[2][%d]\n",y);
		} 
		
	}

	//����Сֵ
	
	system("pause");
	return 0;
}

#endif
#if 0
#include <stdlib.h>
#include <stdio.h>

void swap_(int &a,int &b)
{
	int tem;
	tem=a;
	a=b;
	b=tem;
}
void sort(int a[],int n)
{
	int i,j,k;
	for (i=0;i<n-1;i++)
	{
		k=i;//������ֵ�±�
		//�����ҵ���һ������a[]
		//�ҵڶ������ֵ �ȽϺ����ֵ
		//�Ƚ����ڵ�λ��ֵ�ô�С
		for(j=i+1;j<n;j++)
		{
			if (a[j]<a[k])k=j;
		}
		if (i!=k)
		{//����λ��,������ֵ����ǰ��
			swap_(a[i],a[k]);
		}

	}
}
//�����Ҵ���

void find(int a[],int n ,int num)
{    
	int high =n-1,k,low=0;
	k=(high+low)/2;
	while(low<=high)
	{
	 if (num!=a[k]&&a[k]>num)
	{
		high=k;
		k=(low+high)/2;
		continue;
    }
	 if (num!=a[k]&&a[k]<num)
	 {
		 low=k;
		 k=(low+high)/2;
		 continue;
	 }
	 if (num==a[k])
	 {
       printf("�ǵ�%d����",k+1);
	   break;
	 }
	}
}
int main()
{
	//15�������� ����������һ����
	int a[]={1,2,3,4,5,6,7};
	sort(a,7);
	for (int i=0;i<7;i++)
	{
		printf("%d ",a[i]);
	}
	printf("������������:\n");
	int num;
	scanf("%d",&num);
	find(a,7,num);
	system("pause");
	return 0;


}
	

#endif
