#if 1

#include <stdio.h>
#include<stdlib.h>
//谭浩强c语言
//拷贝函数1

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
//拷贝函数2
//
char *copy_string1(char * p1,char *p2)
{   char *tem=p1;
  if(tem==NULL)exit(0);
	while((*p1++=*p2++)!='\0')
		return tem;
}

//求字符串的长度
int length_my(char *p)
{
	int le=0;
	while(*p++!='\0')
		le++;
	return le;
}
//重写string_n_copy(char *str)
char *string_n_copy(char *q,int m)
{  char *ptem=q;
   int len=0;
	while(*ptem++!='\0'&&len++<m);
	if(*ptem=='\0') return NULL;
	return --ptem;

}
//输入一行字符判断字符数字和字母和空格
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
	printf("大写的字母为：%d\n",numupper);
	printf("小写的字母为：%d\n",numlowwer);
	printf("数字：%d\n",num);
	printf("空格：%d\n",numspace);
	printf("其他字母为：%d\n",numelse);

	
}
//////////////////////////////////////////////////////////////////////////
//5题
//约瑟夫循环
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
	  //结束构造静态的链表

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
	     printf("第%d个人留下\t",student[i++].data+1);
	  }

}


//function() itoa1(int n,char s[],int b)
//函数名：itoa1
//参数： int _Val,char * _DstBuf, int _Radix
//参数注释：int _val表示：转换的整数，char *_dstbuf代表数组 ,int _radix 代表基数
//返回值：void
//作者：jackwu, allrights are reserved 
//时间:2015,3,31
 void itoa1(int _Val,char *_DstBuf, int _Radix)
 {  
	 int i=0,j=0;
	 char *ptem;
	 do{
	    *(_DstBuf+i)=_Val%_Radix+'0';
	    _Val=_Val/_Radix;
	    i++;
	 }while(_Val);
	 ptem=(char *)malloc(sizeof(char)*i);//开辟空间 ptem堆内申请防止释放
	 i--;
    while(i>=0)//反向操作
	{   *(ptem+j)=*(_DstBuf+i);
		j++;
		i--;
	}
	*(ptem+j) = '\0';
	while((*_DstBuf++=*ptem++)!='\0');
}

  //function() itoa2(int n,char s[],int b)
 //函数名：itoa2
 //参数： int _Val,char * _DstBuf, int _Radix
 //参数注释：int _val表示：转换的整数，char *_dstbuf代表数组 ,int _radix 代表基数
 //返回值：void
 //作者：jackwu, allrights are reserved 
 //时间:2015,3,31
 //递归方法
 //缺点：调用静态变量，增大内存的开销，效率低下
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
	  ptem=(char *)malloc(sizeof(char)*i);//开辟空间 ptem堆内申请防止释放
	  i--;
	 *(ptem+j)=*(_DstBuf+i);//反向操作
	  j++;
	*(ptem+j) = '\0';
	 if(j==m+1)
	 {
     while((*_DstBuf++=*ptem++)!='\0');//复制
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