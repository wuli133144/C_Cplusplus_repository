/*
 creator:吴玉杰
 time:2015/9/9
 place:xust

*/
#include <set>
#include <algorithm>
#include <iterator>
#include <vector>
#include <iostream>
using namespace std;

template<class _T>
struct display
{
	void operator()(const _T &lhv)
	{
		cout<<lhv<<endl;
    }
};
template<class _input_iterator,class _TP,class  _predicate>
int _count_if(_input_iterator &_first,_input_iterator &_last,_predicate _fun,int _n)
{
	for(;_first!=_last;_first++)
	{
		if(_fun(*first))
			++_n;
	}
	return n;
}

template<class _type>
class my_plus:binary_function<_type,_type,_type>
{
	_type operator()(const _type & __x)
	{
		return ++__x;
	}
};
//求最大公约数
template<class elementtype>
elementtype __gcd(elementtype & _x,elementtype & _y)
{ 
	//转辗相除法
	while(_y!=0)
	{
           elementtype _t=_x%_y;
		    _x=_y;
			_y=_t;

	}
	return _x;
}
template<class _type>
class big:unary_function<_type,_type>
{
	public:
	bool operator()(const _type& ele)
	{
		return ele>5?true:false;
	}

};
//testc
int main()
{ 
	int v[]={1,2,3,4,5,6,6,7};
	int v0[]={2,3,4,5,6};
	vector<int>ve(v,v+8);
	vector<int>arr(v0,v0+5);

	random_shuffle(ve.begin(),ve.end());//产生随机数
	copy(ve.begin(),ve.end(),ostream_iterator<int>(cout," "));
 //   //vector<int>::iterator iter1=ve.begin(5);
	////rotate(ve.begin(),,ve.end());
//	sort(ve.begin(),ve.end(),greater<int>());
//	copy(ve.begin(),ve.end(),ostream_iterator<int>(cout," "));
//
//	//lower_bound()
//	    if(binary_search(ve.begin(),ve.end(),4))
//		{
//			cout<<"jack"<<endl;
//		}
//		for_each(ve.begin(),ve.end(),display<int>());
//
//	vector<int>::iterator iter=ve.begin();
//    vector<int>::iterator i=remove_if(ve.begin(),ve.end(),big<int>());
//	//for_each(i.begin(),i.end(),display<int>());
//
//	//generate(ve.begin(),ve.end(),my_plus<int>());
//	if(includes(ve.begin(),ve.end(),arr.begin(),arr.end()))
//	{
//		cout<<"含有"<<endl;
//	}
//	for_each(ve.begin(),ve.end(),display<int>());
//	replace(ve.begin(),ve.end(),2,3);//将2换成了3
//	cout<<*find_if(ve.begin(),ve.end(),bind1st(less<int>(),2));
//
//	for_each(ve.begin(),ve.end(),display<int>());
//	adjacent_find(ve.begin(),ve.end());
//	//vector<int>::iterator iter0=adjacent_find(ve.begin(),ve.end(),bind2nd(greater<int>(),5));
//	//cout<<*iter0;
//	transform(ve.begin(),ve.end(),ostream_iterator<int>(cout," "),bind2nd(plus<int>(),2));
////	size_t len=_count_if(ve.begin(),ve.end(),greater<int>(),0);
//	////cout<<len<<endl;
//	for(int j=0;j<2;j++)
//	cout<<*ve.begin()<<endl;



//	int arr0[6]={1,2,3,4,5,6};
//	int arr1[]={4,5,6,7,8,9};
//	multiset<int>s1(arr1,arr1+6);
//	multiset<int>s0(arr0,arr0+6);
//	for_each(s0.begin(),s0.end(),display<int>());
//	cout<<endl;
//	for_each(s1.begin(),s1.end(),display<int>());
//	cout<<endl;
//	multiset<int>::iterator first=s0.begin();
//	multiset<int>::iterator last=s0.end();
//	multiset<int>::iterator first0=s1.begin();
//	multiset<int>::iterator last0=s1.end();
//
//	cout<<"union of s0 and s1"<<endl;
//	set_union(first,last,first0,last0,ostream_iterator<int>(cout," "));
//
//	cout<<endl;
//
//	first=s1.begin();
//	first0=s0.begin();
//
//	cout<<"intersection of s1 and s2"<<endl;
//	set_intersection(first0,last0,first,last,ostream_iterator<int>(cout," "));
//	cout<<endl;
//
	system("pause");
 return 0;
}
