# Author: Hussam
# description: https://leetcode.com/problems/di-string-match/
# time: O(n), space: O(n)


import math
class Solution:
    def diStringMatch(self, S: str) -> List[int]:
        i = 0
        d = len(S)
        result = []
        for s in S:
            if s == 'I':
                result.append(i)
                i+=1
            else:
                result.append(d)
                d-=1
            
        result.append(math.ceil((i+d)/2))
        return result
        