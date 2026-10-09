/*
2520. Count the Digits That Divide a Number
Given an integer num, return the number of digits in num that divide num.
An integer val divides nums if nums % val == 0.
https://leetcode.com/problems/count-the-digits-that-divide-a-number/
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int original = n;
    int rem, count = 0;

    while (n != 0) {
        rem = n % 10;
        if (rem != 0 && original % rem == 0) {
            count++;
        }
        n = n / 10;
    }

    cout << "Count of digits that divide the number: " << count << endl;

    return 0;
}
