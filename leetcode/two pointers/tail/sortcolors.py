# description : https://leetcode.com/problems/sort-colors/description/ # NOQA
# author : Hussam
# solution : two pointers
# o(n) time, o(1) space


class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        itr = 0
        red, blue = 0, len(nums) - 1

        while itr <= blue:
            if nums[itr] == 0:
                nums[itr], nums[red] = nums[red], nums[itr]
                red += 1
            elif nums[itr] == 2:
                nums[itr], nums[blue] = nums[blue], nums[itr]
                blue -= 1
                itr -= 1

            itr += 1
