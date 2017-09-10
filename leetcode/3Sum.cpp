//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :https://leetcode.com/problems/3sum/description/
//============================================================================

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        int se,la;
        for(int fi=0;fi<nums.size();fi++)
        
        {
            if(fi==0||nums[fi]!=nums[fi-1])
            {
            se=fi+1;
            la=nums.size()-1;
            while(se<la)
            {
            if(nums[fi]+nums[se]+nums[la]==0)
            {
                vector<int>tmp(3);
                tmp[0]=nums[fi];
                tmp[1]=nums[se];
                tmp[2]=nums[la];
                res.push_back(tmp);
           
           while(se<la&&nums[se]==nums[se+1])
           se++;
           while(se<la&&nums[la]==nums[la-1])
           la--;
           
           se++;
           la--;
               
            }
            else if(nums[fi]+nums[se]+nums[la]<0)
            {
                se++;
               
            }
           else
           la--;
          
            }
            
            }
           
            
                
            }
            
        
        return res;
    }
};