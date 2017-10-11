/**---------------------------------------------------
UFCFK4-30-2, TASK3
Class: binaryTree , struct compare

Purpose: implement priority queue using custom 
		 comparator 

Note  : I put all my functions and initialisation
in public so i can access them from any
class in other tasks

Author: Brandon Egonwman

Dtae: 2/3/2017
----------------------------------------------------*/
#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "node.h"
using namespace std;
struct compare
{
	/**-------------------------------------------------
	comparator to set the priority queue in decending
	order
	@param: L
	@param: R
	--------------------------------------------------*/
	bool operator() (node *i, node *j)
	{
		return i->freq > j->freq;
	}
};

class binaryTree
{
private:
	
public:
	/**-------------------------------------------------
	default constructor: initailise root as NULL and is
	used to allocate memory dynamically
	--------------------------------------------------*/
	binaryTree();

	/**-------------------------------------------------
	deconstructor: deletes the dynamically allocated
	memory
	--------------------------------------------------*/
	~binaryTree();

	/**-------------------------------------------------
	merge: Adds the two parameters to create a new node
	@param: *left
	@Param: *right
	--------------------------------------------------*/
	node* merge(node*, node*);

	/**-------------------------------------------------
	setRootNode: Holds the value of the root
	@Param: *parent
	--------------------------------------------------*/
	void setRootNode(node* parent);

	/**-------------------------------------------------
	printTree: builds the tree and display on console
	Note: this Function was gotten from [Stack Overflow]
	and it is fully understood
	@Param: *root
	@Param: indent
	--------------------------------------------------*/
	void printTree(node* root, int indent);

	/**pointer to the node class*/
	node* root;
};
