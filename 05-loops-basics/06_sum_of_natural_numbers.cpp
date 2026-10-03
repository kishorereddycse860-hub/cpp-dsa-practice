/*
6. Sum of Natural Numbers
Write a program to find the sum of all natural numbers from 1 to n.
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
        sum += i;
        i++;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
