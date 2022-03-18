#pragma once
#include "Tiles.h"
#include <iostream>

class Rocket : public Tiles
{
public:
	Rocket();
	void set_color(std::string);
	//std::string get_color();
	void print();
	void use();
	void set_coordinate(int, int);
	~Rocket() {}

};

