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
//	[4]	Prompt the user to enter the age of the recipient and assign
//		it to an int variable age. Have your program write "I hear
//		you just had a birthday and you are age years old." If age
//		is 0 or less or 110 or more, call simple_error("you're kidding!")
//		using simple_error() from PPP_support.
//	[5]	Add this to your letter:
//			If your friend is under 12, write "Next year you will be
//			age+1."
//			If your friend is 17, write "Next year you will be
//			able to vote."
//			If your friend is over 70, write "Are you retired?"
//		Check your program to make sure it responds appropriately
//		to each kind of value.
//	[6]	Add "Yours sincerely," followed by two blank lines for a
//		signature, followed by your name
//
//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	string first_name;
	string friend_name;
	int age = 0;

	cout << "Please the recipient's first name: ";
	cin >> first_name;
	
	cout << "Enter the recipient's age: ";
	cin >> age;

	cout << "Enter the name of a mutual friend: ";
	cin >> friend_name;

	cout << "Hello " << first_name << ",\n";
	cout << "\n\tHow are you? I am fine. I miss you. Please call me\n"
		<< "when can so we can catch up.\n";
	cout << "\n\tHave you seen " << friend_name << " lately?\n";
	cout << "\n\tI hear you just had a birthday and you are " << age;

	if (age == 1) 
		cout << " year old.\n";
	else
		cout << " years old.\n";

	if ((age <= 0) || (age >= 110)) 
		simple_error("You're how old? You must be kidding...\n");
	else if (age < 12) 
		cout << "Next year you will be " << age+1 << ".\n";
	else if (age == 17)
		cout << "Next year you will be able to vote.\n";
	else if (age > 70)
		cout << "Are you retired?\n";

	cout << "Yours sincerely,\n\n\nSteve\n";
}
