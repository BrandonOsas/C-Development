#pragma once
#include <string>
#include "movie.h"
#include "userData.h"
using namespace std;
class registeredUser
{
private:
	string email;
	string password;
	userData usrinfor[100];

public:
	registeredUser(){}
	registeredUser(string email, string password);
	void addmovie(string title, int year, string desc, string genre);
	void adduserData(string name, string address, int creditCard);
};