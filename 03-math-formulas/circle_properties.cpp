/*
Problem: Take the radius of a circle and calculate its diameter,
         circumference, and area.
Formula: Diameter = 2 * r
         Circumference = 2 * PI * r
         Area = PI * r * r
Approach: Read the radius as double, validate it, use a PI constant,
          print with 2 decimals.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (radius <= 0) {
        cout << "Radius must be positive." << endl;
        return 0;
    }

    double diameter = 2 * radius;
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    cout << fixed << setprecision(2);
    cout << "Diameter: " << diameter << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}
