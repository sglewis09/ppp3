// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Example 2.1 - page 30
// Rread and write a first name

//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	cout << "Please enter your first name (followed by \"enter\"):\n";

	string first_name;	// first_name is a variable of type string
	cin >> first_name;	// read characters into first_name
	
	cout << "Hello, " << first_name << "!\n";
}
