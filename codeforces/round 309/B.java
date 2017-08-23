//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

import java.util.Scanner;


public class main {

	public static void main(String[] args) {
		
	Scanner in=new Scanner(System.in);
	
	int sz=in.nextInt();
	int res=1;
	String []arr=new String[sz];
	
	for(int i=0;i<sz;i++)
	{
		arr[i]=in.next();
	}
	
	for(int i=0;i<sz;i++)
	{
		int tmp=1;
		for(int j=0;j<sz&&i!=j;j++)
		{
			if(arr[i].equals(arr[j]))
				tmp++;
		}
		if(tmp>res)
			res=tmp;
	}
	
	System.out.println(res);
	}	
}