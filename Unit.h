#pragma once
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Unit
{

protected:
	unsigned level;
	unsigned health;
	unsigned strength;


	virtual void attack() = 0;
	virtual void useSpecial() = 0;
	
public:
	Unit();
	virtual ~Unit();
};

