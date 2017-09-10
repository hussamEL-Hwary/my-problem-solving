//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :https://leetcode.com/problems/add-two-numbers/description/
//============================================================================

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
   	
		public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
		   
		   String first="",second="";
		   
		   while(l1!=null)
		   {
		       first+=(l1.val+"");
		       l1=l1.next;
		   }
		   
		   while(l2!=null)
		   {
		       second+=(l2.val+"");
		       l2=l2.next;
		   }
		   
		  
		   if(first.length()<second.length())
		   {
			  
		       String tmp=new String("");
		       int cou=second.length()-first.length();
			   for(int i=0;i<cou;i++)
		       {
		    
		           tmp+="0";
		    	 
		       }
			   first=first+tmp;
		   }
		   else
		   {
			   String tmp=new String("");
			   int cou=first.length()-second.length();
		       for(int i=0;i<cou;i++)
		       {
		           tmp+="0";

		       }
		       second=second+tmp;
		   }

 
		   ListNode res=new ListNode(0);
		   ListNode head=res;
		   int remender=0;
		   
		   for(int i=0;i<first.length();i++)
		   {
		    int val= (first.charAt(i)-'0')+(second.charAt(i)-'0')+remender;
		    ListNode tmp=new ListNode(val%10);
		    val/=10;
		    remender=val;
		    res.next=tmp;
		    res=res.next;
		   }
		   
		   if(remender>0)
		  {
		  
		      ListNode tmp=new ListNode(remender);
		      res.next=tmp;  
		  }
		   
		   return head.next;
		   
		    }
}