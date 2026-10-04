/*
20. Swap First and Last Digit
Write a program to swap the first and last digit of a given number.
*/
#include <iostream>
using namespace std;

int main() {
    int temp;
    long long n;
    long long last;
    long long first;
    cout << "Enter the number: ";
    cin >> n;

    last = n % 10;
    while (n >= 10) {
        n = n / 10;
    }
    first = n;

    cout << "BEFORE SWAPPING" << endl;
    cout << "Last number is: " << last << endl;
    cout << "First number is: " << first << endl;

    cout << "AFTER SWAPPING" << endl;
    temp = first;
    first = last;
    last = temp;

    cout << "Last number is: " << last << endl;
    cout << "First number is: " << first << endl;

    return 0;
}
