
/***************************************************

Copyright (C) 2015 - edited by jackwu All Rights Reserved.
-----------------------------------------------------
当前版本 : 1.0
作     者: jackwu
时     间: 2015-06-16 10:06:31
注     释:问题见本目录1.txt

****************************************************/
#include<stdlib.h>
#include<stdio.h>


//分析
//将数与高一位的10000000..进行逻辑&运算就可以得到最高的二进制位

#if 1

long fact(int n)
{
	if (n<0)
	{
		printf("运行出错！");
		exit(NULL);
	}
	if (n<=1)
	{
		return 1;
	}
	if (n>1)
	{
		return n*fact(n-1);//递归的调用
	}
}
int main()
{
  



	int n,k,s,t,i;
	int j=0,init=0,pre=0;
	printf("输入数input n=");//n为取数的位数的大小
	scanf("%d",&n);
	printf("\n");
	k=1<<n; //得到100000...想法奇特n表示移动的位数
	do 
	{
		printf("请输入s=");
		scanf("%d",&s);
		printf("\n");

	} while (s>k||s<0);//s表示要表示的数 s将于k进行对比，求得比k值略小的s值

	t=0;
	for(i=0;i<n;i++)
	{
		s<<=1;//将s左移将最高位的位数漏出来
		if (s>=k)//判断s-k大于等于0如果》=0则最高位数是1 否则0
		{  
			//当前的最高位数是1
			//将最高的值放到最后
			//那么就和倒序的值一样
			t+=(1<<(i-j));//比较好算法，还原十进制数，注意（i_j的值是什么？表示第几位的数的权值数）
			s-=k;//s为去掉最高位剩下的位数
			pre=1;
		}
		else//如果最高位是0则跳过权值进行下一位的判断对比
		{
			if (init==0&&pre==0)
			{
				j++;
            }
		}
		printf("t=%d\d",t);

		
	
	system("pause");
	return 0;


}



#endif