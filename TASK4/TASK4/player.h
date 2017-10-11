#pragma once
#ifndef __PLAYER_H_
#define __PLAYER_H_

#include "stdafx.h"
#include <string>
using namespace std;
class Player
{
private:
	int xpos = 0;
	int ypos = 0;

	string name;
	int score = 0;
	int highscore = 0;
	bool alive = 1;

public:
	Player();
	int moveNorth();
	int moveEast();
	int moveSouth();
	int moveWest();

	//Getters and setters
	void SetName(string s);
	void setScore(int n);
	void setLiving(bool b);

	void setXPos(int newx);
	void setYPos(int newy);

	int getXPos();
	int getYPos();

	string getName();
	int getScore();
	int getHScore();
	bool getLiving();

};



#endif 