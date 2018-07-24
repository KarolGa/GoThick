#pragma once
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Location
{

protected:
	float speedFactor;

public:
	Location();
	virtual ~Location();
	
	virtual char drawEvent() = 0;
	virtual char chooseAction() = 0;
	void walk();
};

