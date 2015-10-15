//作者：吴玉杰
//时间：2015/8/30
/*
stl泛型编程的原理
*/

#if 0

#include<cstdlib>
#include <iostream>
#include <vector>
//#include <vector>
using namespace std;


//函数指针 类似于仿函数
int fcmp(const void * _x,const void * _y)
{
	  const int *i0=(const int *)_x;
	  const int *i1=(const int *)_y;
	  if (*i0<*i1)
	  {
		  return  -1;
	  } 
	  else if(*i0==*i1)
	  {
		  return 0; 
	  }
	  else 
		  return 1;
}


//主函数
int main()
{   
	//函数指针调用指定的函数
	int arr[10]={8,7,6,5,4,3,2,9,8,7};
	for(int i=0;i<10;i++)
	{
		cout<<"arr["<<i<<"]"<<arr[i]<<" ";

	}
	//快拍的算
	/*
	 函数指针fcom 虽然可以实现一定的功能但是函数指针的弹性和扩展性都不好
	 函数指针也无法保持自己的状态
	 这时候就不如 仿函数
	 仿函数就是 重载了()的类对象
	*/
	qsort(arr,sizeof(arr)/sizeof(int),sizeof(int),fcmp);
	for(int i=0;i<10;i++)
	{
		cout<<"arr["<<i<<"]"<<arr[i]<<" ";

	}
	system("pause");

	return 0;
}
#endif 

# if 0

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


//重载operator （）
template <class T>
struct puls{
	T operator()(const T& X,const T & Y)//重载了（）
	{
		return (X+Y);
	}
};
template <class T>
struct minus{
	T operator()(const T& X,const T & Y)//重载了（）
	{
		return (X-Y);
	}
};


int main()
{   

	//测试仿函数对象
	puls<int> obj;
	cout<<obj(2,3)<<endl;

	minus <int> obj0;
	cout<<obj0(2,3)<<endl;

	puls <int>()(45,45);//临时对象
		
   cout<<"hello world!";
   system("pause");
   return 0;
}
#endif
#if 0
/*
空间配置器
jw.allocator 的使用
实现allocator 的部分接口
*/
#ifndef  _jw.allocator_ 
#define  _jw.allocator_
#include <new>//place new 
#include <cstddef>// 
#include <cstdlib>//退出
#include <climits>//uint ——max
#include <iostream>//erro


namespace JW
{
	template <class T>
	inline T * _allocator(ptrdiff_t size,T *)
	{
		set_new_handler(0);
		T * tem=(T *)new (::operator new((size_t)sizeof(T)*size));
		if (tem==0)
		{ 
			cerr<<"out of memory"<<endl;
		   exit(0);
		}
		return tem;
	}

	template <class T>
	inline void delallocator(T *t)
	{
		::operator delete t;
		t==NULL;
	}
	template <class T>
	inline _des(T * t)
	{
		t->~T();
	}

	template <class T1,class	T2>
	inline void _constroct(T1 *P,const T2 &value)
	{
		new (p) T1(value);
	}

	template <class T>
	class allocator
	{
	public: 
		typedef T value_type;
		typedef T * pointer;
		typedef const T* const_pointer;
		typedef T & reference;
		typedef  const T &  const_reference;
		typedef size_t  size_type;
		typedef ptrdiff_t difference_type;
		//
		template <class U>
		struct rebind{

			typedef allocator<U> other;
		};
		pointer allocate(size_type n,const void *hint=0)
		{
			return _allocator((difference_type)n,(pointer)0);
		}
		void delallocator(pointer p,size_typen)
		{
			delallocator(p);
		}
		void construct(pointer p,const T &n)
		{
			_constroct(p,value);
		}
		pointer address(reference x)
		{
			return (pointer)&x;
		}
		const_pointer const_address(const_reference x)
		{
			return (const_pointer)&x;
		}
		size_type max_size()const
		{
			return size_type(UINT_MAX/sizeof(T));
		}
	};




}




#endif 
 
#endif
#if 1


#endif