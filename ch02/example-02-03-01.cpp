// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Example 2.3 - page 32
// Read and write first name and age

//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	cout << "Please enter your first name and age\n";

	string first_name = "???";	// string variable ("???" indicates
								// "don't know the naem")
	int age = -1;				// integer variable (-1 means
								// "don't know the age

	cin >> first_name >> age;	// read string followed by an integer
	
	cout << "Hello, " << first_name << " (age " << age << ")\n";
}
