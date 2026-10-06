// 7. Reverse Integer | Medium
// https://leetcode.com/problems/reverse-integer/
// Approach: peel digits with % 10 and build rev in a wider type, then check the 32-bit range
// Time: O(log x) | Space: O(1)

class Solution {
public:
    int reverse(int n) {
        int remainder;
        long rev=0;
        while(n!=0){
            remainder=n%10;
            rev=rev*10+remainder;
            n=n/10;
        }
        if(rev>INT_MAX || rev<INT_MIN){
            return 0;
        }

        return rev;
    }
};
