#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "node.h"
#include "symbolFreq.h"
using namespace std;
class binaryTree
{
private:
	
public:
	binaryTree();
	~binaryTree();
	node* merge(node* , node*);
	void setRootNode(node* leaf);
	void printTree(node* root,int indent);
	node* root;
	//void displayTree(ostream & out) { printTree(out, root, 0); }
};
