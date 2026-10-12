// 1752. Check if Array Is Sorted and Rotated | Easy
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
// Approach: count positions where nums[i] > next element (circular); a rotated sorted array has at most 1
// Time: O(n) | Space: O(1)

class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] > nums[(i+1) % n]){
                count++;
            }
        }
        return count<=1;
    }
};
