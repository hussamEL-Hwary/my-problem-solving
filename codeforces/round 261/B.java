//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

import java.util.*;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Scanner;;

public class mycode {

	public static void main(String[] args) {

		Scanner cin = new Scanner(System.in);
                   
       int n=cin.nextInt();
      
       
      ArrayList<Long>arr=new ArrayList<Long>(); 
       
         long ma=0,mn=100000000000L;
       
       for(int i=0;i<n;i++)
       {
    	long in=cin.nextLong();	
    	if(in>ma)
    		ma=in;
    	if(in<mn)
    		mn=in;
    	arr.add(in);
       }
       long r1=0,r2=0;
       for(int i=0;i<n;i++)
       {
       if(arr.get(i)==mn)
    	   r1++;
       if(arr.get(i)==ma)
    	   r2++;
       }       
	 
      
       System.out.print((ma-mn)+" ");
       if(mn==ma)
       {
    	   System.out.println((r1-1)*r1/2);
       }
       else
    	   System.out.println(r1*r2);
       
	
	}}