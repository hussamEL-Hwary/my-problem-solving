# Author : Hussam
# description : https://leetcode.com/problems/3sum-closest/description/
# solution : two pointers
# o(n^2) time, o(1) space


class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        nums.sort()
        res = sys.maxint
        for i in range(len(nums)):
            left, right = i + 1, len(nums)-1
            while(left < right):
                temp = nums[i] + nums[left] + nums[right]
                if abs(temp - target) < abs(res - target):
                    res = temp
                if temp == target:
                    return temp
                elif temp < target:
                    left += 1
                else:
                    right -= 1
        return res
