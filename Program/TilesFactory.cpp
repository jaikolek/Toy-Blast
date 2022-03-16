#include "TilesFactory.h"

int change_string(std::string color)
{
	if (color == "Ordinary") return 1;
	if (color == "TNT") return 2;
	if (color == "Rocket") return 3;
	else return 0;
}

Tiles TilesFactory::create_tiles(std::string Color)
{
	Tiles output;
	switch (change_string(Color))
	{
	case 1:
		Output = OrdinaryTiles("Ordinary", 1, 1);
		break;

	case 2:
		break;

	case 3:
		break;

	default:
		std::cout << "ERROR::TILES DOES NOT CREATED" << std::endl;
		break;
	}

	return Output;
}