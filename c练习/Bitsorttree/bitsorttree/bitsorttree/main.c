#include <stdlib.h>
#include <stdio.h>
#include "BitSortTree.h"

int main(int argc, char* argv[])
{  
	//printf_s("jakc");
	//m_bittree tree;
	m_bittree tree;
	CreateBitTree(&tree,source,7);
	traverse(&tree);

	search(&tree,2);
	getchar();
	return 0;
}

