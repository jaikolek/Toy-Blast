#include "Rocket.h"

/*Rocket::Rocket(std::string Color, int X, int Y)
{
	this->Color = Color;
	this->X = X;
	this->Y = Y;
}*/

Rocket::Rocket()
{
	Color = "R";
}

void Rocket::set_color(std::string Color)
{
	this->Color = Color;
}

void Rocket::set_coordinate(int X, int Y)
{
	this->X = X;
	this->Y = Y;
}

void Rocket::print()
{
	std::cout << Color;
}

void Rocket::use()
{
	std::cout << "Rocket in " << "[" << X << "]" << " " << "[" << Y << "] Explode";
}