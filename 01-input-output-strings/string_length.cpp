/*
Problem: Take a word from the user and print its length.
Approach: Read the word using cin, then use the string's built-in length() function.
Time Complexity: O(1) for length(), O(n) for reading the input
Space Complexity: O(n)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    cout << "Enter a word: ";
    cin >> word;

    cout << "Length of the word: " << word.length() << endl;

    return 0;
}
