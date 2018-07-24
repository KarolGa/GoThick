#pragma once
#include "Location.h"
class Cave :
	public Location
{
public:
	Cave();
	~Cave();

	char drawEvent() override;
	char chooseAction() override;
};

