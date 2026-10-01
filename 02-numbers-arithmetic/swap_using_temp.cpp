/*
Problem: Take two numbers from the user and swap their values using a third variable.
Approach: Store a in temp, copy b into a, then copy temp into b.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
