#include<stdio.h>
#include <stdlib.h>
int main()
{  
	//�ж�һ�����Ķ�������λ��Ϊ1��λ��
	 int  inum;
	 int k,inum1=0;
     int s;
	 int i=0;
	 printf("���������λ��inum=");
	 scanf("%d",&inum);
	 printf("\n");
	 k=1<<inum;
	 //����k����kΪ�Դ���inum��ֵ
	 do 
	 {
		 printf("������s=");
		 scanf_s("%d",&s);

     } while((s>k)||(s<0));

	 for(;i<inum;i++)
	 {	   s<<=1;//�õ���inum�Դ����
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