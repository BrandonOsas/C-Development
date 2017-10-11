#pragma once
#include <string>
#include "registeredUser.h"
using namespace std;


class theater
{
private:
	string address;
	registeredUser reguser[100];

public:
	theater() {}
	theater(string address);
	void registerUser(string email, string password);
};

