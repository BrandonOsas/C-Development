/**---------------------------------------------------
UFCFK4-30-2, TASK2
Class: node

Purpose: to store the values

Note: I could also use Structs

Author: Brandon Egonwman

Dtae: 2/3/2017
----------------------------------------------------*/
#pragma once

#include "stdafx.h"
//using namespace std;

class node
{
public:
	char leta;
	int freq;
	node *left; 
	node *right;
	/** constructor: sets the values*/
	node(char leta, int freq, node *left, node*right);
	
};
