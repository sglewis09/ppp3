// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Example 3.6.4 A text example
// Page 76
// Simple dictionary; list of sorted words

//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	vector<string> words;

	cout << "Enter a list of words (terminated with <ctrl>+D):\n";

	for(string temp; cin >> temp; )		// read whitespace-seperated words
		words.push_back(temp);			// put into vector

	cout << "Number of words:" << words.size() << '\n';

	ranges::sort(words);				// sort the words

	for (unsigned int i = 0; i < words.size(); ++i)
		if ((i == 0) || (words[i-1] != words[i]))	// is this a new word?
			cout << words[i] << '\n';
}
