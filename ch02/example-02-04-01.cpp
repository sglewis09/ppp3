// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Example 2.3.2` - page 33
// Read and write first and last names

//--- Comment out and use include until If figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	cout << "Please enter a floating-point value: ";

	double n = 0;
	cin >> n;

	cout << "n == " << n
		<< "\nn+1 == " << n+1
		<< "\nthree times n == " << 3*n
		<< "\ntwice n == " << n+n
		<< "\nn squared == " << n*n
		<< "\nhalf of n == " << n/2
		<< "\nsquare root of n == " << sqrt(n)
		<< '\n';
}
