#pragma once

#include "stdafx.h"
#include <string>
using namespace std;

class node
{
public:
	char leta;
	int freq;;
	node *left; 
	node *right;

	node(){}
	node(char leta, int freq, node *left, node*right);
};
