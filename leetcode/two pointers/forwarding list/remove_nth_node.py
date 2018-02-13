# description : https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/ # NOQA
# author : Hussam
# solution : two pointers
# o(n) time, o(1) space
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        dummy = cur = ListNode(0)
        dummy.next = head
        
        for _ in range(n):
            head = head.next
            
        while head is not None:
            head = head.next
            cur = cur.next
        
        cur.next = cur.next.next
        return dummy.next
