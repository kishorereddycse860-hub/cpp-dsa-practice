/*
18. Reverse a Number
Write a program to reverse a given number.
*/
#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter the number: ";
    cin >> n;

    long long l_digit;
    long long rev = 0;

    while (n != 0) {
        l_digit = n % 10;
        rev = rev * 10 + l_digit;
        n = n / 10;
    }

    cout << "Reverse of the number: " << rev << endl;

    return 0;
}
