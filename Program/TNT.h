#pragma once
#include "Tiles.h"
#include <iostream>

class TNT : public Tiles
{
public:
	TNT();
	void set_color(std::string);
	//std::string get_color();
	void set_coordinate(int, int);
	void print();
	void use();
	~TNT() {}
};

