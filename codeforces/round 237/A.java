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
		int n = cin.nextInt(),k=cin.nextInt();
		int arr[]=new int[n];
		ArrayList<Integer>res=new ArrayList<Integer>();
		
		for(int i=0;i<n;i++)
		{
			arr[i]=cin.nextInt();
		}
		int num=0;
		for(int i=0;i<n;i++)
		{
			int ind=0;
			for(int j=0;j<n;j++)
			{
				if(arr[j]<arr[ind])
				{
					ind=j;
				}
			}
			if(k-arr[ind]>=0)
			{
				num++;
				res.add(ind+1);
				k-=arr[ind];
				arr[ind]=10001;
			}
			else
				break;
			
		}
		System.out.println(num);
		for(int i=0;i<res.size();i++)
		{
			System.out.print(res.get(i)+" ");
		}
	}
}