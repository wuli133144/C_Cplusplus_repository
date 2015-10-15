/*
 *Copyright (C), 2015-2020 吴玉杰,
 *All rights reserved.
 *
 *文件名称：String.h
 *文件标示：
 *摘要：字符串的使用
 *
 *当前版本：1.1
 *作者: 吴玉杰
 *创建时间: 2015/08/15
 * 
 *取代版本：1.0
 *原作者：吴玉杰
 *完成时间：2015/08/15
 *
*/	


#define   STRING_H
#ifdef    STRING_H



#include<stdio.h>

#define  LENGTH   20
#define   _type  char

typedef struct _string
{
         _type data[LENGTH];
		 int length;
}String,*Pzstring;



//赋值操作
void StrAssign(Pzstring lhv,Pzstring rhv)
{
	int i=0;
	for(i=0;rhv->data[i]!='\0';i++)
	{
           lhv->data[i]=rhv->data[i];
	}
	lhv->length=i;
}

//判空操作
int isemptyornull(Pzstring str)
{

	/*
	if（!str->length）{}
	if(str->length==0){}
	   return str->length==0 ? 1 : 0;
	*/
	if(0==str->length){
		return 1;
	}
	else return 0;
}

//求字符串的长度
int getlength(Pzstring str)
{  
	return str->length;
}
//串的复制操作
void strcopy(Pzstring newstr,Pzstring oldstr)
{
	int i;
	for(i=0;i<oldstr->length;i++){
		newstr->data[i]=oldstr->data[i];
	}
	newstr->length=i;
	
}

//串的比较函数
int strcompare(Pzstring str1,Pzstring str2)
{
	int i;
	for(i=0;i<str2->length&&i<str1->length;i++)
	{
		if(str1->data[i]!=str2->data[i])
		{
	          return (str1->data[i]-str2->data[i]);
		}
		
	}
	return (str1->length-str2->length);//比较完毕返回串的值

}

//串的插入操作
//在s的pos位置插入串T

int StrInsert(Pzstring S,int pos,Pzstring T)
{
  int i;
  if(pos<0||pos>S->length+1)
  {
	  printf("插入位置错误!");
      return -1;
  }
  if(S->length+T->length<=LENGTH)
  {
         //完整的插入
	  for(i=S->length+T->length-1;i>T->length+pos-1;i--)
	  {
		  S->data[i]=S->data[i-T->length];
	  }
	  //偏移
	  for(i=0;i<T->length;i++)
	  {
	       S->data[i+pos-1]=T->data[i];
	  }
	  S->length=S->length+T->length;
	  return 1;
  }
  else if(pos+T->length<=LENGTH)//可以把t插进去
  {
		//将s字符移动至结尾
	  for(i=pos-1;i<T->length;i++)
	  {
		  S->data[i+T->length]=S->data[i];
	  }
	  //偏移插入
	  for(i=0;i<T->length;i++)
	  {
		  S->data[i+pos-1]=T->data[i];
	  }
	  S->length=LENGTH;
	  return 0;
  }
  else//不可以把t插进去
  {
     //截断字符串
	  for(i=0;i<LENGTH-pos;i++)
	  {
		  S->data[i+pos-1]=T->data[i];
	  }
      S->length=LENGTH;
	  return 1;
  }


}

//清空
void clear(Pzstring str){
	str->length=0;
}

//删除操作
int del(Pzstring str,int pos,int length)
{

 int i;
 if(pos<0
	 ||pos+length-1>str->length
	 ||length<0)
 {
    printf("插入位置不正确!");
	return 0;
 }
 else
 {
     for(i=pos+length;
		 i<str->length-1;
		 i++)
	 {
		 str->data[i-length]=str->data[i];//删除字符串
	 }
	 str->length=str->length-length;//设置长度
	 return 1;
 }
}


//重写删除操作
int delete_str(Pzstring str,int pos,int len)
{
	int i;
	//判断删除的位置是否正确
	if(pos<0||pos+len-1>str->length||len<0)
	{     printf("删除的位置不正确");
		  return 0;
	}
	else
	{   //开始删除
		for(i=pos+len;i<str->length;i++)
		{
			str->data[i-len]=str->data[i];
		}
		str->length=str->length-len;
		return 1;
	}
}

int indexstr(Pzstring S,int pos,Pzstring T)
{
	int i=0,j=0;
	if(isemptyornull(S)){return 0;}
	for(;i<S->length&&j<T->length;)
	{
		if(S->data[i]==T->data[j])
		{
	        i++;
			j++;
		}
		else
		{
	          i=i-j+1; 
			  j=0;
		}
	}
	if(j>=T->length)
	{
         return i-j+1;
	}
	else 
		return -1;

}

//字符串匹配
int macth_str(Pzstring str,Pzstring str0)
{
	int i=0,j=0;
	for(;i<str->length&&j<str0->length;)
	{
		if(str->data[i]==str->data[j])
		{
			j++;
			i++;
		} 
		else
		{
			i=i-j+1;
			j=0;
		}
	}
	if(j>=str0->length)//找到字符串
	{
		return i-j+1;
	}
	else 
		return 0;
}

//取代字符串
int strreplace(Pzstring s,Pzstring t,Pzstring q)
{
	int i=0;
	int flag;
	if(isemptyornull(t)){return 0;}


	do{
		//i


	  }while(i);
}



#endif