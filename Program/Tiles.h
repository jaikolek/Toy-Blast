#pragma once
#include <iostream>

class Tiles
{
public:
	virtual ~Tiles() = default;
	virtual void set_color(std::string) = 0;
	virtual void print() = 0;
	virtual void use() = 0;
	virtual void set_coordinate(int, int) = 0;
};

