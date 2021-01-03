// BasicSyntax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*std::cout << "Hello World!\n";

	long int Val = 758437953;
	cout << Val << endl;

	cout << "size of int in bytes: " << sizeof(int) << endl;*/

	/*float fVal = 55.4;
	cout << setprecision(10) << fixed << fVal << endl;
	double dVal = 55.4;
	cout << setprecision(10) << fixed << dVal << endl;*/

	//cout << "1.\ item 1" << endl; // use .\ for tab 

	/*float val = 5.55;
	
	if (val < 5.551) {
		cout << "equal" << endl;
	}*/

	// use const to make non mutable type eg. const int Val = 9
	// do while loops to reduce redundant code 

	/*for (int i = 0; i < 5; i++) {
			cout << "hellow" << endl;
		}*/

	//Array of ints
	/*int Vals[3];
	Vals[0] = 6;
	Vals[1] = 6;
	Vals[2] = 6;
	cout << Vals[1] << endl;*/
		
	//Array of doubles 
	double Nums[4] = { 1,2,3,4 };
	for (int i = 0; i < 4; i++) {
		cout << Nums[i] << endl;
	}

	// Array of strings
	string Words[2][2] = { 
		{"Hello", "World"},
		{"Goodbye", "World"} 
	};
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << Words[i][j] << endl;
		}
		cout << endl;
	}

		


	return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
