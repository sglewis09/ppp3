// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Drill 3.3
// Page 78
// Go through this drill step by step. Do not try to speed up by skipping
// steps. Test each step by entering at least three pairs of values - more
// values would be better.
//  [1] Write a program that consists of a while-loop that (each time around
//      the loop) reads in two ints and then prints them. Exit the program
//      when a terminating '|' is entered.
//  [2] Change the program to write out "the smaller value is: " followed by
//      the smaller of the numbers and "the larger value is: " followed by the
//      larger value.
//  [3] Augment the program so that it writes the line "the numbers are equal"
//      (only) if they are equal.
//
//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
    int num1, num2;
    char terminate;

    while (true) {
        cout << "Enter two integers (or '|' to exit): ";
        
        if (!(cin >> num1 >> num2)) { 
            cin.clear(); // Clear the error flag
            cin >> terminate;

            if (terminate == '|') {
                cout << "Exiting program...\n";
                break;
            } else {
                cout << "Invalid input. Please enter integers or '|'.\n";

				// Discard invalid input
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } else {
            cout << "You entered: " << num1 << " and " << num2 << "\n";
			if (num1 < num2) {
				cout << "The smaller value is: " << num1
					<< "\nThe larger value is: " << num2 << '\n';
			} else if (num2 < num1) {
				cout << "The smaller value is: " << num2
					<< "\nThe larger value is: " << num1 << '\n';
			} else {
				cout << "The numbers are equal\n";
			}
        }
    }

    return 0;
}
