# auther: Hussam
# description: https://leetcode.com/problems/jewels-and-stones/
# time: O(n), spacce: O(n)


class Solution:
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """

        distinctJewels = {}
        result = 0

        # add distinct jewels in dictionary to easy search for them

        for i in J:
            distinctJewels[i] = True

        for i in S:
            if i in distinctJewels.keys():
                result += 1
        return result
