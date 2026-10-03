/*
10. ASCII Values
Write a program to print the ASCII value of characters from A to Z and a to z.
*/
#include <iostream>
using namespace std;

int main() {
    cout << "UPPER CASE" << endl;
    for (int i = 65; i <= 90; i++) {
        cout << char(i) << " = " << i << endl;
    }

    cout << "LOWER CASE" << endl;
    for (int i = 97; i <= 122; i++) {
        cout << char(i) << " = " << i << endl;
    }

    return 0;
}
