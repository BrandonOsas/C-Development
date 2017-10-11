// TASK3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "binaryTree.h"
#include <queue>
int main()
{
	priority_queue<node*, vector<node*>, compare> *q = new priority_queue < node*, vector<node*>, compare>;
	binaryTree *bt = new binaryTree;
	/*for the sake of testing assign node*/
	node* n1 = new node{ 'a', 1, NULL, NULL };
	node* n2 = new node{ 'b', 2, NULL, NULL };
	node* n3 = new node{ 'c', 3, NULL, NULL };
	node* n4 = new node{ 'd', 4, NULL, NULL };
	node* n5 = new node{ 'e', 5, NULL, NULL };
	node* n6 = new node{ 'f', 6, NULL, NULL };
	node* n7 = new node{ 'g', 7, NULL, NULL };
	node* n8 = new node{ 'h', 8, NULL, NULL };
	/*start merging the lowest freqs together to get the freq of the new node*/
	node *n9 = new node(NULL, NULL, NULL, NULL);
	n9 = bt->merge(n1, n2);
	node *n10 = new node(NULL, NULL, NULL, NULL);
	n10 = bt->merge(n9, n3);
	node *n11 = new node(NULL, NULL, NULL, NULL);
	n11 = bt->merge(n4, n5);
	node *n12 = new node(NULL, NULL, NULL, NULL);
	n12 = bt->merge(n6, n10);
	node *n13 = new node(NULL, NULL, NULL, NULL);
	n13 = bt->merge(n7, n8);
	node *n14 = new node(NULL, NULL, NULL, NULL);
	n14 = bt->merge(n11, n12);
	node *n15 = new node(NULL, NULL, NULL, NULL);
	n15 = bt->merge(n13, n14);
	cout << "the root node is: " << n15->freq << endl;
	bt->setRootNode(n15);
	bt->printTree(bt->root, 4);
	delete bt;
	cout << endl << endl << "-----------------------------------------" << endl;
	/*push into the queue*/
	q->push(n1);
	q->push(n2);
	q->push(n3);
	q->push(n4);
	q->push(n5);
	q->push(n6);
	q->push(n7);
	q->push(n8);
	q->push(n9);
	q->push(n10);
	q->push(n11);
	q->push(n12);
	q->push(n13);
	q->push(n14);
	q->push(n15);
	for (int i = 0; i < 15; i++)
	{
		cout <<"\t"<< q->top()->freq << endl;
		q->pop();
	}
	delete q;
	system("pause");
	return 0;
}

