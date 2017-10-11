// TASK10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Bunny.h"
#include "LinkedList.h"
#include <vector>
using namespace std;

int main()
{
	int i = 0;
	Bunny bunny;
	linkedList aList;

	Bunny *a = new Bunny();  //creating the rabbit
	aList.insert(a);

	while (i < 50) i++;
	Bunny *b = new Bunny();
	aList.insert(b);
	i = 0;

	while (i < 50) i++;
	Bunny *c = new Bunny();
	aList.insert(c);

	bunny.printBunny();

	system("pause");
	return 0;
}
