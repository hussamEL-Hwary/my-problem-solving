# author: Hossam
# description: https://leetcode.com/problems/squares-of-a-sorted-array/
# time: O(n), space: O(n)

class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        for i, x in enumerate(A):
            A[i]=x*x
        return sorted(A)
        