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
#include <limits>
#include <tuple>
#if __cpp_modules
import std;
#else
#include "PPPheaders.h"
#endif

// remove redefinition of std::vector
#ifdef vector
#undef vector
#endif

// Assumes that nums has already been sortted
int get_mode(vector<int> nums) {
  int mode(nums[0]);
  int count(1);
  int current_count(1);
  long unsigned int i(1);

  while (i < nums.size()) {
    if (nums[i - 1] == nums[i]) {
      ++current_count;
    } else {
      if (current_count > count) {
        mode = nums[i - 1];
        count = current_count;
      }
      current_count = 1;
    }
    ++i;
  }

  if (current_count > count) {
    mode = nums[i - 1];
  }

  return mode;
}

int main() {
  int n(0);            // Current number entered by user
  vector<int> numbers; // Create storage for a list of integers
  char term('\0');

  // Fill in a list of integers
  while (true) {
    cout << "Enter an integer (or '|' to exit): ";

    if (!(cin >> n)) {
      cin.clear(); // Clear the error flag
      cin >> term;

      if (term == '|') {
        cout << "Exiting program...\n";
        break;
      } else {
        cout << "Invalid input. Please enter a valid integer or \'|\' to end\n";

        // Discard invalid input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      }
    } else {
      numbers.push_back(n);
    }
  }

  if (!numbers.empty()) {
    ranges::sort(numbers);
    int mode = get_mode(numbers);

    cout << "Min:\t" << numbers[0] << endl;
    cout << "Mode:\t" << mode << endl;
    cout << "Max:\t" << numbers[numbers.size() - 1] << endl;
  } else {
    cout << "No data!\n";
  }
}
