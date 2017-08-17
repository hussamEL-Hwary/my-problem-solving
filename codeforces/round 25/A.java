//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

import java.io.File;
import java.util.*;

public class main {
	
	public static void main(String[] args) { 
		
		Scanner cin=new Scanner(System.in);
		int n=cin.nextInt();   //size of numbers
		
		int evev_count=0,odd_count=0,last_odd_index=0,last_even_index=0
				;
		for(int i=1;i<=n;i++)
		{
			int num=cin.nextInt();
			if(num%2==0)
			{
				evev_count++;
				last_even_index=i;
			}
			else
			{
				odd_count++;
				last_odd_index=i;
				
			}
			
		}
		if(evev_count==1)
		System.out.println(last_even_index);
		else
			System.out.println(last_odd_index);
		
	}   
}