#pragma once
#include <string>
#include "userRating.h"
#include "userComment.h"
using namespace std;



class movie 
{
private:
	string title;
	int year;
	string desc;
	string genre;
	userRating UR[100];
	userComment UC[100];
public:
	movie(string title, int year, string genre);
	void addmovieRating(int vote);
	void addcomment(string comment);
};