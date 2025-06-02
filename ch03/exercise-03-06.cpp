// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
//
// Chapter 3
// Exercise 6
// Page 79
// Write a progrtam that performs as a very simple calculator. Your calculator
// should be able to handle the four basic math operations - add, subtract,
// multiply, and divide - on two input values. Your program should prompt the
// user to enter three arguments: two double values and a character to
// represent an operation. If the entry arguments are 35.6, 24.1, and '+', the
// program output should be 'The sum of 35.6 and 24.1 is 59.7'. In Chapter 5
// and Chapter 6, we look at a much more sophistocated calculator.

#define DEBUG

// Only use modules if supported by the compiler
#if __cpp_modules
import std;
#else
#include "PPPheaders.h"
#endif

int main() {
  double num1, num2;
  char op;
  double answer;

  while (true) {
    cout << "Enter two real numbers and +, -, *, / (q to quit)" << endl;

    if (!(cin >> num1 >> num2 >> op)) {
      cin.clear();

      cin >> op;
      if (op == 'q') {
        cout << "Exiting..." << endl;
        break;
      } else {
        cout << "Invalid input. Please try again." << endl;

        // Discard invalid input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      }
    }

    switch (op) {
    case '+':
      answer = num1 + num2;
      cout << num1 << " + " << num2 << " = " << answer << endl;
      break;

    case '-':
      answer = num1 - num2;
      cout << num1 << " - " << num2 << " = " << answer << endl;
      break;

    case '*':
      answer = num1 * num2;
      cout << num1 << " * " << num2 << " = " << answer << endl;
      break;

    case '/':
      if (num2 == 0) {
        cout << num1 << " / " << num2
             << " Cannot be caluclated (divionsion by zero)" << endl;
      } else {
        answer = num1 / num2;
        cout << num1 << " / " << num2 << " = " << answer << endl;
      }
      break;
    }
  }
}
