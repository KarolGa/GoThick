#pragma once
#include "Hero.h"
class Warrior :
	public Hero
{

	
public:
	Warrior();
	~Warrior();
	void attack() override;
	void useSpecial() override;
	void levelUp() override;
};

