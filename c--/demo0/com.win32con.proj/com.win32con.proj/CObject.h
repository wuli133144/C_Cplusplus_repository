//�ļ���coject
//�ļ�����coject.h
//copyright (c) .jackwu
//all rights reserved
//���ʱ�䣺2015-10
//�ഴ���ļ�

#ifndef  ____COBJECT__COBJECT__H__
#define  ____COBJECT__COBJECT__H__

#ifdef  __cplusplus
  extern "C" {
#endif

#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

 //������־��˵���ļ�
	void data_Loginon();
	void data_Loginout();
	void data_Loginoff();



 //������Ĳ��ֺ���
#define ____Class(name)   typedef struct name { Class##name(struct name*)}name;                                      
	             
	               
	
//����ǿת
#define __Convert_To_(TYPE,OBJECT) ((TYPE)(OBJECT))
//�ڴ����
#define  __Class_ALLOC(__class_type__) __Convert_To_(__class_type__ *,malloc(sizeof(__class_type__)))
//�ڴ����
#define  __Class_Delete_MM(__class_object__) free(__class_object__)


	#define Classobject(TYPE) \
    int _retainCount;\
    void (*retain)(TYPE _this);\
    void (*release)(TYPE _this);\
    int (*retainCount)(TYPE _this);\
    void (*onDelloc)(TYPE _this);

//ȫ�ֵı���
   //__Class(object)
	//__Class()
	____Class(object)//ȫ�ֱ���

   object *InitClass(object * __this);

   #ifdef   __cplusplus
	 }
   #endif 

#endif

//TODO