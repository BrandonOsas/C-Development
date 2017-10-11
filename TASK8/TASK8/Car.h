#pragma once
#ifndef CAR_H
#define CAR_H
#include "CarbonFootprint.h"
#include <string>
using namespace std;


class Car :
	public CarbonFootprint
{
public:
	Car(double miles = 0);
	double getavgmiles();
	virtual void print();
	virtual double getCarbonFootprint();
protected:
	double avgmiles;
};
#endif // !CAR_H