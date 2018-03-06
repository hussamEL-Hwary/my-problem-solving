# description : https://leetcode.com/problems/minimum-size-subarray-sum/description/ # NOQA
# author : Hussam
# solution : two pointers
# o(n) time, o(1) space


class Solution(object):
    def minSubArrayLen(self, s, nums):
        """
        :type s: int
        :type nums: List[int]
        :rtype: int
        """
        min_nums = sys.maxsize
        target = 0
        head = 0

        for i in range(len(nums)):
            target += nums[i]
            while target >= s:
                min_nums = min(min_nums, i - head + 1)
                target -= nums[head]
                head += 1

        return min_nums if min_nums <= len(nums) else 0
