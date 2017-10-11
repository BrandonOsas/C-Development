#include "stdafx.h"
#include "node.h"
using namespace std;


node::node(char leta, int freq, node *left, node* right)
{
	this->leta = leta;
	this->freq = freq;
	this->left = left;
	this->right = right;
}

//node::~node()
//{
//	if (left != NULL) delete left;
//	if (right != NULL) delete right;
//}