#include"IO.h"
#if 1
 /*
 测试vector原理和内存的管理

 */
#include<vector>
#include<algorithm>

using namespace IO;
using namespace std;
int main()
{   
	int a[]={1,4,5,6,7,2,3,4};
	//vector<int> arr;
	vector<int> arr(a,a+8);

	vector<int> iv(2,8);
	cout<<"size is"<<iv.size()<<endl;//输出2
	cout<<"the capaticty"<<iv.capacity()<<endl;//输出2
	iv.push_back(8);
	cout<<"size is"<<iv.size()<<endl;//输出2
	cout<<"the capaticty"<<iv.capacity()<<endl;//输出2
	iv.push_back(8);
	cout<<"size is"<<iv.size()<<endl;//输出2
	cout<<"the capaticty"<<iv.capacity()<<endl;//输出2
 



	cout<<"jakc"<<endl;
	system("pause");
	return 0;
}

#endif