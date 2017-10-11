#include "stdafx.h"
#include "ListItem.h"

listItem::listItem(Bunny* val, listItem* nextItem)
{
	setValue(val);
	setNext(nextItem);
}

void listItem::setNext(listItem* listItem)
{
	this->nextListItem = listItem;
}

listItem* listItem::getNext()
{
	return this->nextListItem;
}

Bunny* listItem::getValue()
{
	return this->dataValue;
}

void listItem::setValue(Bunny* newVal)
{
	this->dataValue = newVal;
}