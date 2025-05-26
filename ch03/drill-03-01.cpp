// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Drill 3.1
// Page 77
// Go through this drill step by step. Do not try to speed up by skipping
// steps. Test each step by entering at least three pairs of values - more
// values would be better.
// [1] Write a program that consists of a while-loop that (each time around the
//     loop) reads in two ints and then prints them. Exit the program when a
//     terminating '|' is entered.

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
        }
    }

    return 0;
}
