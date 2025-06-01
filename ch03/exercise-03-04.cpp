// Programming: Principles and Practice Using C++ - 3rd Edition
// by Bjarne Stroustrup
// 
// Chapter 3
// Exercis3 4
// Page 79
// Read a sequence of double values into a vector. Think of each value as the
// distance between two cities along a given route. Compute and print the total
// distance (the sum of all distances). Find and print the smallest and
// greatest distance between two neighboring cities. Find and print the mean
// distance between two neighboring cities.

//--- Comment out and use include until I figure how to compile with modules
// import std;
#include "PPPheaders.h"

int main()
{
	vector<double> distances;
  double distance(0);
  char terminate;

  cout << "Enter a list of distances (real numbers) or '|' to exit:\n";

  while (true) {
    if (!(cin >> distance)) {
      cin.clear();  // clear the error flag
      cin >> terminate;

      if (terminate == '|') {
        cout << "Exiting program...\n";
        break;
      } else {
        cout << "Invalid input. Please enter real numbers or '|'.\n";

        // Discard Invalid input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      }
    } else {
      distances.push_back(distance);
    }
  }

  ranges::sort(distances);

  double total_distance(0);
  for (double d : distances) {
    total_distance += d;
  }
  
  double leg_count = distances.size();
  double min = distances[0];
  double max = distances[leg_count-1];
  double mean = (max - min) / leg_count;

  cout << "\nHere is a sorted list of your entries:\n";
  for (double d: distances) {
    cout << d << '\n';
  }

  cout << "\nThe shortest leg is " << min << '\n';
  cout << "The longest leg is " << max << '\n';
  cout << "The mean is " << mean << '\n';
}
