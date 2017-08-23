//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

import java.util.*;

public class mycode {

	public static void main(String[] args) {

		Scanner cin = new Scanner(System.in);
     long minodd =100000000000L,res=0;
     int n=cin.nextInt();
     for(int i=0;i<n;i++)
     {
    	 int num=cin.nextInt();
    		res+=num;
    	if(num%2!=0&&num<minodd)
    	{
    		minodd=num;
    	}
    	 
     }
     
     if(res%2==0)
    	 System.out.println(res);
     else
    	 System.out.println(res-minodd);
		
	}}