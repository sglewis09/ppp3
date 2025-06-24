// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
//
// Drill 3.0
// Page 110
//
// Scaffold for chapter 4 drills

//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main() {
  try {
    cout << "Success"
         << "!\n";
    return 0;
  }

  catch (exception &e) {
    cerr << "error: " << e.what() << endl;
    return 1;
  }

  catch (...) {
    cerr << "Oops: unknown excetption" << endl;
    return 2;
  }
}
