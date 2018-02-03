# Author : Hussam
# description : https://leetcode.com/problems/3sum/description/
# solution : two pointers
# o(n^2) time, o(n) space


class Solution:
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        # if array is empty
        if nums is None or len(nums) < 3:
            return []
        # sort numbers and implement two pointer
        result = []
        nums.sort()
        for i in range(len(nums)):
            if i == 0 or nums[i] != nums[i - 1]:
                left, right = i + 1, len(nums)-1
                while left < right:
                    if nums[i] + nums[left] + nums[right] == 0:
                        result.append((nums[i], nums[left], nums[right]))
                        while left < right and nums[left] == nums[left + 1]:
                            left += 1
                        while left < right and nums[right] == nums[right - 1]:
                            right -= 1
                        left += 1
                        right -= 1
                    elif nums[i] + nums[left] + nums[right] < 0:
                        left += 1
                    else:
                        right -= 1
        return result
