// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//class Animal {
//public:
//	void speak() { cout << "arghhh" << endl; }
//};
//
//class Cat : public Animal {
//public: void jump() { cout << "cat jumps" << endl; }
//};
//
//int main()
//{
//	Animal lizzo; 
//	lizzo.speak();
//
//	Cat ginger;
//	ginger.speak();
//	ginger.jump();
//	   
//	return 0;
//}

class Frog {
private: // instance data
	string name;
private: // methods 
	string getName() { return name; }

public:
	Frog(string name) : name(name) {}
	void print() { cout << getName() << endl; }
};


int main() {

	Frog frog("ringo");

	frog.print();
}

