//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
//============================================================================

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>res(2);
        int left=0,right=numbers.size()-1;
        while(left<right)
        {
            if(numbers[left]+numbers[right]==target)
            {
                res[0]=left+1;
                res[1]=right+1;
            
               break;
            }
            else if(numbers[left]+numbers[right]>target)
            {
                right--;
            }
            else
            left++;
        }
     return res;   
    }
};