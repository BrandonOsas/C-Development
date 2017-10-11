/**---------------------------------------------------
UFCFK4-30-2, TASK4
Class: huffmanCodeTree

Purpose: generates compressed series of huffmancodes
		 using vector of pairs of char, int

Note  : I put all my functions and initialisation
		in public so i can access them from any
		class in other tasks

Author: Brandon Egonwman

Dtae: 2/3/2017
----------------------------------------------------*/
#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <queue>
#include "node.h"
#include "symbolFreq.h"
#include "binaryTree.h"



struct compare
{
	bool operator() (node *i, node *j)
	{
		return i->freq > j->freq;
	}
};

class huffmanCodeTree
{
public:
	vector<pair<char, int>> *Freq_inOrder;
	priority_queue<node*, vector<node*>, compare> *q;
	node* root;
	huffmanCodeTree(){}
	
	huffmanCodeTree(vector<pair<char, int>>* p);

	~huffmanCodeTree();
	int buildTree();
	node* merge();
	void printTree(node* root, int indent);

};