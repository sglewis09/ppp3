// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Example 3.4.2.1 while-statements
// Page 65
// Calculate and print a table of squares 0-99

//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

inline int square(int x)
{
	return x*x;
}

int main()
{
	int i = 0;		// start from 0

	while (i < 100) {
		cout << i << '\t' << square(i) << '\n';
		++i;		// increment i (that is, i becomes i+1)
	}
}
