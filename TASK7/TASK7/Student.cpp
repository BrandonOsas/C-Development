#include "stdafx.h"
#include "Student.h"
#include "userInterface.h"
using namespace std;

Student::Student(string name, long int ID, int year, char gender)
{
	this->name = name;
	this->ID = ID;
	this->year = year;
	this->gender = gender;
}
/*void Student::setDetails(string name, int ID, string year, string gender)
{
	this->ID = ID;
	this->name = name;
	this->year = year;
	this->gender = gender;
}*/
long int Student::getID()
{
	return ID;
}

string Student::getName()
{
	return name;
}

int Student::getYear()
{
	return year;
}

char Student::getgender()
{
	return gender;
}