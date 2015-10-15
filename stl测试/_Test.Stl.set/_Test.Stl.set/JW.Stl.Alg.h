/*
 creator:吴玉杰
 time：2015/9/9
 place:xust
 版权声明：所有涉及SGI STL 源码部分全部接受SGL STL的版权声明
 其余部分保留全部权利
*/
#pragma  once
#include"jw.Stl.IO.H"
//交换迭代器
template<class _ForwardIter1,class _ForwardItera2,class _TP>

void _swap_iter(_ForwardIter1 *__x,_ForwardIter2 *__y,_TP *)
{
  _TP pvalue=*__x;
  *__x=*__y;
  *__y=pvalue;
}

//交换值
template<class _TP>
void  my_swap(_TP *lhv,_TP *rhv)
{
 _TP tem=*lhv;
 *lhv=*rhv;
 *rhv=tem;
}

#ifndef ___MAX___MIN__
#undef  min
#undef  max
template<class _TP>
_TP _max(_TP &lhv,_TP & rhv)
{
  return lhv>rhv?lhv:rhv;
}

template<class _TP>
_TP _min(_TP &lhv,_TP & rhv)
{
	return lhv>rhv?rhv:lhv;
}

//扩展模板的类型
template<class _TP,class _cmp>
_TP _max(const _TP &lhv,const _TP & rhv,_cmp __cmp)
{
 return __cmp(lhv,rhv)?lhv:rhv;
}
//扩展模板的类型
template<class _TP,class _cmp>
_TP _min(const _TP &lhv,const & rhv,_cmp __cmp)
{
	return __cmp(lhv,rhv)?lhv,rhv;

}

template<class _input_iterator,class _TP>
input_iterator _find(_input_iterator &__x,_input_iterator&__y,const _TP &__value,input_iterator_tag)
{
	while(__x!=__y&&*__x!=__value)
		__x++;
	return __x;//可能找不到指定的元素返回last迭代器。也可能使找到了位置的元素返回
}
template<class _inputitertor,class _TP>
void _replace(_inputitertor & _first,_inputiterator & _last,const _TP & newvalue,const _TP & oldvalue)
{
	for(;_first!=_last;_first++)
		if(*_first==oldvalue)
			oldvalue=newvalue;
}


template <class _BidirectionalIter, class _OutputIter>
_OutputIter reverse_copy(_BidirectionalIter __first,
	_BidirectionalIter __last,
	_OutputIter __result) {
		while(__first!=__last)
		{   
			__last--;
			*__result=*__last;
			__result++;
		}
		return __result;
}

template<class _Forwarditerator,class _type,class outputiterator>
void _replace_copy(_Forwarditerator first,
			_Forwarditerator last,
			const _type &__x,
			const _type & __y,
			outputiterator result)
{
	for(;first!=last;++first,++last)
	{
		*result=*first==__y?__x:*first;
	}
	return result;
}

template<class _Forwarditerator,class _type,class outputiterator,class _fun>
void _replace_copy_if(_Forwarditerator first,
	_Forwarditerator last,
	const _type &__x,
	const _type & __y,
	outputiterator result,
	_fun pre
	)
{
	for(;first!=last;++first,++last)
	{
		//*result=*first==__y?__x:*first;
		if(pre(*first)) *first=__y;
	}
	return result;
}


