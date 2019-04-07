# Author: Hussam
# description: https://leetcode.com/problems/remove-outermost-parentheses/
# time: O(n), space: O(n)


class Solution:
	def removeOuterParentheses(self, S: str) -> str:
		stack = []
		result = ""
		for s in S:
			if s == '(':
				stack.append(s)
				if len(stack) > 1:
					result += s
			else:
				if len(stack) > 1:
					result += ")"
				stack.pop()
		return result
