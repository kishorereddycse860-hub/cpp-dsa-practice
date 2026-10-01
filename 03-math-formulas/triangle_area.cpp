/*
Problem: Take the base and height of a triangle and calculate its area.
Formula: Area = (Base * Height) / 2
Approach: Read both values as double, validate they are positive, apply the formula.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    double base, height;

    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    if (base <= 0 || height <= 0) {
        cout << "Base and height must be positive." << endl;
        return 0;
    }

    double area = (base * height) / 2;

    cout << "Area of the triangle: " << area << endl;

    return 0;
}
