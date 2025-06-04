// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
//
// Chapter 3
// Exercise 12
// Page 80
// Create a program to find all the prime numbers between 1 and 100. One way
// to do this is to write a function that will check if a number is prime
// (i.e., see if the number can be divided by a prime number smaller that
// itself) using a vector of primes in order (so that if the vector is
// called primes, prims[0]==2, primes[1]==3, primes[2]==5, etc.). Then write
// a loop that goes from 1 to 100, checks each number to see if it is a prime,
// and stores each prime found in a vector. Write another loop that lists
// the primes you found. You might check you result by compairing you vector
// of prime numbers with primes. Consider 2 to be the first prime.

#include <ostream>

// Only use modules if supported by the compiler
#if __cpp_modules
import std;
#else
#include "PPPheaders.h"
#endif

int main() {
  vector<int> primes;
  primes.push_back(2);

  for (int i = 3; i <= 100; i++) {
    bool is_prime = true;

    for (int j = 2; j < i; i++) {
      if (!(i % j)) {
        is_prime = false;
        break;
      }
      if (is_prime)
        primes.push_back(i);
    }
  }

  cout << "Here is the list of primes that I found:" << endl;
  for (int i : primes) {
    cout << i << endl;
  }
}
