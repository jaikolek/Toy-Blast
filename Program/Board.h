#pragma once
#include "TilesFactory.h"
#define x_length 5
#define y_length 5

class Board
{
protected:
	Tiles* tiles[x_length][y_length];
	TilesFactory tiles_factory;


public:
	Board();
	void print_board();
	void use_board(int, int);
};

