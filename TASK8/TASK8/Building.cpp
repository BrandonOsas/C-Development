#include "stdafx.h"
#include <iostream>
#include "Building.h"
using namespace std;

Building::Building(double avgConsumption)
{
	this->avgConsumption = avgConsumption;
}

double Building::getavgConsumption() 
{
	return avgConsumption;
}

double Building::getCarbonFootprint() 
{
	return avgConsumption * 0.785;
}

void Building::print() 
{
	cout <<"\n\t the carbon Footprint of the building is : ";
}

