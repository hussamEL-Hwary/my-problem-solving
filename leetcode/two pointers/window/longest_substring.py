# description : https://leetcode.com/problems/longest-substring-without-repeating-characters/description/ # NOQA
# author : Hussam
# solution : two pointers
# o(n) time, o(1) space


class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        unique_ele = set()
        head = 0
        max_string = 0

        for i in range(len(s)):
            while s[i] in unique_ele:
                unique_ele.remove(s[head])
                head += 1
            unique_ele.add(s[i])
            max_string = max(max_string, i - head + 1)

        return max_string
