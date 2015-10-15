/*
 *Copyright (C), 2015-2020 �����,
 *All rights reserved.
 *
 *�ļ����ƣ�String.h
 *�ļ���ʾ��
 *ժҪ���ַ�����ʹ��
 *
 *��ǰ�汾��1.1
 *����: �����
 *����ʱ��: 2015/08/15
 * 
 *ȡ���汾��1.0
 *ԭ���ߣ������
 *���ʱ�䣺2015/08/15
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



//��ֵ����
void StrAssign(Pzstring lhv,Pzstring rhv)
{
	int i=0;
	for(i=0;rhv->data[i]!='\0';i++)
	{
           lhv->data[i]=rhv->data[i];
	}
	lhv->length=i;
}

//�пղ���
int isemptyornull(Pzstring str)
{

	/*
	if��!str->length��{}
	if(str->length==0){}
	   return str->length==0 ? 1 : 0;
	*/
	if(0==str->length){
		return 1;
	}
	else return 0;
}

//���ַ����ĳ���
int getlength(Pzstring str)
{  
	return str->length;
}
//���ĸ��Ʋ���
void strcopy(Pzstring newstr,Pzstring oldstr)
{
	int i;
	for(i=0;i<oldstr->length;i++){
		newstr->data[i]=oldstr->data[i];
	}
	newstr->length=i;
	
}

//���ıȽϺ���
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
	return (str1->length-str2->length);//�Ƚ���Ϸ��ش���ֵ

}

//���Ĳ������
//��s��posλ�ò��봮T

int StrInsert(Pzstring S,int pos,Pzstring T)
{
  int i;
  if(pos<0||pos>S->length+1)
  {
	  printf("����λ�ô���!");
      return -1;
  }
  if(S->length+T->length<=LENGTH)
  {
         //�����Ĳ���
	  for(i=S->length+T->length-1;i>T->length+pos-1;i--)
	  {
		  S->data[i]=S->data[i-T->length];
	  }
	  //ƫ��
	  for(i=0;i<T->length;i++)
	  {
	       S->data[i+pos-1]=T->data[i];
	  }
	  S->length=S->length+T->length;
	  return 1;
  }
  else if(pos+T->length<=LENGTH)//���԰�t���ȥ
  {
		//��s�ַ��ƶ�����β
	  for(i=pos-1;i<T->length;i++)
	  {
		  S->data[i+T->length]=S->data[i];
	  }
	  //ƫ�Ʋ���
	  for(i=0;i<T->length;i++)
	  {
		  S->data[i+pos-1]=T->data[i];
	  }
	  S->length=LENGTH;
	  return 0;
  }
  else//�����԰�t���ȥ
  {
     //�ض��ַ���
	  for(i=0;i<LENGTH-pos;i++)
	  {
		  S->data[i+pos-1]=T->data[i];
	  }
      S->length=LENGTH;
	  return 1;
  }


}

//���
void clear(Pzstring str){
	str->length=0;
}

//ɾ������
int del(Pzstring str,int pos,int length)
{

 int i;
 if(pos<0
	 ||pos+length-1>str->length
	 ||length<0)
 {
    printf("����λ�ò���ȷ!");
	return 0;
 }
 else
 {
     for(i=pos+length;
		 i<str->length-1;
		 i++)
	 {
		 str->data[i-length]=str->data[i];//ɾ���ַ���
	 }
	 str->length=str->length-length;//���ó���
	 return 1;
 }
}


//��дɾ������
int delete_str(Pzstring str,int pos,int len)
{
	int i;
	//�ж�ɾ����λ���Ƿ���ȷ
	if(pos<0||pos+len-1>str->length||len<0)
	{     printf("ɾ����λ�ò���ȷ");
		  return 0;
	}
	else
	{   //��ʼɾ��
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

//�ַ���ƥ��
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
	if(j>=str0->length)//�ҵ��ַ���
	{
		return i-j+1;
	}
	else 
		return 0;
}

//ȡ���ַ���
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