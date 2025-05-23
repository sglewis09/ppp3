// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Chapter 2
// Exercise 2
// Write a preogram in C++ that converts from miles to kilometers. Your
// program shoudl have a reasonable propmt for the user to enter a number of
// miles. Hint: A mile is 1.609 kilometers.
//
//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	const double miles_per_km(1.609);

	cout << "Miles to kilometer converter\n"
		<< "Ener the number of miles tghat you want to converter: ";

	double miles;
	cin >> miles;

	cout << miles << " miles is equal to " <<  miles * miles_per_km << "km.\n";
}
