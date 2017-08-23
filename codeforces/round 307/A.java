//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

import java.util.ArrayList;
import java.util.Scanner;;

public class mycode {

	public static void main(String[] args) {

		Scanner cin = new Scanner(System.in);
                   
       int n=cin.nextInt();
       int valus[]=new int[n];
       
      for(int i=0;i<n;i++)
      {
    	  valus[i]=cin.nextInt();
      }
      
      for(int i=0;i<n;i++)
      {
            int res=1;
    	  for(int j=0;j<n;j++)
    	  {
    		  if(valus[j]>valus[i])
    			  res++;
    	  }
    	  System.out.print(res+" ");
      }
      
	
	
	
	
	
	}}