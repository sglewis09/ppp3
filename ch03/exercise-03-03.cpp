// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Chapter 3
// Exercise 3
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

	cout << "Enter a list of temperaturs. End with <ctrl>D:\n";
	for (double temp; cin >> temp; )	// read into temp
		temps.push_back(temp);			// put temp into vector
	
	cout << "\nHere is the contents of the unsorted vector:\n";
	for (double d : temps)
		cout << d << '\n';

	ranges::sort(temps);
	
	cout << "\nHere is the contents of the sorted vector:\n";
	for (double d : temps)
		cout << d << '\n';

	double min = temps[0];
	double max = temps[temps.size()-1];
	double mean = min+(max-min)/2;

	cout << "\nThe smallest temperature is " << min << '\n';
	cout << "The largest temperature is " << max << '\n';
	cout << "The mean is " << mean << '\n';
}
