// 2520. Count the Digits That Divide a Number | Easy
// https://leetcode.com/problems/count-the-digits-that-divide-a-number/
// Approach: peel each digit with % 10 and check if it divides the original number
// Time: O(log num) | Space: O(1)

class Solution {
public:
    int countDigits(int num) {
        int original=num;
        int count=0;
        while(num!=0){
            int digit = num%10;
            if(original%digit==0){
                count++;
            }
            num=num/10;
        }
        return count;
    }
};
