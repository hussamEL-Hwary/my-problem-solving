# author: Hussam
# description: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/ # NOQA
# time: O(n), space: O(ln)
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        if root is None:
            return []

        queue = [root]
        result = []
        level = 0
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
            if level % 2 == 1:
                result.append(tmp[::-1])
            else:
                result.append(tmp)
            level += 1
        return result
