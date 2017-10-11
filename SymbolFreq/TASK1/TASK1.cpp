// TASK1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SymbolFreq.h"

int main()
{
	/*object of the constructor opening the file*/
	symbolFreq* test = new symbolFreq("ToCompress.txt");
	test->buildTab();
	test->PrintFreq();
	delete test;
	system("pause");
	return 0;
}

