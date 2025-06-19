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
#include <tuple>
#if __cpp_modules
import std;
#else
#include "PPPheaders.h"
#endif

int main() {
  constexpr char term_char = '|'; // What char is being used to stop program
  int number = 0;                 // Current number entered by user
  char terminate = '\0';          // Storage for termination character check
  vector<int> numbers;            // Create storage for a list of integers

  while (true) {
    cout << "Enter an integer (or '|' to exit): ";

    if (!(cin >> number)) {
      cin.clear(); // Clear the error flag
      cin >> terminate;

      if (terminate == term_char) {
        cout << "Exiting program..." << endl;
        break;
      } else {
        cout << "Invalid input. Please enter a valid integer or \'" << term_char
             << "\' to terminate." << endl;

        // Discard invalid input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      }
    } else {
      numbers.push_back(number);
    }
  }

  if (numbers.length() < 1) {
    cerr << "The list of integers is empty" << endl;
    exit(1);
  }

  sort(numbers.begin(), numbers.end());
}
