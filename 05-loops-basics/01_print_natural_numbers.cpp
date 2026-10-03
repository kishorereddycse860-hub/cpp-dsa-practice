// Print all natural numbers from 1 to n using a for loop
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        cout << i << endl;
    }

    return 0;
}
