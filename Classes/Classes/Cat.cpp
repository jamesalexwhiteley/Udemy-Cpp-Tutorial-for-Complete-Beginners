#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
	cout << "Cat created" << endl;
	happy = true;
	name = "gingy";
}

string Cat::toString() {
	return "Cat's name is: " + name;
}

void Cat::setName(string newName) {
	name = newName;
}

string Cat::getName() {
	return name
}

Cat::~Cat() {
	cout << "Cat destroyed" << endl;
}



void Cat::speak() {

	if (happy) {
		cout << "meow" << endl;
	}
	else {
		cout << "hsss" << endl;
	}
}
