/*
19. Palindrome Number
Write a program to check whether a given number is a palindrome or not.
*/
#include <iostream>
using namespace std;

int main() {
    long long number;
    cout << "Enter the number: ";
    cin >> number;

    long long original = number;
    long long digit;
    long long rev = 0;

    while (number != 0) {
        digit = number % 10;
        rev = rev * 10 + digit;
        number = number / 10;
    }

    if (original == rev) {
        cout << "The number is a palindrome" << endl;
    }
    else {
        cout << "The number is not a palindrome" << endl;
    }

    return 0;
}
