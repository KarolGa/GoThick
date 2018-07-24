#include "stdafx.h"
#include "Cave.h"


Cave::Cave(){
	speedFactor = 0.5;
	cout << "Cave constructed" << endl;
}


Cave::~Cave(){
}

char Cave::drawEvent(){
	cout << "Checking if any events happened" << endl;
	//if event happened returns char of that event or something
	return 'o';
}

char Cave::chooseAction(){
	char action;
	cout << "Choose what You want to do by entering letter: m for move, ... " << endl;
	cin >> action;
	return action;
}
