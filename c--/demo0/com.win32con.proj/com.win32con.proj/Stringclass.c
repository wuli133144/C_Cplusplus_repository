//copyright (c) .jackwu
//all rights reserved
//完成时间：2015-10-11
//类创建文件

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
    _this->__cstr=(char *)malloc(sizeof(_this->__stringlength+1));//躲开辟一个内存供'\0'
	strcat(_this->__cstr,tem);
	strcat(_this->__cstr,others);
	_this->__cstr[_this->__stringlength+1]='\0';
	free(tem);
	tem=NULL;
	return _this;
}

//添加的另一种形式
static Stringobject *addstringwith(Stringobject * _this,Stringobject * others)
{
	addString(_this,(__Convert_To_(Stringobject *,others))->getCString(_this));
	return _this;
}

//填加整型的数据
static Stringobject *addstringWithInt(Stringobject *_this,int value)
{
	char buf[20];
	memset(buf,0,sizeof(buf));
	sprintf(buf,"%d",value);
	addString(_this,buf);
	return _this;
}

//添加long型数据
static Stringobject * addstringWithLong(Stringobject * _this,long value)

{
	char buf[20];
	memset(buf,0,sizeof(buf));
	sprintf(buf,"%f",value);
	addString(_this,buf);
	return _this;
}

//添加float数据
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

//销毁
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
	memset(_this->__cstr,0,_this->__stringlength+1);//初始化内存
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




