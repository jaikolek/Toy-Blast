#pragma once
#include "Tiles.h"
#include <iostream>

class OrdinaryTiles : public Tiles
{
protected:
	std::string Color;
	int X;
	int Y;

public:
	OrdinaryTiles();
	void set_color(std::string);
	void print();
	void use();
	void set_coordinate(int, int);
	~OrdinaryTiles() {}
	//std::string get_color();
};

