#include "stdafx.h"

#include "Treasure.h"

Treasure::Treasure(int x, int y)
{
	x_pos = x;
	y_pos = y;
}

Treasure::Treasure()
{

}

void Treasure::setX_Pos(int newx)
{
	x_pos = newx;
}

void Treasure::setY_Pos(int newy)
{
	y_pos = newy;
}

int Treasure::getX_Pos()
{
	return x_pos;
}

int Treasure::getY_Pos()
{
	return y_pos;
}