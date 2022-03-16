#include "Rocket.h"

Rocket::Rocket(std::string Color, int X, int Y)
{
	this->Color = Color;
	this->X = X;
	this->Y = Y;
}

void Rocket::set_coordinate(int X, int Y)
{
	this->X = X;
	this->Y = Y;
}

void Rocket::explode()
{
	std::cout << "Rocket is Exploded" << std::endl;
}