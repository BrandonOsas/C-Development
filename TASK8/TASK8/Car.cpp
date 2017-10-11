#include "stdafx.h"
#include "Car.h"
using namespace std;

Car::Car(double miles)
{
	this->avgmiles = miles;
}

double Car::getavgmiles() 
{
	return avgmiles;
}

double Car::getCarbonFootprint() 
{
	return avgmiles * 0.785;
}

void Car::print() 
{
	cout << "\n\t the carbon Footprint of the car is : ";
}
