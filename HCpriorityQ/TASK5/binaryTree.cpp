#include "stdafx.h"
#include "binaryTree.h"
using namespace std;

binaryTree::binaryTree()
{
	root = NULL;
}

binaryTree::~binaryTree()
{

}
void binaryTree::setRootNode(node* leaf)
{
	this->root = leaf;
}

node* binaryTree::merge(node* left, node* right)
{
	int add = left->freq + right->freq;
	node* p = new node(NULL, add, NULL, left, right);
	return p;
}

void binaryTree::printTree(node* root, int indent)
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
