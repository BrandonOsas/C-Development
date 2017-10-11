// TASK5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "huffmanCodeTree.h"

int main()
{
	symbolFreq *count = new symbolFreq;
	count->getFreq();
	cout << "\tSymbol \t\tFreuency \tHuffmanCode " << endl;
	huffmanCodeTree *test = new huffmanCodeTree(count->getFreq());
	cout <<"\n\n\n---------------------------------------------\n\n\n" << endl;
	test->printTree(test->root, 4);

	system("pause");
	return 0;
}


