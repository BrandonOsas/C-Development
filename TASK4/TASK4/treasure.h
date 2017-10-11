#pragma once
#ifndef __TREASURE_H_
#define __TREASURE_H_

#include "stdafx.h"

class Treasure
{
private:
	int x_pos;
	int y_pos;

public:
	Treasure(int x, int y);
	Treasure();

	void setX_Pos(int newx);
	void setY_Pos(int newy);

	int getX_Pos();
	int getY_Pos();

};


#endif // !__TREASURE_H_