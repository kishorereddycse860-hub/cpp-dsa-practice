/*
Problem: Take Principal, Rate, and Time from the user and calculate
         Simple Interest and Total Amount.
Formula: SI = (P * R * T) / 100
         Amount = P + SI
Approach: Read the three values as double, apply the formula, print with 2 decimals.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double principal, rate, time;

    cout << "Enter Principal: ";
    cin >> principal;
    cout << "Enter Rate (%): ";
    cin >> rate;
    cout << "Enter Time (years): ";
    cin >> time;

    double si = (principal * rate * time) / 100;
    double amount = principal + si;

    cout << fixed << setprecision(2);
    cout << "Simple Interest: " << si << endl;
    cout << "Total Amount: " << amount << endl;

    return 0;
}
