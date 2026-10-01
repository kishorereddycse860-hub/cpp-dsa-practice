/*
Problem: Take the length and breadth of a rectangle and calculate its area and perimeter.
Formula: Area = Length * Breadth
         Perimeter = 2 * (Length + Breadth)
Approach: Read both sides as double, validate they are positive, apply the formulas.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    double length, breadth;

    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the breadth: ";
    cin >> breadth;

    if (length <= 0 || breadth <= 0) {
        cout << "Length and breadth must be positive." << endl;
        return 0;
    }

    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;
}
