#pragma once
#include <string>
using namespace std;

class userData
{
private:
	string name;
	string address;
	int creditCard;
public:
	userData() {}
	userData(string name, string address, int creditCard);
};