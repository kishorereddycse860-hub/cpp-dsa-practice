/*
Problem: Take a number from the user and print its square, cube, and square root.
Approach: Square = n*n, cube = n*n*n, square root using sqrt() from <cmath>.
          Use long long to avoid overflow, and check for negative input before sqrt().
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    long long square = static_cast<long long>(num) * num;
    long long cube = square * num;

    cout << "Square: " << square << endl;
    cout << "Cube: " << cube << endl;

    if (num >= 0) {
        cout << "Square root: " << sqrt(num) << endl;
    } else {
        cout << "Square root: not a real number (negative input)" << endl;
    }

    return 0;
}
