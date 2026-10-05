// 326. Power of Three | Easy
// https://leetcode.com/problems/power-of-three/
// Approach: keep dividing n by 3 while it is divisible; a power of three ends at 1
// Time: O(log n) | Space: O(1)

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        while(n%3==0){
            n=n/3;
        }
        return n==1;
    }
};
