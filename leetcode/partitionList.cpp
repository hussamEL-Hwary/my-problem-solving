//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :https://leetcode.com/problems/partition-list/description/
//============================================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    
    ListNode* partition(ListNode* head, int x) {

     ListNode *left=new ListNode(0);
     ListNode *right=new ListNode(0);
     ListNode *lcou=left;
     ListNode *rcou=right;
     while(head)
     {
    	 if(head->val<x)
    	 {
    		 ListNode *tmp=new ListNode(head->val);

    		 lcou->next=tmp;
    		 lcou=lcou->next;
    	 }
    	 else
    	 {
    		 ListNode *tmp=new ListNode(head->val);

    		  rcou->next=tmp;
    		  rcou=rcou->next;
    	 }
    	 head=head->next;
     }
     if(left==lcou)
    	 return right->next;
     else
     {
    	 lcou->next=right->next;
    	 return left->next;
     }



    }
};