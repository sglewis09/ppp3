// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Chapter 2
// Exercise 6
// Write a program that prompts the user tpo enter three integer values, and
// then outputs the values in numerical order, sepated by commas. So, if the
// user enters the values 10 4 6, the output should be 4, 6, 10. If two value
// are the same, they should be ordered together. So, the input 4 5 4 should
// give 4, 4, 5.
//
//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"
//
// #define DEBUG

int main()
{
	int val1, val2, val3;

	cout << "Please enter 3 integers:\n";
	cin >> val1 >> val2 >> val3;
	cout << "You entered " << val1 << ", " << val2 << ", " << val3 << '\n';

	int sorted_val1, sorted_val2, sorted_val3;
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
