// TASK4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "huffmanCodeTree.h"

int main()
{	
	symbolFreq *count = new symbolFreq;
	count->getFreq();
	huffmanCodeTree *test = new huffmanCodeTree(count->getFreq());
	

	
	test->printTree(test->root, 8);

	system("pause");
    return 0;
}

