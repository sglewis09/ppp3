// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
//
// Chapter 3
// Exercise 13
// Page 80
// Create a program to find all the prime numbers between 1 and 100. There is
// a classic method for doing this called the "Sieve of Eratosthenes." If you
// don't know that method, get on the Web and look it up. Write your program
// using this method.
//
//-------
// This is pseudocode from Wikipedia
// (https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)
// algorithm Sieve_of_Eratosthenes is
//   input: an integer n > 1.
//   output: all prime numbers from 2 through n.
//
//   let A be and array of Boolean values, indxed by inetegers 2 to n,
//   initally all set to true.
//
//   for i = 2, 3, 4, ..., not exceeding square root of n do
//     if A[i] is true
//       for j = i^2, i^2+i, i^2+2i, i^2+3i, ..., not exceeding n do
//         set A[j] := false;
//
//   return all i such that A[i] is true.
//-------

// Only use modules if supported by the compiler
#if __cpp_modules
import std;
#else
#include "PPPheaders.h"
#endif

#undef vector

int main() {
  constexpr int max_candidates = 100;
  constexpr int sqrt_max_candidates = (int)sqrt(max_candidates);

  vector<bool> candidates;

  for (int i = 2; i <= max_candidates; i++)
    candidates.push_back(true);

  for (int i = 2; i <= sqrt_max_candidates; i++)
    if (candidates[i])
      for (int j = i * i; j <= max_candidates; j += i)
        candidates[j] = false;

  cout << "This is a list of prime numbers up to " << max_candidates << ":"
       << endl;

  for (int i = 2; i <= max_candidates; i++)
    if (candidates[i])
      cout << i << endl;
}
