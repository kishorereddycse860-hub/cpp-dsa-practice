/*
Problem: Take the user's first name and last name and print the full name.
Approach: Read both names using cin, then join them with a space using string concatenation (+).
Time Complexity: O(n), where n is the total length of the names
Space Complexity: O(n)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName;

    cout << "Enter the first name: ";
    cin >> firstName;

    cout << "Enter the last name: ";
    cin >> lastName;

    cout << "Full name: " << firstName + " " + lastName << endl;

    return 0;
}
