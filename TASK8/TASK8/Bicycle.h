#pragma once
#ifndef BICYCLE_H
#define BICYCLE_H
#include "CarbonFootprint.h"
#include <string>
using namespace std;


class Bicycle :
	public CarbonFootprint
{
public:
	Bicycle(double miles = 0);
	double getmiles();
	virtual void print();
	virtual double getCarbonFootprint();

protected:
	double miles;
};
#endif // !BICYCLE_H

