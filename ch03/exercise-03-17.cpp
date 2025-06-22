// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
//
// Chapter 3
// Exercise 17
// Page 81
// [17] Write a program to solve quardratic equations. A quatdratic equation
//      is of the form ax^2 + bx + c = 0. If you don't know the formula for
//      solving such an expression, do some research. Remember, researching
//      how to solve a problem is often necessary before a programmer can
//      teach the computer how to solve it. Use doubles for the user inputs
//      for a, b, and c. Since there are two solutions to a quadratic
//      equation, output both x1 and x2.

// #define DEBUG

#include <cfloat>
#include <cmath>
#include <iostream>
#include <ostream>

using namespace std;

double determinant(double a, double b, double c) {
  double d = (b * b) - (4 * a * c);

#ifdef DEBUG
  cout << "d = " << d << endl;
#endif

  if (d < 1) {
    return DBL_MAX; // Use DBL_MAX as an error indicator
  } else {
    return sqrt(d);
  }
}

int main() {
  double a, b, c, d;
  double x1, x2;

  cout << "Quadratic Equation Solver" << endl
       << "For a*x*x + b*x + c = 0, enter a, b, and c: ";

  cin >> a >> b >> c;

#ifdef DEBUG
  cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;
#endif

  d = determinant(a, b, c);
  if (d == DBL_MAX) {
    cerr << "The derterminat is " << d << endl
         << "The dertrminant is negative so roots cannot be computed." << endl;
    return 1;
  } else {
    x1 = (-b + d) / (2 * a);
    x2 = (-b - d) / (2 * a);
  }

  cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;

  return 0;
}
