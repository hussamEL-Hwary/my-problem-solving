# Author: Hussam
# description: https://leetcode.com/problems/remove-outermost-parentheses/
# time: O(n), space: O(1)


class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        diff = x^y
        res = 0
        while diff:
            res +=1
            diff &= diff-1
        return res