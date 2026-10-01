/*
Problem: Take Principal, Rate, and Time from the user and calculate
         Compound Interest and Total Amount.
Formula: Amount = P * (1 + R/100)^T
         CI = Amount - P
Approach: Read the values as double, use pow() from <cmath> for the power,
          print with 2 decimals.
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
#include <cmath>
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

    double amount = principal * pow(1 + rate / 100, time);
    double ci = amount - principal;

    cout << fixed << setprecision(2);
    cout << "Total Amount: " << amount << endl;
    cout << "Compound Interest: " << ci << endl;

    return 0;
}
