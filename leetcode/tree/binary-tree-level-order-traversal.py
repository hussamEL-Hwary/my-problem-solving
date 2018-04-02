# author: Hussam
#description: https://leetcode.com/problems/binary-tree-level-order-traversal/description/
# time: O(n), space: O(logn)
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        if root is None:
            return []

        queue = [root]
        result = []
        while queue != []:
            sz = len(queue)
            tmp = []
            for _ in range(sz):
                node = queue.pop(0)
                tmp.append(node.val)
                if node.left is not None:
                    queue.append(node.left)
                if node.right is not None:
                    queue.append(node.right)

            result.append(tmp)

        return result
