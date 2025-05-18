// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Example 2.4.2 - page 36
// Show string concatenation

//--- Comment out and use include until If figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	cout << "Please enter your first and second names\n";

	string first;
	string second;

	cin >> first >> second;	// read two strings
	
	string name = first + ' ' + second;	
	cout << "Hello, " << name << '\n';
}
