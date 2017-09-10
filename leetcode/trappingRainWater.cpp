//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :https://leetcode.com/problems/trapping-rain-water/description/
//============================================================================

class Solution {
public:
   

int trap(vector<int>& height) {

   int l=0,r=height.size()-1,water=0;
   while(l<r&&height[l+1]>height[l])
	   l++;
   while(l<r&&height[r-1]>height[r])
	   r--;
   while(l<r)
   {
	   int left=height[l],right=height[r];
	   if(left<right)
	   {
		   while(l<r&&height[l]<=left)
		   {
			   water+=(left-height[l]);
			   l++;
		   }
	   }
	   else
	   {
		   while(l<r&&height[r]<=right)
		   {
			   water+=(right-height[r]);
			   r--;
		   }
	   }

   }
return water;
   }
};