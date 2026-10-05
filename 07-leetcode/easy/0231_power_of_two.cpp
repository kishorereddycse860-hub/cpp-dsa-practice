// 231. Power of Two | Easy
// https://leetcode.com/problems/power-of-two/
// Approach: keep dividing n by 2 while it is even; a power of two ends at 1
// Time: O(log n) | Space: O(1)

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        while(n%2==0){
            n=n/2;
        }
        if(n==1){
            return true;
        }
        else{
            return false;
        }
    }
};
