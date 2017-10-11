#pragma once
#ifndef GAMEBOAD_H
#define GAMEBOARD_H

#include "stdafx.h"
#include "Player.h"
#include "traps.h"
#include "Treasure.h"
#include <vector>
using namespace std;

class gameBoard
{
private:
	int width;
	int height;
	int numOfTraps;
	vector < vector<char> > field; 
	Treasure treasure;
	vector<Trap> traps;


public:
	Player player;

	gameBoard(int x, int y, int trapnum);

	void printField();

	void printTraps();

	Treasure PlaceTreasure();

	void PlayerMove();
	void drawBoard(int level);
	void MovePlayer(char c);
	void hitTrap(int fx, int fy);

};


#endif 
