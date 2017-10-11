#include "stdafx.h"
#include <string>
#include "movie.h"
#include "userData.h"
#include "registeredUser.h"
#include <string>
#include <iostream>
using namespace std;
registeredUser::registeredUser(string email, string password)
{
	this->email = email;
	this->password = email;
}
void registeredUser::addmovie(string title, int year, string desc, string genre)
{
}

void registeredUser::adduserData(string name, string address, int creditCard)
{
}
