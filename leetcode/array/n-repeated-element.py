# author: Hossam
# description: https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
# time: O(n), space: O(n)

class Solution:
    def repeatedNTimes(self, A: List[int]) -> int:
        unique_numbers = {}
        for i in A:
            if i in unique_numbers:
                return i
            else:
                unique_numbers[i]=0
        