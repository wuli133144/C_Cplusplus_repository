#include <iostream>
using namespace std;

template<class  _type>
void swap(_type &__x,_type & __y)//引用传递
{
 _type tem;
 tem=__x;
 __x=__y;
 __y=tem;
}


//模板的简单排序选择排序
template<class _type>
void _sort( _tppe & __x[],int _n)
{
 int i,j,k;
 for(i=0;i<_n-1;i++)//控制排序的趟数
 {
  k=i;
  for(j=i+1;j<_n;j++)
  {
    if(__x[j]>__x[k])
		k=j;
  }
  if(i!=k)
  {
            _type tem;
			tem=__x[i];
			__x[i]=__x[k];
			__x[k]=tem;

  }
 }
}

//默认选择排序
template<class _type>
void _sort(_type *arr,int index)
{
 int i,k,j;
 for(i=0;i<index-1;i++)
 {
	 k=i;
	 for(j=i+1;j<index;j++)
	 {
		 //记录最大值的索引位置
		 if(*(arr+j)>*(arr+k))
		 k=j;
	 }
	 if(k!=i)
	 {
		 _type a;
		 a=*(arr+k);
		 *(arr+k)=*(arr+i);
		 *(arr+i)=a;	
	 }
 }
}