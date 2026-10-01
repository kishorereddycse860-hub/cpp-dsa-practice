/*
Problem: Take a name from the user and print a greeting message using that name.
Approach: Read the name using cin, then print the greeting text followed by the name.
Time Complexity: O(n), where n is the length of the name
Space Complexity: O(n)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Good morning, " << name << "!" << endl;

    return 0;
}
