#include "tree.h"

int main()
{   
	//MGraph M;
	//CreateMap(&M);
	//printf_map(M);

	//getch();

	adjlistgraph p;

	Create_Map(&p);
	displayelement(&p);

	printf_s("\n");
	DFSsearch(p,0);
	getchar();
	getchar();
	return 0;
}