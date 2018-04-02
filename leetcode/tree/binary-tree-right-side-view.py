# author: Hussam
# description: https://leetcode.com/problems/binary-tree-right-side-view/description/ # NOQA
# time: O(n), space: O(logn)
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution(object):
    def rightSideView(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        if root is None:
            return []

        queue = [root]
        result = []
        level = 0

        while queue != []:
            sz = len(queue)
            for _ in range(sz):
                node = queue.pop(0)
                if len(result) == level:
                    result.append(node.val)
                if node.right is not None:
                    queue.append(node.right)
                if node.left is not None:
                    queue.append(node.left)
            level += 1

        return result
