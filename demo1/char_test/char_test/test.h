
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
		_swap(_left,_right);//����
	int _templeft=_left,_tempright=_right;
	int temp;
	temp=_templeft%_tempright;
	while (temp!=0)
	{ 
		_templeft=_tempright;
		_tempright=temp;
		temp=_templeft%_tempright;
	}
	printf("���Ĺ�Լ���ǣ�%d",_tempright);
	printf("��С�Ĺ�������%d",_right*_left/_tempright);
}
//����
//��ʵfun1������fun����˼����һ����ֻ��Ч�ʲ�һ����
int fun1(int a,int b)
{   //�ݹ鷨תշ���
	if(a%b!=0)
		fun1(b,a%b);
	return b;
}
#endif
void test0()
{
	printf_s("������һ����:\n");
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
		printf_s("��������");
	}
	else
		printf_s("������");
	//int m=fun1(3,1);
	//printf("%d",m);
}
