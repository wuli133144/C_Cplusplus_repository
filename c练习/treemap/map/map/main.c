#include "map.h"

int main()
{   

	MatrixGraph p;

	int i,j;

	printf("生成邻接矩阵的类型(0,有向图,1，无向图)\n");
	fflush(stdin);
	scanf("%d",&p.Graphtype);//输入类型

	printf("输入定点数和边数:");

	fflush(stdin);
	scanf_s("%d@%d",&p.verNum,&p.edgenum);

	for(i=0;i<p.verNum;i++)
		for(j=0;j<p.verNum;j++)
		{
	           p.edge[i][j]=infinity;
		}
	Createmap(&p);
	printf_s("邻接矩阵\n");
	outnumber(&p);
	getchar();
	getchar();

	return 0;
}