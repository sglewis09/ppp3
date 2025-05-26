// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Example 3.6.3 A numeric example
// Page 74
// Compute mean and median temperatures

//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	vector<double> temps;			// temperatures
	
	cout << "Enter several temperatures: (end with <ctl>-d)\n";

	for(double temp; cin >> temp; )	// read in temperatures
		temps.push_back(temp);		// put temp into vector

	// compute mean temperature
	double sum = 0;

	// loop through all the temperature values
	for (double x : temps)
		sum += x;

	cout << "Average temperature: " << sum/temps.size() << '\n';

	// compute median temperature:
	ranges::sort(temps);	// sort the temperatures
	cout << "Median temperature: " << temps[temps.size()/2] << '\n';
}
