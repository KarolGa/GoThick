// GoThick.cpp : Defines the entry point for the console application.
//
#include <conio.h>
#include "stdafx.h"
#include "Warrior.h"

int main()
{
	Warrior *warrior = new Warrior();
	warrior->attack();

	getchar();
    return 0;
}

