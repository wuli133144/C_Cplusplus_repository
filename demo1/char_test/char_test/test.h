
#if 0
void  _swap(int _left,int _right)
{   int temp;
if (_left<_right)
{
	temp=_left;
	_left=_right;
	_right=temp;
}
}
void  fun(int _left,int _right)
{
	if (_left<_right)
		_swap(_left,_right);//交换
	int _templeft=_left,_tempright=_right;
	int temp;
	temp=_templeft%_tempright;
	while (temp!=0)
	{ 
		_templeft=_tempright;
		_tempright=temp;
		temp=_templeft%_tempright;
	}
	printf("最大的公约数是：%d",_tempright);
	printf("最小的公倍数：%d",_right*_left/_tempright);
}
//分析
//其实fun1（）和fun（）思想是一样的只是效率不一样了
int fun1(int a,int b)
{   //递归法转辗相除
	if(a%b!=0)
		fun1(b,a%b);
	return b;
}
#endif
void test0()
{
	printf_s("请输入一个数:\n");
	float m;
	assert(m);

	scanf_s("%d",&m);
	int i=2;
	for (;i<sqrt(m);i++)
	{
		if((int)m%i++!=0)
			continue;
	}
	if (i>=sqrt(m))
	{
		printf_s("不是素数");
	}
	else
		printf_s("是素数");
	//int m=fun1(3,1);
	//printf("%d",m);
}
