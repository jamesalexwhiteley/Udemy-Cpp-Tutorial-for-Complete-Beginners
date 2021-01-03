// references.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//using namespace std;
//
//
//void changeVal(double &val) { // now is just reference to existing variable 
//	val = 123.4; 
//}
//
//
//int main()
//{
//	int val1 = 5;
//	int &val2 = val1; // reference variable, so val1 and val2 are in the same bit of memory so identical 
//	val2 = 10;
//
//	cout << val1 << endl; 
//	cout << val2 << endl;
//		
//	double value = 432.1;
//	changeVal(value);
//	cout << value << endl;
//
//	const int NUMS = 65;
//    
//}

#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal() {
		cout << "Animal created." << endl;
	}

	Animal(const Animal& other) :
		name(other.name) {
		cout << "Animal created by copying." << endl;
	}

	~Animal() {
		cout << "Destructor called" << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void speak() const {
		cout << "My name is: " << name << endl;
	}
};

Animal *createAnimal() {
	Animal *pA = new Animal();
	pA -> setName("ringo");
	return pA;
}

int main() {
	//Animal* pCat1 = new Animal();
	//pCat1->setName("Freddy"); //same as (*pCat1).setName("Freddy");
	//pCat1->speak();
	//delete pCat1;


	/*Animal *pFrog = createAnimal();
	pFrog -> speak();
	delete pFrog;*/


	//int *pInt = new int; // initiate new pointer to [empty] int 
	//*pInt = 8; // set int value to 8;
	//cout << *pInt << endl;
	//delete pInt;


	char letter = 'a';
	Animal *pAnimal = new Animal[26];

	for (int i = 0; i < 26; i++, letter++) {

		string name(1, letter);

		pAnimal[i].setName(name);
		pAnimal[i].speak();

	}

	delete [] pAnimal;

	/*char *pMem = new char[1000];
	delete [] pMem;*/

	return 0;
}
