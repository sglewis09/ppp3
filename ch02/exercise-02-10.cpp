// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Chapter 2
// Exercise 10
// Write a program that takes an operations followed by two operands and
// outputs the result. For example:
// + 100 3.14
// = 103.14
// Read the operation into a string called operations and use an if statement
// to fibure out which operation the user wants, for example,
// if (operation=="+"). Read the operands into varibles of type double.
// Implement this for operations called +, -, *, /, plus, minus, mul, and div
// with their obvious meanings.
//
//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"
//
// #define DEBUG

int main()
{
	string operation;
	double operand1, operand2;

	cout << "Enter a an operation (+ - * / plus minus mul div)\n"
		<< "Followed by 2 doubles: ";
	cin >> operation >> operand1 >> operand2;

	if ((operation == "+") || (operation == "add"))
		cout << " = " << operand1 + operand2 << '\n';
	else if ((operation == "-") || (operation == "minus"))
		cout << " = " << operand1 - operand2 << '\n';
	else if ((operation == "*") || (operation == "mul"))
		cout << " = " << operand1 * operand2 << '\n';
	else if ((operation == "/") || (operation == "div"))
		if (operand2 == 0)
			cout << "Error: division by zero\n";
		else
			cout << " = " << operand1 / operand2 << '\n';
	else
		cout << "Unknown operator: " << operation << '\n';
}
