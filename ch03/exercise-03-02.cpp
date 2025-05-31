// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Chapter 3
// Exercish 2
// Page 79
// Write a program that reads a string from input and then, for each character
// read, prints out the character and its integer value on a line.

//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	string s;

	cout << "Enter a string: ";
	cin >> s;

	for (char c : s)
		cout << c << '\t' << int(c) << '\n';
}
