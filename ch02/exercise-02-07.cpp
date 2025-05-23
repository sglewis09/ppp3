// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Chapter 2
// Exercise 7
// Do exercise 6, but with three string values. So, if the user enters the
// values Steinbeck, Hemingway, Fitzgerald, the ouptu should be Fitzgerald,
// Hemingway, Steinbeck.
//
//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"
//
// #define DEBUG

int main()
{
	string val1, val2, val3;

	cout << "Please enter 3 strings:\n";
	cin >> val1 >> val2 >> val3;
	cout << "You entered " << val1 << ", " << val2 << ", " << val3 << '\n';

	string sorted_val1, sorted_val2, sorted_val3;
	if (val1 >= val2) {
		sorted_val1 = val2;
		sorted_val2 = val1;
	} else {
		sorted_val1 = val1;
		sorted_val2 = val2;
	}
#ifdef DEBUG
	cout << "sorted_val1=" << sorted_val1 << ", "
		<< "sorted_val2=" << sorted_val2 << '\n';
#endif

	if (val3 < sorted_val1) {
		sorted_val3 = sorted_val2;
		sorted_val2 = sorted_val1;
		sorted_val1 = val3;
	} else if (val3 < sorted_val2) {
		sorted_val3 = sorted_val2;
		sorted_val2 = val3;
	} else {
		sorted_val3 = val3;
	}

	cout << sorted_val1 << ", "
		<< sorted_val2 << ", "
		<< sorted_val3 << '\n';
}
