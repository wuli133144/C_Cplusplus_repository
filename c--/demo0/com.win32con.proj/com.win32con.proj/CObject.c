
//copyright (c) .jackwu
//all rights reserved
//���ʱ�䣺2015-10-11
//�ഴ���ļ�

#include "CObject.h"

//��Ǳ���
static int onoff=0;

//�򿪼�¼��־
void data_Loginon()

{
	onoff=1;
}
//��¼��½��ʱ��
void data_Loginout(char * message)

{  
	if(onoff == 1)
	{   
		time_t *_tm=NULL;
		struct tm newtime;

		localtime_s(&newtime,_tm);
		printf("log[%d-%d-%d] %s",newtime.tm_hour,newtime.tm_min,newtime.tm_sec,message);
	}
}

//�ر���־�˳�
void data_Loginoff()
{
	onoff=0;
}
//
static void  returncount(object * _this)
{
	_this->_retainCount++;
}
//�ͷ��ڴ�
static void Releseclsobject(object * _this)
{  
	_this->_retainCount--;//�ͷ��ڴ���
	if(_this->_retainCount >= 0)//��������ڴ����
	{
		_this->onDelloc(_this);
	//	_this->release()
		__Class_Delete_MM(_this);
	}
}
//��ȡobject return count 
static int Getretaincount(object * _this)
{
	return _this->_retainCount;
}
//�ݻ�
static void onDestroyObject(object * _this)
{
	data_Loginout("this object is destroied");
} 
//
object *InitClass(object * _this)
{ 
	_this->_retainCount=1;
	_this->retainCount=&Getretaincount;
	_this->onDelloc=&onDestroyObject;
	_this->release=&Releseclsobject;
	_this->retain=&returncount;
	data_Loginout("inititial");
	return _this;
	
}