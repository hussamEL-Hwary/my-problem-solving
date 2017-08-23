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
	int k=in.nextInt();
	
	String input=in.next();
	String res="";
	String test="abcdefghijklmnopqrstuvwxyz";   
	int []arr=new int[26];
	for(int i=0;i<26;i++)
	{
		arr[i]=0;
		
	}
	
	for(int i=0;i<input.length();i++)
	{
		arr[input.charAt(i)-'a']++;
	}
	

	
	for(int i = 0;i < 26;i++){
		if(arr[i] % k != 0){
			System.out.println(-1);
			return;
		}
		else if (arr[i] != 0){
			for(int j = 0;j < arr[i]/k;j++)
				res += test.charAt(i);
		}
	}
	for(int i = 0;i <k;i++)
		System.out.print(res);
	
	
	
	
	}	
}