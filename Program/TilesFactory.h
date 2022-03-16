#pragma once
#include "Tiles.h"
#include "OrdinaryTiles.h"
#include "Rocket.h"
#include "TNT.h"
#include <iostream>

class TilesFactory
{
public:
	Tiles create_tiles(std::string);
};

