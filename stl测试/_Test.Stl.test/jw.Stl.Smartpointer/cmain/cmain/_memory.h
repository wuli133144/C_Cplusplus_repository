//_memory.h
//作者：吴玉杰
//时间:2015/8/31
//版权所有 翻版必究
//注意：一下所有代码都是参照 SGI STL 代码为原型
//自己改进修改的 所有的版权都接受sgi stl版权
//#include<stl_algobase.h>
//#include<stl_alloc.h>
//#include<stl_construct.h>
//#include<stl_tempbuf.h>
//#include<stl_uninitialized.h>
//#include<stl_raw_storage_iter.h>

#define ____MEMORY___H__
#define ____JW_DEMO_MEMRORY___
# if defined(____MEMORY___H__)&&\
defined(____JW_DEMO_MEMRORY___)

#include "IO.h"
using namespace IO;
//auto_ptr_ref结构体只是为了兼容性
//并不会对实际的智能指针有多少的帮助

template <class _Tp1>struct auto_ptr_ref
{
	_Tp1* _M_ptr;//指针 包装
	auto_ptr_ref(_Tp1* __p): _M_ptr(__p) {}//构造函数
};
template <class _tp>
class _auto_ptr_
{
private:
	_tp *_M_Ptr;
public:
	///构造函数0 默认的构造函数
	  typedef _tp element_type;//

	 explicit _auto_ptr_(_tp * pointer=NULL):_M_Ptr(pointer)
	 {
		 //todosomething

	 }
	 _auto_ptr_(_auto_ptr_  &_tem)：_M_Ptr(_tem._release())
	 {
		 //构造函数
	 }
	 _tp * _release()
	 {
		 _tp *_tem=_M_Ptr;
		 _M_Ptr=NULL;//置0
		 return _tem;
	 }
	 //get函数
	 _tp * get()const
	 {
		 return _M_Ptr;
	 }
	 //reset
    void reset(_tp * _tem_set_)
	 {   
		 if(_tem_set_!=_M_Ptr)
		 {     delete _M_Ptr;
			  this->：_M_Ptr=_tem_set_;
		 }
	 }
	//析构函数
	~_auto_ptr_(){delete _M_Ptr;}
	//重载*
	_tp& operator *()
	{
		return *_M_Ptr;
	}
	//重载->（）
	_tp* operator->()
	{
		return _M_Ptr;
	}


public:
};

#endif






