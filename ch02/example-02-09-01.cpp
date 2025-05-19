// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Example 2.9.0 - page 45
// Experiment with type conversions

//--- Comment out and use include until If figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	double d = 0;

	while (cin >> d) {		// Repeat the loop as log as we type in numbers
		int i = d;			// Try to squeeze a floating-point value into
							// an integer type
		char c = i;			// Try to squeeze an integer into a char

		cout << "d==" << d		// The original double
			<< ", i==" << i		// Double converted to int
			<< ", c==" << c		// Int value of char
			<< ", char(" << c << ")\n";	// The char
	}
}
