//_memory.h
//���ߣ������
//ʱ��:2015/8/31
//��Ȩ���� ����ؾ�
//ע�⣺һ�����д��붼�ǲ��� SGI STL ����Ϊԭ��
//�Լ��Ľ��޸ĵ� ���еİ�Ȩ������sgi stl��Ȩ
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
//auto_ptr_ref�ṹ��ֻ��Ϊ�˼�����
//�������ʵ�ʵ�����ָ���ж��ٵİ���

template <class _Tp1>struct auto_ptr_ref
{
	_Tp1* _M_ptr;//ָ�� ��װ
	auto_ptr_ref(_Tp1* __p): _M_ptr(__p) {}//���캯��
};
template <class _tp>
class _auto_ptr_
{
private:
	_tp *_M_Ptr;
public:
	///���캯��0 Ĭ�ϵĹ��캯��
	  typedef _tp element_type;//

	 explicit _auto_ptr_(_tp * pointer=NULL):_M_Ptr(pointer)
	 {
		 //todosomething

	 }
	 _auto_ptr_(_auto_ptr_  &_tem)��_M_Ptr(_tem._release())
	 {
		 //���캯��
	 }
	 _tp * _release()
	 {
		 _tp *_tem=_M_Ptr;
		 _M_Ptr=NULL;//��0
		 return _tem;
	 }
	 //get����
	 _tp * get()const
	 {
		 return _M_Ptr;
	 }
	 //reset
    void reset(_tp * _tem_set_)
	 {   
		 if(_tem_set_!=_M_Ptr)
		 {     delete _M_Ptr;
			  this->��_M_Ptr=_tem_set_;
		 }
	 }
	//��������
	~_auto_ptr_(){delete _M_Ptr;}
	//����*
	_tp& operator *()
	{
		return *_M_Ptr;
	}
	//����->����
	_tp* operator->()
	{
		return _M_Ptr;
	}


public:
};

#endif






