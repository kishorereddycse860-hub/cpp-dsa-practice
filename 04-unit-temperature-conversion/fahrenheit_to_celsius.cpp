/*
Problem: Take a temperature in Fahrenheit from the user and convert it into Celsius.
Formula: Celsius = (Fahrenheit - 32) * 5/9
Approach: Read the temperature as double, subtract 32 first (use brackets),
          then multiply by 5.0/9 to keep decimal division.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    double fahrenheit;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) * 5.0 / 9;

    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}
