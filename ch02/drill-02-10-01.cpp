// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Drill 2.10.01
// After each step of this drill, run your program to make sure it is
// really doing what you expect it to. Keep a list of what mistakes
// you make so that you can try to avoid those in the future.
//	[1] Write a program that produces a simple form letter based
//		on user input. Begin by typing the code from §2.1 prompting
//		a user to enter his or her first name and writing "Hello,
//		first_name" where first_name is the name entered by the user.
//		Then modify your code as follows: change the prompt to
//		"Enter the name of the person you want to write to" and
//		change the output to "Dear first_name,". Don't forget the
//		comma.
//
//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	cout << "Please the recipient's first name\n";

	string first_name;	// first_name is a variable of type string
	cin >> first_name;	// read characters into first_name
	
	cout << "Hello " << first_name << ",\n";
}
