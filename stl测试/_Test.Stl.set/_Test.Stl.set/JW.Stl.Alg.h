/*
 creator:�����
 time��2015/9/9
 place:xust
 ��Ȩ�����������漰SGI STL Դ�벿��ȫ������SGL STL�İ�Ȩ����
 ���ಿ�ֱ���ȫ��Ȩ��
*/
#pragma  once
#include"jw.Stl.IO.H"
//����������
template<class _ForwardIter1,class _ForwardItera2,class _TP>

void _swap_iter(_ForwardIter1 *__x,_ForwardIter2 *__y,_TP *)
{
  _TP pvalue=*__x;
  *__x=*__y;
  *__y=pvalue;
}

//����ֵ
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

//��չģ�������
template<class _TP,class _cmp>
_TP _max(const _TP &lhv,const _TP & rhv,_cmp __cmp)
{
 return __cmp(lhv,rhv)?lhv:rhv;
}
//��չģ�������
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
	return __x;//�����Ҳ���ָ����Ԫ�ط���last��������Ҳ����ʹ�ҵ���λ�õ�Ԫ�ط���
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


