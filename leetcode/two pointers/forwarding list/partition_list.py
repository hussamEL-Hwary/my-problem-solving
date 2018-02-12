# description : https://leetcode.com/problems/partition-list/description/ #NOQA
# author : Hussam
# solution : two pointers
# o(n) time, o(1) space
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution(object):
    def partition(self, head, x):
        """
        :type head: ListNode
        :type x: int
        :rtype: ListNode
        """
        if head is None:
            return head
        tail = head

        while tail.next is not None:
            tail = tail.next

        last = tail
        prev = None
        itr = head

        while itr != last:
            while itr is not None and itr.val < x and itr != last:
                    prev = itr
                    itr = itr.next
            if (itr is not None and itr.val >= x and
                    prev is None and itr.next is not None):
                node = itr
                itr = itr.next
                head = itr
                node.next = None
                tail.next = node
                tail = tail.next
            elif (itr is not None and itr.val >= x and
                      prev is not None and itr.next is not None):
                node = itr
                prev.next = itr.next
                itr = itr.next
                node.next = None
                tail.next = node
                tail = tail.next

        if last.next is not None and last.val >= x:
            if prev is not None:
                prev.next = last.next
                last.next = None
                tail.next = last
            else:
                head = last.next
                last.next = None
                tail.next = last

        return head
