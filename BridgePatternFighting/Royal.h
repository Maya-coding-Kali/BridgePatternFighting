#pragma once
#include "Servant.h"
class Royal
{
protected:
	Servant* _servant;
public:
	
	Royal(Servant* servant) : _servant(servant) {};
	/*virtual ~Royal() = 0;*/
	virtual void DemandProtection() = 0;
	virtual void DemandFood() = 0;
	virtual void DemandEntertainment() = 0;
private:

};

