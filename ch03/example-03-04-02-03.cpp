// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Example 3.4.2.3 for-statements
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
	for (int i = 0; i < 100; ++i)
		cout << i << '\t' << square(i) << '\n';
}
