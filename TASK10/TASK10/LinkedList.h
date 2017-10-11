#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "ListItem.h"
#include "Bunny.h"
class linkedList
{
private:
	listItem* head;

public:
	linkedList();
	~linkedList();

	void insert(Bunny* val);
	bool remove(Bunny* val);
};

#endif