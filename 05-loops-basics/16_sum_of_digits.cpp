/*
16. Sum of Digits
Write a program to calculate the sum of all digits of a given number.
*/
#include <iostream>
using namespace std;

int main() {
    long long number;
    int sum = 0;

    cout << "Enter the number: ";
    cin >> number;

    if (number < 0) number = -number;

    while (number != 0) {
        sum = sum + number % 10;
        number = number / 10;
    }

    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
