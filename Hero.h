#pragma once
#include "Unit.h"
class Hero :
	public Unit
{

protected:
	unsigned agility;
	unsigned intelligence;
	
	virtual void levelUp() = 0;
	void useItem();
	bool run();

public:
	Hero();
	virtual ~Hero();
};

