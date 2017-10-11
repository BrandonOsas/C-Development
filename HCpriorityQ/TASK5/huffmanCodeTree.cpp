#include "stdafx.h"
#include "huffmanCodeTree.h"
using namespace std;

huffmanCodeTree::huffmanCodeTree(vector<pair<char, int>> *p)
{
	q = new priority_queue<node*, vector<node*>, compare>;
	Freq_inOrder = new vector<pair<char, int>>;
	Freq_inOrder = p;
	buildTree();
	merge();
	buildHuffmanCode(root, "");
}

huffmanCodeTree::~huffmanCodeTree()
{

}
int huffmanCodeTree::buildTree()
{
	symbolFreq *h = new symbolFreq;
	h->loadFile(); 

	vector<pair<char, int>>::iterator iter;

	for (iter = Freq_inOrder->begin(); iter != Freq_inOrder->end(); ++iter)
	{
		node *tn = new node(NULL, NULL, " ", NULL, NULL); 
		tn->leta = iter->first;
		tn->freq = iter->second;
		tn->code = " ";
		tn->left = NULL;
		tn->right = NULL;

		q->push(tn); 
	}
	return 0;
}



node* huffmanCodeTree::merge()
{
	binaryTree* tree = new binaryTree;
	while (q->size() > 1)
	{ 
		node* L = new node;
		node* R = new node;
		node* leaf = new node; 

		L = q->top();
		q->pop();

		R =	q->top();
		q->pop();

		leaf->left = L;
		leaf->right = R;
		leaf->freq = L->freq + R->freq;

		q->push(leaf);
	}

	root = new node;

	root = q->top();
	q->pop();
	tree->setRootNode(root);
	return root;
}

void huffmanCodeTree::printTree(node* root, int indent)
{
	if (root != NULL) {
		if (root->right) {
			printTree(root->right, indent + 4);
		}
		if (indent) {
			cout << setw(indent) << ' ';
		}
		if (root->right)cout << " /\n" << setw(indent) << ' ';
		cout << root->freq << "\n ";
		if (root->left) {
			cout << setw(indent) << ' ' << " \\\n";
			printTree(root->left, indent + 4);
		}
	}
}

void huffmanCodeTree::buildHuffmanCode(node* leaf, string code)
{
	
	if (leaf != NULL)
	{
		if (leaf->left != NULL) //left is 0
		{
			code += '0'; //add 0 if going left
			buildHuffmanCode(leaf->left, code);
		}

		if (leaf->right != NULL)
		{
			code.pop_back(); //pop off last character due to recursion
			code += '1'; //1 for going right

			buildHuffmanCode(leaf->right, code);
		}

		if (leaf->left == NULL && leaf->right == NULL)
		{
			leaf->code = code; //When the end node is reached, set its code to that gathered
			cout <<"\t" << leaf->leta << "\t-\t"  <<leaf->freq << "\t-\t"  <<code << endl;
		}
	}

	return;
}


//void huffmanCodeTree::PrintHuffmanCode()
//{
//	cout << "Frequency Table:" << endl;
//	for  (vector<pair<char, int>>::iterator it = Freq_inOrder->begin();it != Freq_inOrder->end(); ++it)
//	{
//		cout << it->first << "\t-\t" << it->second <<  endl;
//	}
//}
//void huffmanCodeTree::PrintFreq()
//{
//	cout << "Frequency Table:" << endl;
//	for (vector<pair<char, int>>::iterator it = freq.begin();
//		it != Freq_inOrder.end(); ++it)
//	{
//		cout << it->first << "\t-\t" << it->second << endl;
//	}
//}