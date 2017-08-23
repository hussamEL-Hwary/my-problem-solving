//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

import java.lang.reflect.Array;
import java.util.*;

public class mycode {

	public static void main(String[] args) {

		Scanner cin = new Scanner(System.in);
		int n = cin.nextInt(),mx=cin.nextInt();
		
		long k = 0;

		for(int i=0;i<n;i++)
		{
		k+=cin.nextLong();	
			
		}
	int res=0;
	if(Math.abs(k)%mx!=0)
		res++;
	res+=Math.abs(k)/mx;
	System.out.println(res);
		
	
	}
}