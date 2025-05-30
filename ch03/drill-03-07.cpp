// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Drill 3.7 (Also solves drill 3.8)
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
//  [7] Add a unit to each double entered; that is, enter values such as
//      "10cm", "2.5in", "5ft", or "3.33m". Accept the four units: cm, m,
//      in, ft. Assume conversion factors "1m=100cm", "1in=2.54cm" "1ft=12i".
//      Read the unit indicator into a string. You may consider "12 m" (with
//      a space between the number and the unit) equivalent to "12m" (without
//      a space).
//  [8] Reject values without units or with "illegal" represntations of units,
//      such as y, yard, meter, km, and gallons.
//
//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
    double num(0);		// number of units
	string unit;		// unit of measure (only cm, i, ft, m are supported)
	double cm(0);		// units converted to cm
    char terminate;		// place to store termination character
	
	// initialize smallest with the largest value allowed for a double
	double smallest(numeric_limits<double>::max());

	// initialize largest with the smallest value allowed for double
	double largest(numeric_limits<double>::lowest());

	// set conversion factors to convert all values to cm so they can
	// be compaired
	constexpr double cm_per_in(2.54);
	constexpr double cm_per_ft(cm_per_in*12);
	constexpr double cm_per_m(100);

    while (true) {
        cout << "Enter a floating-point number followed by one these units:\n"
			<< "c, in, ft, m (or just '|' by itself, with no number "
			<< "to exit): ";
        
        if (!(cin >> num >> unit)) { 
            cin.clear(); // Clear the error flag
            cin >> terminate;

            if (terminate == '|') {
                cout << "Exiting program...\n";
                break;
            } else {
                cout << "Invalid input floating-point number, followed "
					<< "by c, in, ft, m or '|' to end.\n";

				// Discard invalid input
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } else {
            cout << "You entered: " << num << ' ' << unit << '\n';

			if (unit == "cm")
				cm = num;
			else if (unit == "in")
				cm = cm_per_in * num;
			else if (unit == "ft")
				cm = cm_per_ft * num;
			else if (unit == "m")
				cm = cm_per_m * num;
			else {
				cout << "Invalid unit entered. Only c, in, ft, or m "
					<< " are allowed.\n"
					<< "Please try again...\n\n";
				continue;
			}

			cout << num << ' ' << unit << " is equal to " << cm << "cm\n";

			if (cm < smallest)
				smallest = cm;

			if (cm > largest)
				largest = cm;

			cout << "The smallest value entered so far is "
				<< smallest << "cm.\n";
			cout << "The largest value entered so far is "
				<< largest << "cm.\n\n";
		}
    }

    return 0;
}
