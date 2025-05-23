// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Example 2.4.3 - page 36
// read and compare names

//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	cout << "Please enter two names\n";

	string first;
	string second;

	cin >> first >> second;	// read two strings
	
	if (first == second)
		cout << "that's the same name twice\n";

	if (first < second)
		cout << first << " is aphabetically before " << second << '\n';

	if (first > second)
		cout << first << " is aphabetically after " << second << '\n';
}
