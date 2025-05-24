// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Chapter 2
// Exercise 9
// Write a program that converts spelled-out numbers such as "zero" and "two"
// into digits, such as 0 and 2. When the user inputs a number the program
// should print out the corresponding digit. Do it for the values 0, 1, 2, 3,
// and 4 and write out "not a number I know" if the user enters something
// that doesn't correspond, such as "stupid computer".
//
//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"
//
// #define DEBUG

int main()
{
	string number;

	cout << "Spell out any digit between 0 and 4, inclusive: ";
	cin >> number;

	if (number == "zero")
		cout << "0\n";
	else if (number == "one")
		cout << "1\n";
	else if (number == "two")
		cout << "2\n";
	else if (number == "three")
		cout << "3\n";
	else if (number == "four")
		cout << "4\n";
	else
		cout << "not a number I know\n";
}
