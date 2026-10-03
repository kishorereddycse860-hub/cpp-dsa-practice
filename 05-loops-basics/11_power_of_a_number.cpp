/*
11. Power of a Number
Write a program to calculate base^power using a for loop.
*/
#include <iostream>
using namespace std;

int main() {
    int base, power;
    cout << "Enter the value of base: ";
    cin >> base;
    cout << "Enter the value of power: ";
    cin >> power;

    long long result = 1;
    for (int i = 0; i < power; i++) {
        result = result * base;
    }

    cout << "THE RESULT IS: " << result << endl;

    return 0;
}
