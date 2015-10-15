//copyright (c) .jackwu
//all rights reserved
//���ʱ�䣺2015-10-11
//�ഴ���ļ�

#include "Stringclass.h"

static long GetStringLength(Stringobject *_this)
{
	return _this->__stringlength;
}

static char *GetString(Stringobject * _this)
{
	return _this->__cstr;
}

static Stringobject * addString(Stringobject *_this,char *others)
{
	char *tem=_this->__cstr;
	_this->__stringlength=+strlen(others);
    _this->__cstr=(char *)malloc(sizeof(_this->__stringlength+1));//�㿪��һ���ڴ湩'\0'
	strcat(_this->__cstr,tem);
	strcat(_this->__cstr,others);
	_this->__cstr[_this->__stringlength+1]='\0';
	free(tem);
	tem=NULL;
	return _this;
}

//��ӵ���һ����ʽ
static Stringobject *addstringwith(Stringobject * _this,Stringobject * others)
{
	addString(_this,(__Convert_To_(Stringobject *,others))->getCString(_this));
	return _this;
}

//������͵�����
static Stringobject *addstringWithInt(Stringobject *_this,int value)
{
	char buf[20];
	memset(buf,0,sizeof(buf));
	sprintf(buf,"%d",value);
	addString(_this,buf);
	return _this;
}

//���long������
static Stringobject * addstringWithLong(Stringobject * _this,long value)

{
	char buf[20];
	memset(buf,0,sizeof(buf));
	sprintf(buf,"%f",value);
	addString(_this,buf);
	return _this;
}

//���float����
static Stringobject * addStringWithFloat(Stringobject * _this,float value)

{
	char buf[20];
	memset(buf,0,sizeof(buf));
	sprintf(buf,"%f",value);
	addString(_this,buf);
	return _this;
}

static char  stringobjectGetChar(Stringobject * _this,int index)

{
	//if(!index > _this->__stringlength-1)
	//{
	//	//return NULL;
	//	int flag=0;
	//    for(;index<flag;flag++);
	//	//return (_this->__cstr[index]);
	//	_this->__cstr++;
	//	return _this->__cstr;
	// }
	return _this->__cstr[index];
}

//����
static void onstringobjectDelloc(Stringobject *_this)
{
	data_Loginout("ondestroy");
	if(_this->__cstr != NULL)
	{
		free(_this->__cstr);
		_this->__cstr=NULL;
	}
}

Stringobject * InitclasstringWithString(Stringobject * _this,char * pzstr)
{  
     InitClass(__Convert_To_(object*,_this));
    //config Delloc functions >>>
	_this->onCssObjectDelloc = _this->onDelloc;
	//_this->onDelloc = &cssStringOnDelloc;
    
	//config related c string
	_this->__stringlength=strlen(_this->__cstr);
	_this->__cstr = (char *)malloc(_this->__stringlength+1);
	memset(_this->__cstr,0,_this->__stringlength+1);//��ʼ���ڴ�
	strcpy(_this->__cstr,pzstr);
    _this->__stringlength=strlen(pzstr);
	_this->addInt=&addstringWithInt;
	_this->addLong=&addstringWithLong;
	_this->addCString=&addString;
	_this->addFloat=&addStringWithFloat;
	_this->getCString=&GetString;
	_this->onDelloc=&onstringobjectDelloc;
	_this->getLength=&GetStringLength;
	_this->getChar=&stringobjectGetChar;
	return _this;
}  

  Stringobject * createwithstring(char * str)
{  
	//Stringobject * _this;
	return  InitclasstringWithString(__Class_ALLOC(Stringobject),str);
}


  Stringobject * createstring()
{
	return createwithstring("");
}




