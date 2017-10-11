#include "stdafx.h"
#include "Bicycle.h"

Bicycle::Bicycle(double miles)
{
	this->miles = miles;
}

double Bicycle::getmiles() 
{
	return miles;
}

double Bicycle::getCarbonFootprint() 
{
	return miles * 0;
}

void Bicycle::print() 
{
	cout << "\n\t the carbon Footprint of the bicycle is : ";
}