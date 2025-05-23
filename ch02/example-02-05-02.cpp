// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Example 2.5.3 - page 40
// detect repeated words

//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	int number_of_words = 0;

	// strings are initialized to "" by default
	string previous;	// previous word
	string current;		// current word
	
	while (cin >> current) {		// read a stream of words
		++number_of_words;			// increment word count

		if (previous == current)
			cout << "word number " << number_of_words
				<< " repeated: " << current << '\n';
	
	previous = current;
	}
}
