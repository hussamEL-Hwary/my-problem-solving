//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :https://leetcode.com/problems/4sum/description/
//============================================================================

class Solution {
public:
 vector<vector<int> > fourSum(vector<int>& nums, int target) {
    vector<vector<int> >res;
if(nums.size()<4)
return res;
    
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-3;i++)
    {

    if(i==0||nums[i]!=nums[i-1])
   {
    	if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target)  break;
    	if(nums[i]+nums[nums.size()-3]+nums[nums.size()-2]+nums[nums.size()-1]<target) continue;
    	for(int sec=i+1;sec<nums.size()-2;sec++) 
    	{
    		if(sec==(i+1)||nums[sec]!=nums[sec-1])
    		{
    			if(nums[i]+nums[sec]+nums[sec+1]+nums[sec+2]>target) break;
    			if(nums[i]+nums[sec]+nums[nums.size()-2]+nums[nums.size()-1]<target) continue;
    			
    		int left=sec+1,right=nums.size()-1;
    		while(left<right)
    		{
    			int check=nums[i]+nums[sec]+nums[left]+nums[right];
    		
    			if(check<target)
    				left++;
    			else if(check>target)
    				right--;
    		
    			else
    			{
    				vector<int>tmp(4);
    				tmp[0]=nums[i];
    				tmp[1]=nums[sec];
    				tmp[2]=nums[left];
    				tmp[3]=nums[right];
    				res.push_back(tmp);
    			
    			do{left++;} while(left<right&&nums[left]==nums[left-1]); 
    			do{right--;} while(right>left&&nums[right]==nums[right+1]) ;
    			}
    		

    		}
    		
    	}

    	}

   }


    }
    return res;

    }

};
