/*
Problem: Take two numbers from the user and swap their values without using a third variable.
Approach: Use arithmetic operations:
          a = a + b  -> a holds the sum of both
          b = a - b  -> b becomes the original a
          a = a - b  -> a becomes the original b
Note: The built-in swap(a, b) also does this in real code.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
