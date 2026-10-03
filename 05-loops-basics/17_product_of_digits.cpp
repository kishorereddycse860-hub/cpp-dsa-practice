/*
17. Product of Digits
Write a program to calculate the product of all digits of a given number.
*/
#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter the number: ";
    cin >> n;

    if (n < 0) n = -n;

    long long product = 1;
    if (n == 0) {
        product = 0;
    }
    else {
        while (n != 0) {
            product = product * (n % 10);
            n = n / 10;
        }
    }

    cout << "Product of digits: " << product << endl;

    return 0;
}
