#include "stdafx.h"
#include "Bat.h"


Bat::Bat()
{
	level = 3; // tu zmienisz, ¿eby poziom siê dostosowywa³ do poziomu postaci
	health = 45;
	strength = 4;
	cout << "Bat construced" << endl;
}


Bat::~Bat()
{
}

void Bat::attack()
{
	cout << "Bat bited you and dealt " << strength << " damage." << endl;
}

void Bat::useSpecial(){
	cout << "Bat sack your blood, dealt " << 2 * strength << " damage and drained " << 0.5*strength << " health." << endl;
}
