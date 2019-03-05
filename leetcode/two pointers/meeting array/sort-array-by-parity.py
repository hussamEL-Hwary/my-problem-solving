# author: Hossam
# description: https://leetcode.com/problems/sort-array-by-parity/
# time: O(n), space: O(n)

class Solution:
    def sortArrayByParity(self, A: List[int]) -> List[int]:
        i=0
        j=len(A)-1
        while i<j:
            if A[j]%2==0 and A[i]%2 != 0:
                tmp = A[i]
                A[i] = A[j]
                A[j] = tmp
                i += 1 
                j -= 1
            elif A[i]%2 == 0:
                i +=1
            else:
                j -= 1
        return A
