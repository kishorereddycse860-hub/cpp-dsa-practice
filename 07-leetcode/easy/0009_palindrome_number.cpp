// 9. Palindrome Number | Easy
// https://leetcode.com/problems/palindrome-number/
// Approach: reverse the number and compare it with the original; negatives are never palindromes
// Time: O(log n) | Space: O(1)

class Solution {
public:
    bool isPalindrome(int num) {
        long long original=num;
        int rem;
        long long rev=0;
        if(num<0){
            return 0;
        }
        while(num!=0){
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        if(original==rev){
            return true;
        }
        else{
            return false;
        }
    }
};
