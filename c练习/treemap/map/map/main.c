#include "map.h"

int main()
{   

	MatrixGraph p;

	int i,j;

	printf("�����ڽӾ��������(0,����ͼ,1������ͼ)\n");
	fflush(stdin);
	scanf("%d",&p.Graphtype);//��������

	printf("���붨�����ͱ���:");

	fflush(stdin);
	scanf_s("%d@%d",&p.verNum,&p.edgenum);

	for(i=0;i<p.verNum;i++)
		for(j=0;j<p.verNum;j++)
		{
	           p.edge[i][j]=infinity;
		}
	Createmap(&p);
	printf_s("�ڽӾ���\n");
	outnumber(&p);
	getchar();
	getchar();

	return 0;
}