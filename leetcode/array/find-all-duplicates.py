# description : https://leetcode.com/problems/find-all-duplicates-in-an-array/description/ # NOQA
# author : Hussam
# solution : array
# o(n) time, o(1) space

class Solution(object):
    def findDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res = []
        i = 0
        while i < len(nums):
            if nums[i] == i+1:
                i += 1
                continue
            if nums[i] == -1:
                i += 1
                continue
            if nums[i] == nums[nums[i]-1]:
                res.append(nums[i])
                nums[nums[i]-1] = -1
                i += 1
            elif nums[nums[i]-1] != -1:
                t = nums[i]
                nums[i], nums[t-1] = nums[nums[i]-1], t
            else:
                i += 1
        return res

