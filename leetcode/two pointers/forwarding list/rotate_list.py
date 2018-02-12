# description : https://leetcode.com/problems/rotate-list/description/ #NOQA
# author : Hussam
# solution : two pointers
# o(n) time, o(1) space
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution(object):
    def rotateRight(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        if head is None or head.next is None:
            return head

        k %= self.getLen(head)

        if k == 0:
            return head

        start = head
        prev = None
        itr = head
        tmp = (k - 1)

        while tmp > 0:
            itr = itr.next
            tmp -= 1

        while itr.next is not None:
            prev = start
            start = start.next
            itr = itr.next

        if prev is None:
            return head
        else:
            itr.next = head
            prev.next = None
            return start

    def getLen(self, head):
        n = 0
        while head is not None:
            n += 1
            head = head.next
        return n
