/*
Problem: Take the total number of days from the user and convert them
         into years, weeks, and remaining days.
Assume: 1 Year = 365 Days, 1 Week = 7 Days
Formula: Years = Total Days / 365
         Remaining Days = Total Days % 365
         Weeks = Remaining Days / 7
         Days = Remaining Days % 7
Approach: Use integer division (/) to get whole units and modulus (%)
          to get what is left over, step by step.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int totalDays;

    cout << "Enter the total number of days: ";
    cin >> totalDays;

    if (totalDays < 0) {
        cout << "Days cannot be negative." << endl;
        return 0;
    }

    int years = totalDays / 365;
    int remainingDays = totalDays % 365;
    int weeks = remainingDays / 7;
    int days = remainingDays % 7;

    cout << "Years: " << years << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << days << endl;

    return 0;
}
