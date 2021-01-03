// ArraysAndFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printItems(const int len, string* names) {
	for (int i = 0; i < len; i++) {
		cout << names[i] << endl;
	}
}

int main()
{
	string names[] = { "ringo","paul", "john" };
	int len = sizeof(names) / sizeof(string);

	printItems(len, names);

	return 0;
}

