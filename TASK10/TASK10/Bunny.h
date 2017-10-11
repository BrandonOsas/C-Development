#pragma once
#ifndef BUNNY_H
#define BUNNY_H
#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime> 
using namespace std;

class Bunny
{
	static const int  POSSIBLE_NAMES = 5;
	static const int  POSSIBLE_COLORS = 4;

	static const string possibleNames[POSSIBLE_NAMES];
	static const string possibleColors[POSSIBLE_COLORS];

public:
	Bunny();

	void setSex(void);
	char getSex();

	void setColor(void);
	string getColor();

	void setAge(void);
	int getAge();

	void setName(void);
	string getName();

	void printBunny();

private:
	char sex;
	string color;
	int age;
	string name;

	bool radioactive_mutant_vampire_bunny;
};

#endif 
