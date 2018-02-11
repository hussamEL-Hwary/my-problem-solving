# description : https://leetcode.com/problems/trapping-rain-water/description/ # NOQA
# author : Hussam
# solution : two pointers
# o(n) time, o(1) space


class Solution(object):
    def trap(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        l, r = 0, len(height) - 1
        water = 0
        while l < r and height[l] <= height[l + 1]:
            l += 1
        while l < r and height[r] <= height[r - 1]:
            r -= 1
        while l < r:
            left = height[l]
            right = height[r]
            if left < right:
                while l < r and height[l] <= left:
                    water += left - height[l]
                    l += 1
            else:
                while l < r and height[r] <= right:
                    water += right - height[r]
                    r -= 1
        return water
