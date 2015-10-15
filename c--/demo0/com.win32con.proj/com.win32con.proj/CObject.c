
//copyright (c) .jackwu
//all rights reserved
//完成时间：2015-10-11
//类创建文件

#include "CObject.h"

//标记变量
static int onoff=0;

//打开记录日志
void data_Loginon()

{
	onoff=1;
}
//记录登陆的时间
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

//关闭日志退出
void data_Loginoff()
{
	onoff=0;
}
//
static void  returncount(object * _this)
{
	_this->_retainCount++;
}
//释放内存
static void Releseclsobject(object * _this)
{  
	_this->_retainCount--;//释放内存标记
	if(_this->_retainCount >= 0)//如果还有内存存在
	{
		_this->onDelloc(_this);
	//	_this->release()
		__Class_Delete_MM(_this);
	}
}
//获取object return count 
static int Getretaincount(object * _this)
{
	return _this->_retainCount;
}
//摧毁
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