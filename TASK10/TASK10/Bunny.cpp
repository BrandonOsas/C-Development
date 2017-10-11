#include "stdafx.h"
#include <time.h>
#include "Bunny.h"

const string Bunny::possibleNames[POSSIBLE_NAMES] = {
	"fredrick", "molly", "luke", "stacy", "bill" };

const string Bunny::possibleColors[POSSIBLE_COLORS] = {
	"white", "brown", "black", "spotted" };

Bunny::Bunny()
{
	srand(time(0));

	setSex();
	setColor();
	setAge();
	setName();
}

void Bunny::setSex()
{
	int randomNumber = 1 + rand() % 2;

	if(randomNumber == 1) 
		sex = 'm'; 
	else
		sex = 'f';
}

char Bunny::getSex()
{
	return sex;
}

void Bunny::setColor()
{
	color = possibleColors[0 + rand() % POSSIBLE_COLORS];
}

string Bunny::getColor() 
{
	return color;
}

void Bunny::setAge()
{
	age = rand() %10;
}

int Bunny::getAge() 
{
	return age;
}

void Bunny::setName()
{
	name = possibleNames[0 + rand() % POSSIBLE_NAMES];
}

string Bunny::getName() 
{
	return name;
}

void Bunny::printBunny() 
{
	cout << "Name: " << getName() << endl;
	cout << "Sex: " << getSex() << endl;
	cout << "Color: " << getColor() << endl;
	cout << "Age: " << getAge() << endl;
}