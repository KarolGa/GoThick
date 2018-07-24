#pragma once
#include "Mob.h"
class Bat :
	public Mob
{
public:
	Bat();
	~Bat();

	void attack() override;
	void useSpecial() override;
};

