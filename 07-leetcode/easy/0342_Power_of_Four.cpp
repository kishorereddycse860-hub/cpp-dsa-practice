// 342. Power of Four | Easy
// https://leetcode.com/problems/power-of-four/
// Approach: keep dividing n by 4 while it is divisible; a power of four ends at 1
// Time: O(log n) | Space: O(1)

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }

        while(n%4==0){
            n=n/4;
        }

        if(n==1){
            return true;
        }
        else{
            return false;
        }
    }
};
