// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
//
// Chapter 3
// Exercise 16
// Page 81
// [15] In the drill, you wrote a program that, given a series of numbers,
// found the max and min of that series. The number that appears the most
// times in a sequence is called the mode. Create a program that finds the
// mode of a set of positive integers.
// [16] Write a program that finds the min, max, and mode of a sequence
// of strings.

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

#define DEBUG

// Assumes that nums has already been sortted
string get_mode(vector<string> strs) {
  string mode(strs[0]);
  int count(1);
  int current_count(1);
  long unsigned int i(1);

  while (i < strs.size()) {
    if (strs[i - 1] == strs[i]) {
      ++current_count;
    } else {
      if (current_count > count) {
        mode = strs[i - 1];
        count = current_count;
      }
      current_count = 1;
    }
    ++i;
  }

  if (current_count > count) {
    mode = strs[i - 1];
  }

  return mode;
}

int main() {
  string s;               // Current number entered by user
  vector<string> strings; // Create storage for a list of integers

  // Fill in a list of strings
  while (true) {
    cout << "Enter an string (or '|' to exit): ";

    cin >> s;
    if (s[0] == '|') {
      break;
    } else {
      strings.push_back(s);
    }
  }

  if (!strings.empty()) {
    ranges::sort(strings);
    string mode = get_mode(strings);

    cout << "Min:\t" << strings[0] << endl;
    cout << "Mode:\t" << mode << endl;
    cout << "Max:\t" << strings[strings.size() - 1] << endl;
  } else {
    cout << "No data!\n";
  }
}
