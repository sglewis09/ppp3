// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Chapter 2
// Exercise 8
// Write a program to test an ingerger value to determin if it is odd or even.
// As always, make sure your output is clear and complete. In other words,
// don't just output "yes" or "no". Your output should stand alone, like
// "The value 4 is an even number." Hint: See the remainder (modulo) operator
// in §2.4.
//
//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"
//
// #define DEBUG

int main()
{
	int val(0);

	cout << "Enter an integer: ";
	cin >> val;

	cout << "The value " << val;
	if (val%2) 
		cout << " is an odd number.\n";
	else
		cout << " is an even number.\n";
}
