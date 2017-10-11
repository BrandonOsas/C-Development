#include "stdafx.h"
#include "node.h"
using namespace std;


node::node(char leta, int freq, string code, node *left, node* right)
{
	this->leta = leta;
	this->freq = freq;
	this->code = code;
	this->left = left;
	this->right = right;
}

//node::~node()
//{
//	if (left != NULL) delete left;
//	if (right != NULL) delete right;
//}