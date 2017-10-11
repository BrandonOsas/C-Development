#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <deque>
#include <cstdlib>
#include <map>     
#include <string>
using namespace std;
class Student
{
private:
			//linkedList is a list of strings
	string name;					//User input name of student
	long int ID;
	int year;
	char gender;
public:
	Student() {}
	Student(string name, long int ID, int year, char gender);
	char getgender();
	long int getID();
	string getName();
	int getYear();
}; // End StudentList class declaration
#endif