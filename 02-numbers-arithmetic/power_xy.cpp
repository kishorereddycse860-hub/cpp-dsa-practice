/*
Problem: Take two numbers x and y from the user and calculate x^y.
Approach: Multiply x by itself y times using a loop (exact integer result).
          The built-in pow(x, y) from <cmath> also works, but returns double.
Time Complexity: O(y)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (y): ";
    cin >> y;

    if (y < 0) {
        cout << "Negative exponent not supported for integer result." << endl;
        return 0;
    }

    long long result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }

    cout << x << "^" << y << " = " << result << endl;

    return 0;
}
