# description : https://leetcode.com/problems/palindrome-linked-list/description/ # NOQA
# author : Hussam
# solution : two pointers
# o(n) time, o(1) space
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        if head is None:
            return True

        mid = self.get_mid_node(head)
        right = mid.next
        mid.next = None

        return self.compare(head, self.rotate(right))

    def get_mid_node(self, head):
        slow = head
        fast = head.next

        while fast is not None and fast.next is not None:
            fast = fast.next.next
            slow = slow.next

        return slow

    def rotate(self, head):
        prev = None
        while head is not None:
            temp = head.next
            head.next = prev
            prev = head
            head = temp

        return prev

    def compare(self, h1, h2):
        while h1 is not None and h2 is not None:
            if h1.val != h2.val:
                return False
            h1 = h1.next
            h2 = h2.next

        return True
