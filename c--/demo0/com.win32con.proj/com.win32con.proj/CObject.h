//文件：coject
//文件名：coject.h
//copyright (c) .jackwu
//all rights reserved
//完成时间：2015-10
//类创建文件

#ifndef  ____COBJECT__COBJECT__H__
#define  ____COBJECT__COBJECT__H__

#ifdef  __cplusplus
  extern "C" {
#endif

#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

 //设置日志的说明文件
	void data_Loginon();
	void data_Loginout();
	void data_Loginoff();



 //创建类的部分核心
#define ____Class(name)   typedef struct name { Class##name(struct name*)}name;                                      
	             
	               
	
//类型强转
#define __Convert_To_(TYPE,OBJECT) ((TYPE)(OBJECT))
//内存分配
#define  __Class_ALLOC(__class_type__) __Convert_To_(__class_type__ *,malloc(sizeof(__class_type__)))
//内存回收
#define  __Class_Delete_MM(__class_object__) free(__class_object__)


	#define Classobject(TYPE) \
    int _retainCount;\
    void (*retain)(TYPE _this);\
    void (*release)(TYPE _this);\
    int (*retainCount)(TYPE _this);\
    void (*onDelloc)(TYPE _this);

//全局的变量
   //__Class(object)
	//__Class()
	____Class(object)//全局变量

   object *InitClass(object * __this);

   #ifdef   __cplusplus
	 }
   #endif 

#endif

//TODO