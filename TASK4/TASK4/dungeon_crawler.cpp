#include "stdafx.h"
#include "stdlib.h"
#include <ctime>
#include <random>
#include <iostream>
#include <cstdlib>
#include "time.h"
#include "gameBoard.h"
#include "player.h"
using namespace std;

#define x 6
#define y 20
#define trapnum 7

using namespace std;
void play(gameBoard gameBoard);

int main()
{
	srand(time(NULL));
	string name;

	gameBoard gameBoard(x, y, trapnum);

	cout << "Please enter your name: ";
	cin >> name;
	gameBoard.player.SetName(name);
	play(gameBoard);

	return 0;
}
void play(gameBoard gameBoard)
{
	while (1)
	{
		gameBoard.PlayerMove();
	}
}