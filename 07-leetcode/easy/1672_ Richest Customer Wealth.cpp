#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int patients;
    cout << "How many patients? ";
    cin >> patients;

    vector<vector<int>> data(patients);

    for (int i = 0; i < patients; i++) {
        int size;
        cout << "Enter the size of patient " << i + 1 << ": ";
        cin >> size;

        data[i].resize(size);
        cout << "Enter the elements of patient " << i + 1 << ": ";
        for (int j = 0; j < size; j++) {
            cin >> data[i][j];
        }
    }

    int maxSum = INT_MIN;

    for (int i = 0; i < patients; i++) {
        int sum = 0;
        for (int j = 0; j < data[i].size(); j++) {
            sum = sum + data[i][j];
        }
        cout << "Sum of patient " << i + 1 << ": " << sum << endl;

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    cout << "Largest sum: " << maxSum << endl;

    return 0;
}
