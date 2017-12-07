#author: Hussam
#description:https://leetcode.com/problems/convert-bst-to-greater-tree/description/
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def convertBST(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        sum=0
        stack_of_nodes=[]
        tmp_node=root
        while stack_of_nodes  or tmp_node is not None:
            while tmp_node is not None:
                stack_of_nodes.append(tmp_node)
                tmp_node=tmp_node.right
                
            node=stack_of_nodes.pop()
            sum+=node.val
            node.val=sum
            tmp_node=node.left
        return root  