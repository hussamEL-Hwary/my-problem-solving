# author: Hussam
# description: https://leetcode.com/problems/populating-next-right-pointers-in-each-node/description/ # NOQA
# time: O(n), space: O(logn)
# Definition for binary tree with next pointer.
# class TreeLinkNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
#         self.next = None


class Solution:
    # @param root, a tree link node
    # @return nothing
    def connect(self, root):
        if root is None:
            return
        queue = [root]
        while queue != []:
            prev = None
            sz = len(queue)
            for _ in range(sz):
                node = queue.pop(0)
                if prev is not None:
                    prev.next = node
                prev = node
                if node.left is not None:
                    queue.append(node.left)
                if node.right is not None:
                    queue.append(node.right)
            prev.next = None
