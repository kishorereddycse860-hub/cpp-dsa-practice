/*
Problem: Take a temperature in Celsius from the user and convert it into Fahrenheit.
Formula: Fahrenheit = (Celsius * 9/5) + 32
Approach: Read the temperature as double, use 9.0/5 to keep decimal division,
          apply the formula.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    double celsius;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
