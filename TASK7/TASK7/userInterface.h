#pragma once
#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <iostream>
#include <deque>
#include <cstdlib>
#include <map>     
#include <string>
#include "Student.h"
using namespace std;

class userInterface
{
private:
	map<long int, Student>::iterator iter;	//iterator 
	map<long int, Student> students;
	int x;							//Hold user input for menu option
	void addStudent();					//Adds student name to end of list
	void delStudent();				//Removes student name from end of list 
	void display();					//Displays the list of students
	void exit();					//Exit program
	void Clear();					//delete the entire list
public:
	userInterface() {} //userInterface(string name, int ID);
	void createList();//Creates the list of student

}; 
#endif