#include "OrdinaryTiles.h"

OrdinaryTiles::OrdinaryTiles(std::string Color, int X, int Y)
{
	this->Color = Color;
	this->X = X;
	this->Y = Y;
}

void OrdinaryTiles::set_color(std::string Color)
{
	this->Color = Color;
}

std::string OrdinaryTiles::get_color()
{
	return this->Color;
}

void OrdinaryTiles::set_coordinate(int X, int Y)
{
	this->X = X;
	this->Y = Y;
}