#pragma once
#include "Tiles.h"
#include <iostream>

class TNT : Tiles
{
protected:
	std::string Color;
	int X;
	int Y;

public:
	TNT(std::string, int, int);
	//void set_color(std::string);
	//std::string get_color();
	void set_coordinate(int, int);
	void explode();
};

