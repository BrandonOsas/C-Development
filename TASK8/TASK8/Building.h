#pragma once
#ifndef BUILDING_H
#define BUILDING_H
#include "CarbonFootprint.h"
#include <string>
using namespace std;
class Building:
	public CarbonFootprint
{
public:
	Building(){}
	Building(double avgConsumption);
	//void setavgConsumption(double avgConsumption);
	double getavgConsumption();
	virtual void print();
	virtual double getCarbonFootprint();

protected:
	double avgConsumption;
	int months = 12;
		

};
#endif // !BUILDING_H
