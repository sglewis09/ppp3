// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Drill 3.9
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
//  [9] Keep track of the sum of values entered (as well as the smallest and
//      the largest) and the number of values entered. When the loop ends,
//      print the smallest, the largest, the number of values, and the sum of
//      values. Note that to keep the sum, you have to decide on a unit for
//      that sum; use meters.
//
//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
    double num(0);		// number of units
	string unit;		// unit of measure (only cm, i, ft, m are supported)
	double m(0);		// units converted to cm
    char terminate;		// place to store termination character
	double sum(0);		// sum of all values entered (in meters)
	int	count(0);		// the total number of values entered
	
	// initialize smallest with the largest value allowed for a double
	double smallest(numeric_limits<double>::max());

	// initialize largest with the smallest value allowed for double
	double largest(numeric_limits<double>::lowest());

	// set conversion factors to convert all values to cm so they can
	// be compaired
	constexpr double m_per_cm(0.01);
	constexpr double m_per_in(0.0254);
	constexpr double m_per_ft(m_per_in*12);

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
            cout << "You entered: " << num << unit << '\n';

			if (unit == "cm")
				m = m_per_cm * num;
			else if (unit == "in")
				m = m_per_in * num;
			else if (unit == "ft")
				m = m_per_ft * num;
			else if (unit == "m")
				m = num;
			else {
				cout << "Invalid unit entered. Only c, in, ft, or m "
					<< " are allowed.\n"
					<< "Please try again...\n\n";
				continue;
			}

			cout << num << ' ' << unit << " is equal to " << m << "m\n";

			sum += m;

			if (m < smallest)
				smallest = m;

			if (m > largest)
				largest = m;

			cout << "You have entered " << ++count << " values so far.\n";
			cout << "The sum of the values you have entered is "
				<< sum << "m.\n";
			cout << "The smallest value entered so far is "
				<< smallest << "m.\n";
			cout << "The largest value entered so far is "
				<< largest << "m.\n\n";
		}
    }

    return 0;
}
