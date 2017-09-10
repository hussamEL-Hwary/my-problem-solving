//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :https://leetcode.com/problems/valid-palindrome/description/
//============================================================================

class Solution {
public:
    bool isPalindrome(string s) {
    int left=0,right=s.size()-1;
    while(left<right)
    {
        while(left<right&&!isalpha(s[left])&&!isdigit(s[left]))
        left++;
        while(left<right&&!isalpha(s[right])&&!isdigit(s[right]))
        right--;
        
        if(tolower(s[left])!=tolower(s[right]))
        return false;
        left++;
        right--;
        
    }
        
        return true;
    }
};