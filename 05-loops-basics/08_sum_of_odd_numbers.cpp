/*
8. Sum of Odd Numbers
Write a program to find the sum of all odd numbers between 1 and n.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;

    cout << "Enter the number: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }

    cout << "Sum of odd numbers: " << sum << endl;

    return 0;
}
