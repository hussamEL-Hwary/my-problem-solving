//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :https://leetcode.com/problems/rotate-list/description/
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
    
  
  ListNode* rotateRight(ListNode* head, int k) {
      
	  if(!head)
		  return head;
		  
	  int count=1;
      ListNode *ite=head;
      while(ite->next)
      {
    	  count++;
    	  ite=ite->next;
      }
     
      
      ite->next=head;
      if(k%=count){
      for(int i=0;i<count-k;i++)
      
    	  ite=ite->next;
      }
      ListNode *rethead= ite->next;
      ite->next=NULL;
      
	  
	  return rethead;
      }
};