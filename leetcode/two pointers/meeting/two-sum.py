# description : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
# author : Hussam
# solution : two pointers
# o(n) time, o(1) space
class Solution:
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        left, right = 0, len(numbers)-1
        while left < right:
            if numbers[left]+numbers[right] == target:
                return (left+1, right+1)
            elif numbers[left]+numbers[right] < target:
                left += 1
            else:
                right -= 1
