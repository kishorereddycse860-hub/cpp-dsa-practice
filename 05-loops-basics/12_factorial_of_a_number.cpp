/*
12. Factorial of a Number
Write a program to calculate the factorial of a given number.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers" << endl;
    }
    else {
        long long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        cout << "Factorial of the given number is: " << fact << endl;
    }

    return 0;
}
