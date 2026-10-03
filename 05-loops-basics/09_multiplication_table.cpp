/*
9. Multiplication Table
Write a program to print the multiplication table of a given number.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number to print table: ";
    cin >> n;

    // Alternative using a for loop:
    // for (int i = 1; i <= 10; i++) {
    //     cout << n << " * " << i << " = " << n * i << endl;
    // }

    int i = 1;
    while (i <= 10) {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    }

    return 0;
}
