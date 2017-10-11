// TASK8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include "Bicycle.h"
#include "Building.h"
#include "Car.h"
using namespace std;
int main()
{
	Car aCar(70.0);
	Building aBuilding(100.7);
	Bicycle aBicycle(15.0);

	vector<CarbonFootprint*>pointer;
	pointer.push_back(&aCar);
	pointer.push_back(&aBuilding);
	pointer.push_back(&aBicycle);
	for (int i = 0; i < 3; i++)
	{
		pointer[i]->print();
		cout << pointer.at(i)->getCarbonFootprint()<< endl;
	}
	system("pause");
    return 0;
}

