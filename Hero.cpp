#include "stdafx.h"
#include "Hero.h"


Hero::Hero(){
	cout << "Hero construced" << endl;

}


Hero::~Hero(){
}


void Hero::useItem(){
	cout << "Choose item" << endl;
}

bool Hero::run(){
	cout << "You are trying to run" << endl;
	return true;
}