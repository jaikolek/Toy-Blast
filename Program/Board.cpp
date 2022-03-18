#include "Board.h"

Board::Board()
{
	for (int i = 0; i < x_length; i++)
	{
		for (int j = 0; j < y_length; j++)
		{
			if ((j + 1 + i) % 2 == 0)
			{
				tiles[i][j] = tiles_factory.create_tiles("Rocket");
				tiles[i][j]->set_coordinate(i, j);
			}
			else {
				tiles[i][j] = tiles_factory.create_tiles("TNT");
				tiles[i][j]->set_coordinate(i, j);
			}
		}
	}
}

void Board::print_board()
{
	for (int i = 0; i < x_length; i++)
	{
		std::cout << "| ";
		for (int j = 0; j < y_length; j++)
		{
			if (tiles[i][j] != NULL)
				tiles[i][j]->print();
			std::cout << " | ";
		}
		std::cout << std::endl;
	}
}

void Board::use_board(int x, int y)
{
	tiles[x][y]->use();
	tiles[x][y] = NULL;
}