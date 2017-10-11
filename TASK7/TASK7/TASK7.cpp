#include "stdafx.h"
#include "Student.h"
#include "userInterface.h"
using namespace std;

//small Main driver program that creates a registration object, which is used to access createList
int main()
{
	userInterface registration;
	registration.createList();

	system("pause");
	return 0;
}