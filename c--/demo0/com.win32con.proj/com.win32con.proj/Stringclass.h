//文件：Stringclass.h
//文件名：coject.h
//copyright (c) .jackwu
//all rights reserved
//完成时间：2015-10
//类创建文件

#ifndef  ____COBJECT__STRINGCLASS__H__
#define  ____COBJECT__STRINGCLASS__H__

#include "CObject.h"//基类

#ifdef __cplusplus
  extern "C" {
#endif



#define ClassStringobject(TYPE) \
	    Classobject(TYPE)\
		long __stringlength; \
        char * __cstr; \
		void(*onCssObjectDelloc)(TYPE _this); \
		long (*getLength)(TYPE _this); \
		char*(*getCString)(TYPE _this); \
		TYPE (*addCssString)(TYPE _this,TYPE _other); \
		TYPE (*addCString)(TYPE _this,char * _other); \
		TYPE (*addInt)(TYPE _this,int value); \
		TYPE (*addLong)(TYPE _this,long value); \
		TYPE (*addFloat)(TYPE _this,float value); \
		char (*getChar)(TYPE _this,int index);


	  ____Class(Stringobject)

      Stringobject * InitclasstringWithString(Stringobject str,char * pzstr);
	  Stringobject * createwithstring(char * str);
	  Stringobject * createstring();



	  #ifdef  __cplusplus 
	         }
      #endif

#endif