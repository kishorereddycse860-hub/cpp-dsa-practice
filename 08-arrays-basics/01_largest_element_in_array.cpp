/*
Find the largest number in the array.
*/
#include <iostream>
using namespace std;

int main() {
    int arr[7];
    cout << "Enter the array elements: ";
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "The largest element is: " << largest << endl;

    return 0;
}
