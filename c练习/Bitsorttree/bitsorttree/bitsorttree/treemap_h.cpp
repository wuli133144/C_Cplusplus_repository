// treemap_h.cpp : �������̨Ӧ�ó������ڵ㡣
//

//#include "stdafx.h"
//#include""

#include <stdlib.h>
#include <stdio.h>
#include "BitSortTree.h"

int main(int argc, char* argv[])
{  
	//printf_s("jakc");
	//m_bittree tree;
	pzbittree tree;
	createbittree(&tree,source,7);
	traverse(tree);
	getchar();
	return 0;
}

