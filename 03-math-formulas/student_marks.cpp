/*
Problem: Take marks of five subjects from the user and calculate the
         total marks, average marks, and percentage.
Assume: Each subject is out of 100 marks.
Formula: Total = S1 + S2 + S3 + S4 + S5
         Average = Total / 5
         Percentage = (Total / 500) * 100
Approach: Read five marks as int, validate each is in 0-100, then use
          double for average and percentage to keep decimal values.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int s1, s2, s3, s4, s5;

    cout << "Enter marks of subject 1: ";
    cin >> s1;
    cout << "Enter marks of subject 2: ";
    cin >> s2;
    cout << "Enter marks of subject 3: ";
    cin >> s3;
    cout << "Enter marks of subject 4: ";
    cin >> s4;
    cout << "Enter marks of subject 5: ";
    cin >> s5;

    if (s1 < 0 || s1 > 100 || s2 < 0 || s2 > 100 || s3 < 0 || s3 > 100 ||
        s4 < 0 || s4 > 100 || s5 < 0 || s5 > 100) {
        cout << "Marks must be between 0 and 100." << endl;
        return 0;
    }

    int total = s1 + s2 + s3 + s4 + s5;
    double average = total / 5.0;
    double percentage = (total * 100.0) / 500;

    cout << fixed << setprecision(2);
    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
