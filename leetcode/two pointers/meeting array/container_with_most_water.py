# description : https://leetcode.com/problems/container-with-most-water/description/ # NOQA
# author : Hussam
# solution : two pointers
# o(n) time, o(1) space


class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        left, right = 0, len(height)-1
        water_amount = 0
        while left < right:
            water_amount = max(water_amount,
                               min(height[left], height[right]) *
                               (right-left)
                               )
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
        return water_amount
