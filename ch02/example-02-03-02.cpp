// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Example 2.3.2` - page 33
// Read and write first and last names

//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	cout << "Please enter your first name and second names\n";

	string first;
	string last;

	cin >> first >> last;	// read two strings
	
	cout << "Hello, " << first << " " << last << '\n';
}
