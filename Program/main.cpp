#include "Board.h"

int main()
{
	int x, y;
	Board board;
	char player_option = 'y';

	while (player_option != 'n')
	{
		board.print_board();
		std::cout << std::endl;
		std::cout << std::endl << "Use Tile In Coordinate: ";
		std::cout << std::endl << "[X]: "; std::cin >> x;
		std::cout << "[Y]: "; std::cin >> y;
		std::cout << std::endl;
		board.use_board(x, y);
		std::cout << std::endl;
		board.print_board();
		std::cout << std::endl;
		std::cout << "Wanna Play Again (y/n)? "; std::cin >> player_option;
		std::cout << std::endl;
	}
}
