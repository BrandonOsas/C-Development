#pragma once

#include "stdafx.h"
#include <string>
using namespace std;

class node
{
public:
	char leta;
	int freq;
	string code;
	node *left; 
	node *right;

	node(){}
	node(char leta, int freq, string code, node *left, node*right);
	//~node();
	//int getFreq() { return freq; };
	//char getLeta() { return leta; };
	////string getData() { return data; };
	//node* getLeft() { return left; };
	//node* getRight() { return right; };
};
