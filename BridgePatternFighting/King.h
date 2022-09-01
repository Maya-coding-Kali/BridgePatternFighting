#pragma once
#include "Royal.h"
class King : public Royal
{
public:
	King(Servant* servant) : Royal(servant) {};
	~King();
	void DemandProtection() override;
	void DemandFood() override;
	void DemandEntertainment() override;
	void DemandFeast();
	void DemandWar();
private:

};


King::~King()
{
}

inline void King::DemandProtection()
{
	this->_servant->Protect();
}

inline void King::DemandFood()
{
	this->_servant->GetFood();
}

inline void King::DemandEntertainment()
{
	this->_servant->Entertain();
}

inline void King::DemandFeast()
{
	for (int i = 0; i < 4; i++)
	{
		this->_servant->GetFood();
	}
}

inline void King::DemandWar()
{
	for (int i = 0; i < 4; i++)
	{
		this->_servant->Protect();

	}
}
