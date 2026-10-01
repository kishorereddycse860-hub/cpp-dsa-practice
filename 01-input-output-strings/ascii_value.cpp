/*
Problem: Take a character from the user and print its ASCII value.
Approach: Read the character using cin, then type-cast it to int to get its ASCII value.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "ASCII value of '" << ch << "' is: " << static_cast<int>(ch) << endl;

    return 0;
}
