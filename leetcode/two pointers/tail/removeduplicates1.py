# description : https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/ # NOQA
# author : Hussam
# solution : two pointers
# o(n) time, o(1) space


class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if nums is None or len(nums) <= 1:
            return len(nums)

        tail = 1
        for i in range(1, len(nums)):
            if nums[i] != nums[tail - 1]:
                nums[tail] = nums[i]
                tail += 1

        return tail
