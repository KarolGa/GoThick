#include "stdafx.h"
#include "Warrior.h"


Warrior::Warrior(){
	level = 1;
	health = 29;
	strength = 8;
	agility = 5;
	intelligence = 3;
	cout << "Warrior construced" << endl;
}


Warrior::~Warrior(){
}


void Warrior::attack(){
	cout << "You atacked with axe" << endl;
}

void Warrior::useSpecial() {
	cout << "You used taunt" << endl;
}

void Warrior::levelUp() {
	level += 1;
	health += 8;
	strength += 4;
	agility += 2;
	intelligence += 1;
	cout << "Congratulation, you gained a level" << endl << "+8 health" << endl << "+4 strength" << endl << "+2 agility" << endl << "+1 intelligence" << endl;

}
