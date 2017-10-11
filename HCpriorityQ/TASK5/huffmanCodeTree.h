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
	string code;
	//ifstream inFile;
	vector<pair<char, int>> *Freq_inOrder;
	priority_queue<node*, vector<node*>, compare> *q;
	node* root;
	//huffmanCodeTree();
	
	huffmanCodeTree(vector<pair<char, int>>* p);

	~huffmanCodeTree();
	int buildTree();
	node* merge();
	void printTree(node* root, int indent);
	void buildHuffmanCode(node* root, string code);
	void PrintHuffmanCode();

};