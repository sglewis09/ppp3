// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Chapter 2
// Exercise 4
// Write a program that prompts the user to enter two  integer values. Store
// these values in int variables named val1 and val2. Write your prgraom to
// determine the smaller, larger, sum, difference, product, and ratio of these
// values and repot them to the user.j
//
//--- Comment out and use include until If figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	cout << "Please enter 2 integers:\n";

	int val1(0), val2(0);
	cin >> val1 >> val2;

	cout << "The two intges you enterd are"
		<< val1 << " and " << val2 << '\n';
	cout << val1 << val2;

	cout << val1 << " + " << val2 << " = " << val1*val2 << '\n';
	cout << val1 << " - " << val2 << " = " << val1-val2 << '\n';
	cout << val1 << " * " << val2 << " = " << val1*val2 << '\n';
	cout << val1 << " / " << val2;

    if (val2 == 0)
		cout << "Error: divison by zero is undefined\n";
	else
		cout << val1 << " / " << val2 << " = " << val1/val2 << '\n';

	cout << "The sum of " << val1 << " and " << val2 << " is " << val1+val2
		<< '\n';

	if (val1 < val2) {
		cout << "The smaller value is " << val1 << '\n';
		cout << "The larger value is " << val2 << '\n';
	} else {
		cout << "The smaller value is " << valj << '\n';
		cout << "The larger value is " << val2 << '\n';
	}
}
