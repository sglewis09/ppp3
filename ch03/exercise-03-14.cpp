// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
//
// Chapter 3
// Exercise 14
// Page 80
// Write a program that takes an input value n and then finds the
// first n primes.

// Only use modules if supported by the compiler
#if __cpp_modules
import std;
#else
#include "PPPheaders.h"
#endif

int main() {
  vector<int> primes;
  primes.push_back(2);
  unsigned int how_may_primes = 0; // the number of primes requested by the user
  int prime_candidate = 3; // the current number being tested for being a prime

  cout << "How many prime numbers do you want to find?" << endl;
  cin >> how_may_primes;

  while (primes.size() < how_may_primes) {
    bool is_prime = true;

    for (int j = 2; j < prime_candidate; prime_candidate++) {
      if (!(prime_candidate % j)) {
        is_prime = false;
        break;
      }
      if (is_prime)
        primes.push_back(prime_candidate);
    }
    ++prime_candidate;
  }

  cout << "Here is the list of primes that I found:" << endl;
  for (int j : primes) {
    cout << j << endl;
  }
}
