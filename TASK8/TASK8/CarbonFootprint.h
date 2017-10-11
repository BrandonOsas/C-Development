#pragma once
#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H
using namespace std;

class CarbonFootprint
{
public:
	CarbonFootprint(){}
	virtual double getCarbonFootprint() = 0;
	virtual void print() = 0;
};
#endif // !CARBONFOOTPRINT_H


