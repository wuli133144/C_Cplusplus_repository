#include<stdio.h>
#include <stdlib.h>
int main()
{  
	//判段一个数的二进制数位数为1的位数
	 int  inum;
	 int k,inum1=0;
     int s;
	 int i=0;
	 printf("请输入该数位数inum=");
	 scanf("%d",&inum);
	 printf("\n");
	 k=1<<inum;
	 //输入k其中k为略大于inum的值
	 do 
	 {
		 printf("请输入s=");
		 scanf_s("%d",&s);

     } while((s>k)||(s<0));

	 for(;i<inum;i++)
	 {	   s<<=1;//得到比inum略大的数
           if(s>=k)
		   {
			   inum1++;
			   s-=k;
		   }
	 }

	printf("%d",inum1);
	system("pause");
	return 0;
}