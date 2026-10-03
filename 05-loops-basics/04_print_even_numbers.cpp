/*
4. Print Even Numbers
Write a program to print all even numbers between 1 and 100 using a while loop.
*/
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 100) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }

    return 0;
}
