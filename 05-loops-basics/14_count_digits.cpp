/*
14. Count Digits
Write a program to count the number of digits in a given integer.
*/
#include <iostream>
using namespace std;

int main() {
    long long n;
    int result = 0;

    cout << "Enter the number: ";
    cin >> n;

    do {
        n = n / 10;
        result++;
    } while (n != 0);

    cout << "Number of digits: " << result << endl;

    return 0;
}
