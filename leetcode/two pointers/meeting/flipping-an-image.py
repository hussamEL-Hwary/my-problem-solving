# Author: Hussam
# description: https://leetcode.com/problems/flipping-an-image/
# time: O(n*m), space: O(1)


class Solution:
    def flipAndInvertImage(self, A: List[List[int]]) -> List[List[int]]:
        for row in A:
            i = 0
            j = len(row)-1
            
            # two pointers
            while i<j:
                # flipping the digits if are the same
                if row[i] == row[j]:
                    row[i] = 1-row[i]
                    row[j] = 1-row[j]
                i+=1
                j-=1
                
            if i==j:
                row[i] = 1-row[i]
        return A
                    