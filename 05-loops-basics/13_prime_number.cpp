/*
13. Prime Number
Write a program to check whether a given number is a prime number or not.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int result = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            result++;
        }
    }

    if (result == 2) {
        cout << "NUMBER IS PRIME" << endl;
    }
    else {
        cout << "NUMBER IS NOT A PRIME" << endl;
    }

    return 0;
}
