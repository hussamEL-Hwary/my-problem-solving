#author: Hussam
#description: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    
    def findTarget(self, root, k):
        """
        :type root: TreeNode
        :type k: int
        :rtype: bool
        """
        uni=set()
        return self.check(root, k, uni)
        
    def check(self, root, k,uni):    
        if not root:
            return False
        if k-root.val in uni:
            return True
        uni.add(root.val)
        return self.check(root.left, k, uni) or self.check(root.right, k, uni)
            