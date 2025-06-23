// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
//
// Chapter 3
// Exercise 20
// Page 81
//
// [18] Write a program where you first enter a set of name-and-value pairs,
//      such as "Joe 17" and "Barbara 22". For each pair, add the name to a
//      vector called names and the number to a vector called scores (in
//      corresponding positions, so that if names[7]="Joe" then scores[7]=17).
//      Terminate input with "NoName 0". Check that earch name is unique and
//      terminate with an error message if a name is entered twice. Write
//      out all the (name,score) pairs, one per line.
// [19] Modify the program from the previous exercise so that once you have
//      entered the name-and-value pairs, you ask for values: In a loop,
//      when you enter a name, the program will output the corresponding score
//      or 'name not found'.
// [20] Modify the program from the previous exercise so that once you have
//      entered the name-and-value pairs, you ask for names: In a loop, when
//      you enter a value, the program will output all the names with that
//      score or 'score not found'.

// #define DEBUG

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> names;
  vector<int> scores;

  string name;
  int score;

  cout << "Enter 'NoName 0' to exit." << endl;
  while (true) {
    cout << "Enter a single name followed by an integer score: ";
    cin >> name >> score;

    // Check for exit condition
    if ((name == "NoName") && (score == 0)) {
      cout << "Exiting..." << endl;
      break;
    }

    // Check for duplicates and exit if one is found
    if (!names.empty()) {
      for (string n : names) {
        if (n == name) {
          cerr << "Duplicate name '" << name << "' found. Exiting..." << endl;
          return 1;
        }
      }
    }

    names.push_back(name);
    scores.push_back(score);
  }

  while (true) {
    // Loop, asking for scores to lookup
    cout << "Enter a score to lookup: ";
    cin >> score;

    for (long unsigned int i = 0; i < scores.size(); i++) {
      if (score == scores[i]) {
        cout << names[i] << '\t' << scores[i] << endl;
      }
    }
  }
}
