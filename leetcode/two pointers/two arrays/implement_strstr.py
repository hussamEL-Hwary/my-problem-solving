# description: https://leetcode.com/problems/implement-strstr/description/ # NOQA
# author : Hussam
# solution : two pointers
# o(n+m) time, o(1) space


class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        m = len(haystack)
        n = len(needle)

        for i in range(m + 1):
            for j in range(n + 1):
                if j == n:
                    return i
                if i + j == m:
                    return -1
                if haystack[j + i] != needle[j]:
                    break
