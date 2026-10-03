/*
15. First and Last Digit
Write a program to find the first digit and last digit of a given number.
*/
#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter the number: ";
    cin >> n;

    if (n < 0) n = -n;

    int last = n % 10;
    while (n >= 10) {
        n = n / 10;
    }
    int first = n;

    cout << "First digit is: " << first << endl;
    cout << "Last digit is: " << last << endl;

    return 0;
}
