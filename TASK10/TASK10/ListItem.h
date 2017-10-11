#ifndef LISTITEM_H
#define LISTITEM_H
#include "Bunny.h"
class listItem
{
private:
	int dataValue;
	listItem* nextListItem = NULL;
	Bunny* dataValue;
public:
	listItem(Bunny* val, listItem* nextItem);
	void setNext(listItem* listItem);
	listItem* getNext();
	Bunny* getValue();
	void setValue(Bunny* newValue);
};

#endif