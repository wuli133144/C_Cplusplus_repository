#if 1

#include <stdio.h>
#include<stdlib.h>
//̷��ǿc����
//��������1

char *copy_string(char *p1,char *p2)
{    char *tem=p1;
	while(*p2!='\0')
	{
	 *p1=*p2++;
	  p1++;
	}
	p1=tem;
	return p1;
}
//��������2
//
char *copy_string1(char * p1,char *p2)
{   char *tem=p1;
  if(tem==NULL)exit(0);
	while((*p1++=*p2++)!='\0')
		return tem;
}

//���ַ����ĳ���
int length_my(char *p)
{
	int le=0;
	while(*p++!='\0')
		le++;
	return le;
}
//��дstring_n_copy(char *str)
char *string_n_copy(char *q,int m)
{  char *ptem=q;
   int len=0;
	while(*ptem++!='\0'&&len++<m);
	if(*ptem=='\0') return NULL;
	return --ptem;

}
//����һ���ַ��ж��ַ����ֺ���ĸ�Ϳո�
void  string_is(char *p)
{  
	int numupper=0,numlowwer=0,numspace=0,num=0,numelse=0;

	while(*p!='\0')
	{
         if(*p>='A'&&*p<='Z')
             numupper++;
		 else if(*p>='a'&&*p<='z')
			 numlowwer++;
		 else if(*p==' ')
			 numspace++;
		 else if(*p>=0&&*p<=9)
			 num++;
		 else 
		 numelse++;
		 p++;
	}
	printf("��д����ĸΪ��%d\n",numupper);
	printf("Сд����ĸΪ��%d\n",numlowwer);
	printf("���֣�%d\n",num);
	printf("�ո�%d\n",numspace);
	printf("������ĸΪ��%d\n",numelse);

	
}
//////////////////////////////////////////////////////////////////////////
//5��
//Լɪ��ѭ��
typedef struct _list
{
   int data;
   struct  _list *next;

}List,*LPlist; 
#define NUM 6
//////////////////////////////////////////////////////////////////////////


void anser_yuese()
{  
	int k=0;
	int i=0;
	int j=0,num=0;
    List student[NUM];
	for(;i<NUM;i++)
		student[i].data=i;
	  for (;j<NUM;j++ )
	  {
		  student[j].next=&student[j+1];
	  }
	  student[NUM-1].next=&student[0];
	  //////////////////////////////////////////////////////////////////////////
	  //�������쾲̬������

	  for(i=0;i<NUM&&num<NUM-2;i++)
	  {
		  if(++k%3==0)
			{  k=0;
		       student[i].data=0;
			   num++;
		     }
		  if(i==NUM-1)
		  {
			  i=0;
		  }

       }
	   i=0;
	   for(;i<NUM;i++)
	  while(student[i].data!=0)
	  {  
	     printf("��%d��������\t",student[i++].data+1);
	  }

}


//function() itoa1(int n,char s[],int b)
//��������itoa1
//������ int _Val,char * _DstBuf, int _Radix
//����ע�ͣ�int _val��ʾ��ת����������char *_dstbuf�������� ,int _radix �������
//����ֵ��void
//���ߣ�jackwu, allrights are reserved 
//ʱ��:2015,3,31
 void itoa1(int _Val,char *_DstBuf, int _Radix)
 {  
	 int i=0,j=0;
	 char *ptem;
	 do{
	    *(_DstBuf+i)=_Val%_Radix+'0';
	    _Val=_Val/_Radix;
	    i++;
	 }while(_Val);
	 ptem=(char *)malloc(sizeof(char)*i);//���ٿռ� ptem���������ֹ�ͷ�
	 i--;
    while(i>=0)//�������
	{   *(ptem+j)=*(_DstBuf+i);
		j++;
		i--;
	}
	*(ptem+j) = '\0';
	while((*_DstBuf++=*ptem++)!='\0');
}

  //function() itoa2(int n,char s[],int b)
 //��������itoa2
 //������ int _Val,char * _DstBuf, int _Radix
 //����ע�ͣ�int _val��ʾ��ת����������char *_dstbuf�������� ,int _radix �������
 //����ֵ��void
 //���ߣ�jackwu, allrights are reserved 
 //ʱ��:2015,3,31
 //�ݹ鷽��
 //ȱ�㣺���þ�̬�����������ڴ�Ŀ�����Ч�ʵ���
void itoa2(int _Val,char *_DstBuf, int _Radix)
 {
	 static int i=0,j=0,m=0;
	 static char *ptem;
     if(_Val!=0)
	 {
		 *(_DstBuf+i)=_Val%_Radix+'0';
		 _Val=_Val/_Radix;
		 m=i++;
		 itoa2(_Val,_DstBuf,_Radix);
	 };
	 if(_Val==0&&m==i-1)
	  ptem=(char *)malloc(sizeof(char)*i);//���ٿռ� ptem���������ֹ�ͷ�
	  i--;
	 *(ptem+j)=*(_DstBuf+i);//�������
	  j++;
	*(ptem+j) = '\0';
	 if(j==m+1)
	 {
     while((*_DstBuf++=*ptem++)!='\0');//����
	 }
 }

 

 
	 
//itoa();

int main()
{
	
	int p=4,i=0;
	char a[10];
    itoa2(p,a,2);
	for(;i<4;i++)
	  printf("%c\t",a[i]);
	
	//itoa();
	// printf_s("%s",p1);
     system("pause");


  return 0;
}

#endif