/*
Problem: Take a distance in centimeters and convert it into meters and kilometers.
Formula: Meter = Centimeter / 100
         Kilometer = Centimeter / 100000
Approach: Read the distance as double, validate it, apply both formulas,
          print with fixed decimals to avoid scientific notation.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double cm;

    cout << "Enter the distance in centimeters: ";
    cin >> cm;

    if (cm < 0) {
        cout << "Distance cannot be negative." << endl;
        return 0;
    }

    double meters = cm / 100;
    double kilometers = cm / 100000;

    cout << fixed << setprecision(5);
    cout << "Meters: " << meters << endl;
    cout << "Kilometers: " << kilometers << endl;

    return 0;
}
