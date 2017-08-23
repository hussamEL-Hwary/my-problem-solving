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
		int k=cin.nextInt(), n = cin.nextInt();
		int arr[]=new int[n+1];
		
		for(int i=0;i<k;i++)
		{
			int in=cin.nextInt();
			for(int j=0;j<in;j++)
			{
				int val=cin.nextInt();
				arr[val]=1;
			}
			
		}
		
		for(int i=1;i<=n;i++)
		{
			if(arr[i]!=1)
			{
				System.out.println("NO");
				return;
			}
		}
		
		System.out.println("YES");
		
	}
}