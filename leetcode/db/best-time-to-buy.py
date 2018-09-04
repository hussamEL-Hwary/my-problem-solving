# description : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/ # NOQA
# author : Hussam
# solution : two pointers
# o(n) time, o(1) space

class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if prices is None or len(prices) == 0:
            return 0
        left = prices[0]
        right = prices[len(prices)-1]
        left_index = 0
        right_index = len(prices)-1
        temp_res = 0
        i = 1
        j = len(prices)-2

        while i < len(prices)-1 or j > 0:
            if prices[i] < left and i < right_index:
                left = prices[i]
                left_index = i
            else:
                temp_res = max(temp_res, prices[i]-left)
            if prices[j] > right and j > left_index:
                right = prices[j]
                right_index = j
            else:
                temp_res = max(temp_res, right - prices[j])
            i += 1
            j -= 1

        res = max(temp_res, right - left)
        if res < 0:
            return 0
        return res
