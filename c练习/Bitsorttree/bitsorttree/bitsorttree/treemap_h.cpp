// treemap_h.cpp : 定义控制台应用程序的入口点。
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

