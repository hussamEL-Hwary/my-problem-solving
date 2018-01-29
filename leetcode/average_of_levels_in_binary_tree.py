# author Hussam
# description:https://leetcode.com/problems/average-of-levels-in-binary-tree/description/
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def averageOfLevels(self, root):
        """
        :type root: TreeNode
        :rtype: List[float]
        """
        # if tree is empty
        if root is None:
            return []
        # size of tree level nodes
        size = 1
        average = []
        nodes = []
        nodes.append(root)
        # BFS
        while nodes != []:
            old_size = size
            size = 0
            level_average = 0
            for i in range(old_size):
                current_node = nodes.pop(0)
                level_average += current_node.val
                if current_node.left is not None:
                    nodes.append(current_node.left)
                    size += 1
                if current_node.right is not None:
                    nodes.append(current_node.right)
                    size += 1
            level_average /= old_size
            average.append(level_average)
        return average
