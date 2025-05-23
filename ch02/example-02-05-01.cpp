// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Example 2.5.1 - page 38
// detect repeated words

//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	// strings are initialized to "" by default
	string previous;	// previous word
	string current;		// current word
	
	while (cin >> current) {		// read a stream of words
		if (previous == current)
			cout << "repeated word: " << current << '\n';
	
	previous = current;
	}
}
