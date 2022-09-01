#pragma once
#include "Servant.h"
#include <iostream>
class Knight : public Servant
{
public:
	Knight();
	~Knight();
	void Protect();
	void GetFood();
	void Entertain();
private:

};

Knight::Knight()
{
}

Knight::~Knight()
{
}

 void Knight::Protect()
{
	 std::cout << "Attack with sword\n";
}

 void Knight::GetFood()
{
	 std::cout << "Hunt Boar\n";

}

 void Knight::Entertain()
{
	 std::cout << "Joust\n";

}
