// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Chapter 3
// Exercish 3
// Page 79
// If we define the median of a sequence as "a number so that exactly as many
// elements come before it in the sequence as come after it," fix the program
// in §3.6.3 so that it always prints out a median. Hint: A median need be an
// element of the sequence.

//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	// read some temperatures into a vector
	vector<double> temps;	// temperatures

	for (double temp; cin >> temp; )	// read into temp
		temps.push_back(temp);			// put temp into vector
}
