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
		
	Scanner sec=new Scanner(System.in);
	
	String input=sec.next();
	boolean found=true;
	for(int i=1;i<input.length();i++)
	{
	if(input.charAt(i)>='a'&&input.charAt(i)<='z')
	{
		found=false;
		break;
	}
	}
	if(found)
	{
		
		if((input.charAt(0)>='a'&&input.charAt(0)<='z'))
	       input=input.substring(0,1).toUpperCase()+input.substring(1).toLowerCase();
	   else
		   input=input.substring(0,1).toLowerCase()+input.substring(1).toLowerCase();
			 	   
		System.out.println(input);
		
	}
	else
		System.out.println(input);
	
	
	
	
	}}
