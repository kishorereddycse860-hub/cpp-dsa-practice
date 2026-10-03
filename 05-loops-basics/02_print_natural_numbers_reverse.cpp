// Print all natural numbers from n to 1 using a while loop
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int i = num;
    while (i >= 1) {
        cout << i << endl;
        i--;
    }

    return 0;
}
