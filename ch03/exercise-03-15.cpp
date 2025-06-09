// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
//
// Chapter 3
// Exercise 15
// Page 81
// In the drill, you wrote a program that, given a series of numbers,
// found the max and min of that series. The number that appears the most
// times in a sequence is called the mode. Create a program that finds the
// mode of a set of positive integers.

// Only use modules if supported by the compiler
#if __cpp_modules
import std;
#else
#include "PPPheaders.h"
#endif

int main() {
  double num(0);  // number of units
  string unit;    // unit of measure (only cm, i, ft, m are supported)
  double m(0);    // units converted to cm
  char terminate; // place to store termination character
  double sum(0);  // sum of all values entered (in meters)
  int count(0);   // the total number of values entered

  // initialize smallest with the largest value allowed for a double
  double smallest(numeric_limits<double>::max());

  // initialize largest with the smallest value allowed for double
  double largest(numeric_limits<double>::lowest());

  // set conversion factors to convert all values to cm so they can
  // be compaired
  constexpr double m_per_cm(0.01);
  constexpr double m_per_in(0.0254);
  constexpr double m_per_ft(m_per_in * 12);

  while (true) {
    cout << "Enter a floating-point number followed by one these units:\n"
         << "cm, in, ft, m (or just '|' by itself, with no number "
         << "to exit): ";

    if (!(cin >> num >> unit)) {
      cin.clear(); // Clear the error flag
      cin >> terminate;

      if (terminate == '|') {
        cout << "Exiting program...\n";
        break;
      } else {
        cout << "Invalid input floating-point number, followed "
             << "by cm, in, ft, m or '|' to end.\n";

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
        cout << "Invalid unit entered. Only cm, in, ft, or m "
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
      cout << "The sum of the values you have entered is " << sum << "m.\n";
      cout << "The smallest value entered so far is " << smallest << "m.\n";
      cout << "The largest value entered so far is " << largest << "m.\n\n";
    }
  }
}
