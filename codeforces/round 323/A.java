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
          
		  int arr[][]=new int[51][51];
		  ArrayList<Integer>res=new ArrayList<Integer>();
		  
		  int n=cin.nextInt();
		  for(int i=1;i<=n*n;i++)
		  {
			  int ro=cin.nextInt(),co=cin.nextInt();
			  if(arr[ro][co]!=1)
			  {
				  res.add(i);
				  for(int k=1;k<=n;k++)
				  {
					  arr[ro][k]=1;
				  }
				  for(int k=1;k<=n;k++)
				  {
					  arr[k][co]=1;
				  }
			  }
			  
		  }
      
		for(int i=0;i<res.size();i++)
		{
			System.out.print(res.get(i)+" ");
		}
		  
		
		

		}

	}