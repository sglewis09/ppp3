// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
//
// Chapter 3
// Exercise 5
// Page 79
// Write a program to play a nubers guesing game. The user thinks of a numbers
// between 1 and 100 and your program asks questiosn to figure out what The
// number is (e.g., "Is the  number you are thinging of less than 50?"). Your
// program should be able to identify the number after aksing no modules than
// seven questions.

#include <ostream>
// #define DEBUG

// Only use modules if supported by the compiler
#if __cpp_modules
import std;
#else
#include "PPPheaders.h"
#endif

// Process the answer to y/n questions
bool yes_no_question(string question) {
  char answer;

  while (true) {
    cout << question << ' ';
    cin >> answer;

#ifdef DEBUG
    cout << "answer = " << answer << endl;
#endif

    switch (answer) {
    case 'Y':
    case 'y':
      return true;

    case 'N':
    case 'n':
      return false;

    default:
      cout << "Invalid input. Please enter 'y' or 'n'" << endl;
      continue;
    }
  }
}

int main() {
  // Set up constants for the lowest and highest number allowed
  constexpr int range_start(1);
  constexpr int range_end(100);

  // Set up constant for the first guess in the middle of the
  // range of allowed numbers
  constexpr int first_guess(range_start + (range_end - range_start) / 2);

  int guess_counter(1);           // Count the number of gesses made
  int low_guess(range_start);     // The lowest guess made
  int high_guess(range_end);      // The highest guess made
  int current_guess(first_guess); // Start out with the first guess
  bool number_found(false);       // Set to true when the number is guessed

#ifdef DEBUG
  cout << "guess_counter = " << guess_counter << endl
       << "low_guess = " << low_guess << endl
       << "high_guess = " << high_guess << endl
       << "current_guess = " << current_guess << endl;
#endif

  while (!number_found) {
    string question = format("Is {} the number?", current_guess);
    bool answer = yes_no_question(question);

#ifdef DEBUG
    cout << question << endl << "answer = " << answer << endl;
#endif

    if (answer) {
      number_found = true;
      break;
    }

    question = format("Is the number lower than {}", current_guess);
    answer = yes_no_question(question);

    if (answer) {
      high_guess = current_guess;

      // handle edge case when we're one away from the bottom
      if ((high_guess - low_guess) == 1)
        current_guess = low_guess;
      else
        current_guess -= (high_guess - low_guess) / 2;
    } else {
      low_guess = current_guess;

      // handle edge case when we're one away from the top
      if ((high_guess - low_guess) == 1)
        current_guess = high_guess;
      else
        current_guess += (high_guess - low_guess) / 2;
    }

#ifdef DEBUG
    cout << "answer = " << answer << endl
         << "current_guess = " << current_guess << endl
         << "low_guess = " << low_guess << endl
         << "high_guess = " << high_guess << endl
         << "-----" << endl
         << endl;
#endif // DEBUG

    ++guess_counter;
  }

  cout << "The number was " << current_guess << endl;
  if (guess_counter == 1)
    cout << "It took 1 guess to find the number" << endl;
  else
    cout << "It took " << guess_counter << " trys to find the number" << endl;
}
