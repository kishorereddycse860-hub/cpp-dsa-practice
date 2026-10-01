/*
Problem: Take the side of an equilateral triangle and calculate its area.
Formula: Area = (sqrt(3) / 4) * side^2
Approach: Read the side as double, validate it is positive,
          use sqrt() from <cmath>, print with 2 decimals.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double side;

    cout << "Enter the side of the equilateral triangle: ";
    cin >> side;

    if (side <= 0) {
        cout << "Side must be positive." << endl;
        return 0;
    }

    double area = (sqrt(3.0) / 4) * (side * side);

    cout << fixed << setprecision(2);
    cout << "Area of the equilateral triangle: " << area << endl;

    return 0;
}
