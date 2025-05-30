// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Drill 3.6
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
//  [4] Change teh program so that it uses doubles instead of ints.
//  [5] Change the program so that it writes out the "the numbers are almost
//      equal" after writing out which is the larger and the smaller if the
//      two numbers differ by less than 1.0/100.
//  [6] Now change the body of the loop so that it reads just one double each
//      time around. Define two variables to keep track of which is the
//      smallest and which is the large value have you seen so far. Each time
//      through the loop write out the value entered. If it's the smallest
//      so far, write "th smallest so far" after the number. If it is the
//      largest so far, write "the largest so far" after the number.
//
//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
    double num(0);
	double smallest(numeric_limits<double>::max());
	double largest(numeric_limits<double>::lowest());
    char terminate('\0');;

    while (true) {
        cout << "Enter a floating-point number (or '|' to exit): ";
        
        if (!(cin >> num)) { 
            cin.clear(); // Clear the error flag
            cin >> terminate;

            if (terminate == '|') {
                cout << "Exiting program...\n";
                break;
            } else {
                cout << "Invalid input. Please enter a valid "
					<< "floating-point number or '|'.\n";

				// Discard invalid input
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } else {
            cout << "You entered: " << num << "\n";
			if (num < smallest) {
				smallest = num;
				cout << "This is the smallest value entered so far.\n";
			}
			if (num > largest) {
				largest = num;
				cout << "This is the largest value entered so far.\n";
			}
		}
    }

    return 0;
}
