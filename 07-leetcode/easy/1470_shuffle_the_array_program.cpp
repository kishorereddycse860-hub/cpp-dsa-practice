/*
1470. Shuffle the Array
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn],
return the array in the form [x1,y1,x2,y2,...,xn,yn].
https://leetcode.com/problems/shuffle-the-array/
Example: nums = [2,5,1,3,4,7], n = 3  ->  [2,3,5,4,1,7]
*/
#include <iostream>
using namespace std;

int main() {
    int nums[6], n = 6;
    cout << "Enter the array elements: ";
    for (int i = 0; i < 6; i++)
        cin >> nums[i];

    n = (sizeof(nums) / sizeof(nums[0])) / 2;   // half size (x half and y half)

    int result[6];
    for (int i = 0; i < n; i++) {
        result[2 * i] = nums[i];            // x value
        result[2 * i + 1] = nums[i + n];    // matching y value
    }

    for (int i = 0; i < 6; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
