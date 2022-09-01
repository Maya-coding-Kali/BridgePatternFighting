#pragma once
#include "Servant.h"
#include <iostream>
class Farmer : public Servant
{
public:
	Farmer();
	~Farmer();
	void Protect();
	void GetFood();
	void Entertain();
private:

};

Farmer::Farmer()
{
}

Farmer::~Farmer()
{
}

void Farmer::Protect()
{
	std::cout << "Attack with PitchFork\n";
}

void Farmer::GetFood()
{
	std::cout << "Harvest Crops\n";

}

void Farmer::Entertain()
{
	std::cout << "Beg for mercy\n";

}
