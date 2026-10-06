/*
Find the second largest element in the array.
*/
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[6];
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first_largest = arr[0];
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first_largest) {
            first_largest = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > second_largest && arr[i] != first_largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        cout << "No second largest element" << endl;
    }
    else {
        cout << "The second largest element is: " << second_largest << endl;
    }

    return 0;
}
