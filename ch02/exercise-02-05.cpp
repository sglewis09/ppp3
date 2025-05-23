// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Chapter 2
// Exercise 5
// Modify the program from exercise 4 to ask the user to enter floating-point
// values and store them in double variables. Compare the outputs of the two
// programs for some inputs of your choice. Are the results the same? Should
// they be? What's the difference?
//
//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	cout << "Please enter 2 numbers:\n";

	double val1(0), val2(0);
	cin >> val1 >> val2;

	cout << "The two numbers you enterd are "
		<< val1 << " and " << val2 << '\n';

	cout << val1 << "+" << val2 << "=" << val1*val2 << '\n';
	cout << val1 << "-" << val2 << "=" << val1-val2 << '\n';
	cout << val1 << "*" << val2 << "=" << val1*val2 << '\n';

    if (val2 == 0)
		cout << "Error: divison by zero is undefined\n";
	else
		cout << val1 << "/" << val2 << "=" << val1/val2 << '\n';

	if (val1 < val2) {
		cout << "The smaller value is " << val1 << '\n';
		cout << "The larger value is " << val2 << '\n';
	} else {
		cout << "The smaller value is " << val1 << '\n';
		cout << "The larger value is " << val2 << '\n';
	}
}
