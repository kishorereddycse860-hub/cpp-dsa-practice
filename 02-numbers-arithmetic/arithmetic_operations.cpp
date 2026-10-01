/*
Problem: Take two numbers from the user and print their sum, difference,
         product, quotient, and remainder.
Approach: Read two integers, apply +, -, *, /, % on them.
          Check for b == 0 before division and modulus to avoid a crash.
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

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;

    if (b != 0) {
        cout << "Quotient: " << a / b << endl;
        cout << "Remainder: " << a % b << endl;
    } else {
        cout << "Quotient and remainder not possible (division by zero)." << endl;
    }

    return 0;
}
