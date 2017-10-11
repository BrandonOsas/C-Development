#include "stdafx.h"
#include <conio.h>
#include "Student.h"
#include "userInterface.h"
using namespace std;
map<int, Student> student;
void userInterface::addStudent()
{
	string name;
	long int ID;
	int year;
	char gender;

	system("cls");
	cout << "Please Enter your name:";
	cin >> name;
	
	cout << "please enter your ID:";
	cin >> ID;
	
	cout << "what year are you in:";
	cin >> year;
	
	cout << "gender :";
	cin >> gender;

	Student s(name, ID, year, gender);
	students[ID] = s;
}

void userInterface::delStudent()
{
	long int ID;
	//map<int, Student> student;
	system("cls");
	cout << "\n\tEnter the ID of student to remove: ";
	cin >> ID;
	students.erase(ID);
	system("cls");
	//cout << "\n\t" << student << " was removed from the list.";
}

void userInterface::Clear()
{
	//map<int, Student> student;
	students.clear();
}
void userInterface::display()
{
	system("cls");
	cout << "\n\n\t+------------------------------------------------------------+";
	cout << "\n\t|               List of Students in csi 2016             ";
	cout << "\n\t+------------------------------------------------------------+";
	cout << "\n\t                                                            ";

	for (iter = students.begin(); iter != students.end(); iter++)
	{
		//Display the value (student name) that the memory location of iter points to
		cout << "\n\t Student name: " << iter->second.getName()<< "\t|";
		cout << "\tStudent ID: " << iter->second.getID()<< "\t|";
		cout << "\t School year: " << iter->second.getYear()<< "\t|";
		cout << "\t gender: " << iter->second.getgender()<< "\t|";
		cout << "\n\t                                                            ";
	}
	cout << "\n\n\t+------------------------------------------------------------+\n\t";
	cin.get();
	cout << "\a";

}
void userInterface::exit()
{
	//clear screen of menu to display exit message
		system("cls");
	cout << "\n\tGood Bye\n\n\t";
}
void userInterface::createList()
{
	students[123456] = Student("dave", 123456, 2010, 'm');
	string student = "";
	int x = 0;
	while (x < 5) // Valid Menu options available range from 1 - 5
	{
		cout << "\a";
		cout << "\n\n\t+------------------------------------------------------------+";
		cout << "\n\t|            course Registration for csi 2016				  ";
		cout << "\n\t+------------------------------------------------------------+";
		cout << "\n\t|                                                            ";
		cout << "\n\t| 1. ADD student to the list			                      ";
		cout << "\n\t| 2. DELETE student from the list					          ";
		cout << "\n\t| 3. DISPLAY the list of students			                  ";
		cout << "\n\t| 4. CLEAR the list										  ";
		cout << "\n\t| 5. EXIT								                      ";
		cout << "\n\t|        Type 1-4 to continue or Type 5 to Quit  . . .       ";
		cout << "\n\t+------------------------------------------------------------+\n\t";

		cin >> x;  //User input for menu selection
		if (x == 1)			//Option 1 to Add student
		{
			addStudent();

			cout << "\tstudent has been added" << endl;
		}
		else if (x == 2)	//Option 2 to delete student
		{
			delStudent();

			cout << "\tstudent has been deleted" << endl;
		}
		else if (x == 3)	//Option 3 to print list
			display();

		else if (x == 4)	//Option 4 to clear list
		{
			Clear();

			cout << "\tlist has been cleared" << endl;
		}
		else if (x == 5)	//Option 5 to exit
			exit();


		// determine if integer input is outside of 1-5 range, allowing user to re-enter menu option
		else if (x > 5 || x < 0)
		{
			system("cls");
			cout << "\n\t\aError: " << x << " is not a menu option. Try again";
			x = 0;
		}

		//trailing else statement to terminate the program if menu input is not integer  
		else
		{
			system("cls");
			cout << "\n\t\aError: Invalid Input. Exiting program.\n\n\t";
			break;
		}

	}

}
