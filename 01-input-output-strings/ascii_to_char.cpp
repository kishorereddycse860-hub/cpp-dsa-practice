/*
Problem: Take an ASCII value from the user and print the corresponding character.
Approach: Read the number using cin, validate it is in 0-127, then type-cast it to char.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an ASCII value (0-127): ";
    cin >> num;

    if (num < 0 || num > 127) {
        cout << "Invalid ASCII value!" << endl;
    } else {
        cout << "Character for ASCII value " << num << " is: " << static_cast<char>(num) << endl;
    }

    return 0;
}
