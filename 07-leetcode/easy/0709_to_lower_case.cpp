// 709. To Lower Case | Easy
// https://leetcode.com/problems/to-lower-case/
// Approach: for each uppercase letter (A-Z), add 32 to get its lowercase ASCII value
// Time: O(n) | Space: O(1)

class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
        return s;
    }
};

