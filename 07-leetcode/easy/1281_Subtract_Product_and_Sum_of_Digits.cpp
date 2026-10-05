// 1281. Subtract the Product and Sum of Digits of an Integer | Easy
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// Approach: extract each digit using % 10, calculate its sum and product, then subtract sum from product
// Time: O(log n) | Space: O(1)

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        int remainder;
        int result;

        while(n!=0){
            remainder=n%10;
            sum=remainder+sum;
            product=remainder*product;
            n=n/10;
        }

        result=product-sum;
        return result;
    }
};
