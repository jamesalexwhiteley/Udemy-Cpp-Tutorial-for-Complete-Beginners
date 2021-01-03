// RevString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char text[] = "he";
	int lenText = sizeof(text);

	cout << text << endl;

	string rev;

	for (int i = 0; i < lenText - 1; i++) {

		char letter = text[lenText - 2 - i];
		rev += letter;

	}

	cout << rev << endl;

	return 0;
}
