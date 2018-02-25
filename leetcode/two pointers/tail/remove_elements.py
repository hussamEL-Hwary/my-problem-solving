# description : https://leetcode.com/problems/remove-element/description/ # NOQA
# author : Hussam
# solution : two pointers
# o(n) time, o(1) space


class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        tail = 0
        for i in range(0, len(nums)):
            if nums[i] != val:
                nums[tail] = nums[i]
                tail += 1

        return tail
