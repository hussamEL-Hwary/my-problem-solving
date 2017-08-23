//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;


public class main {

	
	public static void main(String[] args) {
		
	Scanner in=new Scanner(System.in);

	String s1=in.next();
	
	int pos=s1.indexOf('.');
	if(s1.charAt(pos-1)=='9')
		System.out.println("GOTO Vasilisa.");
	else
	{
		if(s1.charAt(pos+1)>='5')
		{
		char c=(char)(s1.charAt(pos-1)+1);
		
	  s1=s1.substring(0,pos-1)+c;	
		
		System.out.println(s1);
		}
		else
			System.out.println(s1.substring(0,pos));
	}
	
	
}}