#include "TNT.h"

/*TNT::TNT(std::string Color, int X, int Y)
{
	this->Color = Color;
	this->X = X;
	this->Y = Y;
}*/

TNT::TNT()
{
	Color = "T";
}

void TNT::set_color(std::string Color)
{
	this->Color = Color;
}

void TNT::set_coordinate(int X, int Y)
{
	this->X = X;
	this->Y = Y;
}

void TNT::print()
{
	std::cout << Color;
}

void TNT::use()
{
	std::cout << "TNT in " << "[" << X << "]" << " " << "[" << Y << "] Explode";
}