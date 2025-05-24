// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Chapter 2
// Exercise 11
// Write a program that prompts the user to enter some number of pennies
// (1-cent coins), nickles (5-cent coins), dimes (10-cent coins), quarters
// (25-cent coins), half dollars (50-cent coins), and dollar coins (100-cent
// coins). Query the user seperately for the number of each size coin, e.g.,
// "How many pennies do you have?"...
// Then your program should print out something like this:
// You have 23 pennies
// You have 17 nickles
// You have 14 dimes
// You have 7 quaters
// You have 3 half dollars
// You have 3 dollars
// The value of all of your coins is $8.73
// If only one of any coin is reported, make the output grammatically correct,
// e.g. 14 dimes or 1 dime (not 1 dimes). Also report the sum in dollars and
// cents. i.e. $8.73 insead of 873 cents
//
//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"
//
//#define DEBUG

int main()
{
	int penny_count(0);			// number of pennies
	const int penny_value(1);	// the value of a penny (in cents)
	cout << "How many pennies do you have? ";
	cin >> penny_count;

	int nickel_count(0);		// number of nickels
	const int nickel_value(5);	// the value of a nickel (in cents)
	cout << "How many nickels do you have? ";
	cin >> nickel_count;

	int dime_count(0);			// number of dimes
	const int dime_value(10);	// the value of a dime (in cents)
	cout << "How many dimes do you have? ";
	cin >> dime_count;

	int quarter_count(0);			// number of quarters
	const int quarter_value(25);	// the value of a quarter (in cents)
	cout << "How many quarters do you have? ";
	cin >> quarter_count;

	int half_dollar_count(0);			// number of half dollar coins
	const int half_dollar_value(50);	// the value of a half dollar (in cents)
	cout << "How many half dollar coins do you have? ";
	cin >> half_dollar_count;

	int dollar_count(0);			// number of dollar coins
	const int dollar_value(100);	// the value of a dollar (in cents)
	cout << "How many dollar coins do you have? ";
	cin >> dollar_count;

	int coin_value(0);		// the value of each coint (in cents)
	int total_value(0);		// the total value of all the coins (in cents)
	
	cout << "-----\n";

	coin_value = penny_count * penny_value;
	total_value = coin_value;

#ifdef DEBUG
	cout << "penny_count=" << penny_count << '\n';
	cout << "penny_value=" << penny_value << '\n';
	cout << "total_value=" << total_value << '\n';
#endif
	cout << "You have " << penny_count;

	if (penny_count == 1)
		cout << " penny, worth $";
	else
		cout << " pennies, worth $";

	cout << (penny_count*penny_value)/100 << "."
		<< (penny_count*penny_value)%100 << '\n';

	coin_value = nickel_count * nickel_value;
	total_value += coin_value;

#ifdef DEBUG
	cout << "nickel_count=" << nickel_count << '\n';
	cout << "coin_value=" << coin_value << '\n';
	cout << "total_value=" << total_value << '\n';
#endif
	cout << "You have " << nickel_count;

	if (nickel_count == 1)
		cout << " nickel, worth $";
	else
		cout << " nickels, worth $";

	cout << (nickel_count*nickel_value)/100 << "."
		<< (nickel_count*nickel_value)%100 << '\n';

	coin_value = dime_count * dime_value;
	total_value += coin_value;

#ifdef DEBUG
	cout << "dime_count=" << dime_count << '\n';
	cout << "coin_value=" << coin_value << '\n';
	cout << "total_value=" << total_value << '\n';
#endif
	cout << "You have " << dime_count;

	if (dime_count == 1)
		cout << " dime, worth $";
	else
		cout << " dimes, worth $";

	cout << (dime_count*dime_value)/100 << "."
		<< (dime_count*dime_value)%100 << '\n';

	coin_value = quarter_count * quarter_value;
	total_value += coin_value;

#ifdef DEBUG
	cout << "quarter_count=" << quarter_count << '\n';
	cout << "coin_value=" << coin_value << '\n';
	cout << "total_value=" << total_value << '\n';
#endif
	cout << "You have " << quarter_count;

	if (quarter_count == 1)
		cout << " quarter, worth $";
	else
		cout << " quarters, worth $";

	cout << (quarter_count*quarter_value)/100 << "."
		<< (quarter_count*quarter_value)%100 << '\n';

	coin_value = half_dollar_count * half_dollar_value;
	total_value += half_dollar_value;

#ifdef DEBUG
	cout << "half_dollar_count=" << half_dollar_count << '\n';
	cout << "coin_value=" << coin_value << '\n';
	cout << "total_value=" << total_value << '\n';
#endif
	cout << "You have " << half_dollar_count;

	if (half_dollar_count == 1)
		cout << " half dollar, worth $";
	else
		cout << " half dollars, worth $";

	cout << (half_dollar_count*half_dollar_value)/100 << "."
		<< (half_dollar_count*half_dollar_value)%100 << '\n';

	coin_value = dollar_count * dollar_value;
	total_value += coin_value;

#ifdef DEBUG
	cout << "dollar_count=" << dollar_count << '\n';
	cout << "coin_value=" << coin_value << '\n';
	cout << "total_value=" << total_value << '\n';
#endif
	cout << "You have " << dollar_count;

	if (dollar_count == 1)
		cout << " dollar, worth $";
	else
		cout << " dollars, worth $";

	cout << (dollar_count*dollar_value)/100 << "."
		<< (dollar_count*dollar_value)%100 << '\n';

	cout << "-----\nThe total value of all of your coins is $"
		<< total_value / 100 << "." << total_value % 100 << '\n';
}
