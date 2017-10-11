#include "stdafx.h"
#include <iostream>
#include <random>
#include <vector>
#include <conio.h>
#include "gameBoard.h"
using namespace std;
gameBoard::gameBoard(int x, int y, int trpnum)
{
	width = x;
	height = y;

	numOfTraps = trpnum;

	for (int rows = 0; rows < height; rows++)
	{
		field.push_back(vector<char>()); //generates rows
	}

	for (int columns = 0; columns < width; ++columns)
	{
		for (int rows = 0; rows < height; ++rows)
		{
			field[rows].push_back('.'); // Adds columns to all rows
		}
	}

	for (int i = 0; i < numOfTraps; ++i)
	{
		Trap temptrap;

		traps.push_back(temptrap);
	}

	printField();
}

void gameBoard::printField()
{
	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width; ++j)
		{
			field[i][j] = '.';
		}
	}

	printTraps();
	for (int trp = 0; trp < numOfTraps - 1; ++trp) //place traps
	{
		field[traps[trp].getYPos()][traps[trp].getXPos()] = 'T';
	}


	treasure = PlaceTreasure();
	field[treasure.getY_Pos()][treasure.getX_Pos()] = 'X';

	field[player.getYPos()][player.getXPos()] = '@';
}

void gameBoard::printTraps()
{
	for (int i = 0; i < numOfTraps - 1; ++i)
	{
		int x, y;

		do
		{
			x = rand() % width - 1;
			y = rand() % height - 1;

		} while ((x <= 0) || (y <= 0) || ((x == player.getXPos()) && (y == player.getYPos())));

		traps[i].setXPos(x);
		traps[i].setYPos(y);
	}
}

Treasure gameBoard::PlaceTreasure()
{
	int x, y;

	do
	{
		x = rand() % width - 1;
		y = rand() % height - 1;

	} while ((x <= 0) || (y <= 0) || ((x == player.getXPos()) && (y == player.getYPos())));

	Treasure temptreas(x, y);

	return temptreas;
}

void gameBoard::PlayerMove()
{
	int level = 1;
	int fx = player.getXPos(), fy = player.getYPos();
	char command;

	drawBoard(level);

	command = _getch();

	MovePlayer(command);

	if (field[player.getYPos()][player.getXPos()] == 'T') //Trap
	{
		hitTrap(fx, fy);
	}
	else if (field[player.getYPos()][player.getXPos()] == 'X') //Treasure
	{
		//IncreaseScore NextLevel
		system("cls");
		cout << "Congratulations! You got the treasure! Level: " << ++level << endl;

		system("pause");
		printField();
		field[fy][fx] = '.';
	}
	else
	{
		field[fy][fx] = '.';
		field[player.getYPos()][player.getXPos()] = '@';
	}
}

void gameBoard::drawBoard(int level)
{
	system("cls");

	cout << "Name: " << player.getName() << " Level: " << level << " Score: " << player.getScore() << " HighScore: " << player.getHScore() << endl;

	for (int columns = 0; columns < width; ++columns)
	{
		for (int rows = 0; rows < height; ++rows)
		{
			cout << field[rows][columns];
		}

		cout << endl;
	}

	cout << "Press 'P' to quit!" << endl;
}

void gameBoard::hitTrap(int fx, int fy)
{
	player.setLiving(0);

	cout << "You died! Your score was: " << player.getScore() << " With your current best run being: " << player.getHScore() << endl;
	system("pause");

	player.setScore(0);
	player.setXPos(0);
	player.setYPos(0);

	printField();
	field[fy][fx] = '.';
}

void gameBoard::MovePlayer(char c)
{
	int temp;

	switch (c)
	{
	case 'w':
	case 'W':
		temp = player.moveNorth();

		if (temp < 0)
		{
			player.setXPos(width - 1);
		}
		break;
	case 'a':
	case 'A':
		temp = player.moveWest();

		if (temp < 0)
		{
			player.setYPos(height - 1);
		}
		break;
	case 's':
	case 'S':
		temp = player.moveSouth();

		if (temp >= width)
		{
			player.setXPos(0);
		}
		break;
	case 'd':
	case 'D':
		temp = player.moveEast();

		if (temp >= height)
		{
			player.setYPos(0);
		}
		break;
	case 'q':
	case 'Q':
		cout << "Thanks for playing!" << endl;
		system("pause");
		exit(0);

		break;
	default:
		break;
	}


}
