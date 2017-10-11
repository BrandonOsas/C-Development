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
		node *tn = new node(NULL, NULL, NULL, NULL); 
		tn->leta = iter->first;
		tn->freq = iter->second;
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
