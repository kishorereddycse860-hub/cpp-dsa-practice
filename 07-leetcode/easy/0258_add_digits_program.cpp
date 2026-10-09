/*
258. Add Digits
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
https://leetcode.com/problems/add-digits/
Example: 38 -> 3 + 8 = 11 -> 1 + 1 = 2
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int rem, sum = 0;
    while (n != 0) {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    while (sum >= 10) {
        int total = 0;
        while (sum != 0) {
            total = total + sum % 10;
            sum = sum / 10;
        }
        sum = total;
    }
    cout << "Result: " << sum << endl;
    return 0;
}
