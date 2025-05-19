// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Drill 2.10.03
// After each step of this drill, run your program to make sure it is
// really doing what you expect it to. Keep a list of what mistakes
// you make so that you can try to avoid those in the future.
//	[1]	Write a program that produces a simple form letter based
//		on user input. Begin by typing the code from §2.1 prompting
//		a user to enter his or her first name and writing "Hello,
//		first_name" where first_name is the name entered by the user.
//		Then modify your code as follows: change the prompt to
//		"Enter the name of the person you want to write to" and
//		change the output to "Dear first_name,". Don't forget the
//		comma.
//	[2] Add an introductory line or two, like "How are you? I am
//		fine. I miss you." Be sure to indent the first line. Add a few
//		more lines of your choosing - it's your letter.
//	[3]	Now prompt the user for the name of another friend and
//		store it in friend_name. Add a line to your letter: "Have you
//		seen friend_name lately?"
//
//--- Comment out and use include until If figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	string first_name;
	string friend_name;

	cout << "Please the recipient's first name: ";
	cin >> first_name;
	
	cout << "Enter the name of a mutual friend: ";
	cin >> friend_name;
	
	cout << "Hello " << first_name << ",\n";
	cout << "\n\tHow are you? I am fine. I miss you. Please call me\n"
		<< "when can so we can catch up.\n";
	cout << "\n\tHave you seen " << friend_name << " lately?\n";
}
