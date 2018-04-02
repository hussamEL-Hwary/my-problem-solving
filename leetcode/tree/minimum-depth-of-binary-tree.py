#author: Hussam
#description: https://leetcode.com/problems/minimum-depth-of-binary-tree/description/
#time: O(n), space: O(logn)
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution(object):
    def minDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return 0

        queue = [root]
        depth = 1
        while queue != []:
            sz = len(queue)
            for _ in range(sz):
                node = queue.pop(0)
                if node.left is not None:
                    queue.append(node.left)
                if node.right is not None:
                    queue.append(node.right)
                if node.left is None and node.right is None:
                    return depth

            depth += 1
