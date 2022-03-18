#include "TilesFactory.h"

/*int change_string(std::string color)
{
	if (color == "Ordinary") return 1;
	if (color == "TNT") return 2;
	if (color == "Rocket") return 3;
	else return 0;
}*/

Tiles* TilesFactory::create_tiles(std::string Color)
{
	if (Color == "Ordinary")
	{
		return new OrdinaryTiles();
	}
	else if (Color == "TNT")
	{
		return new TNT();
	}
	else if (Color == "Rocket")
	{
		return new Rocket();
	}
}