#include "TNT.h"

TNT::TNT(std::string Color, int X, int Y)
{
	this->Color = Color;
	this->X = X;
	this->Y = Y;
}

void TNT::set_coordinate(int X, int Y)
{
	this->X = X;
	this->Y = Y;
}

void TNT::explode()
{
	std::cout << "TNT is Exploded" << std::endl;
}