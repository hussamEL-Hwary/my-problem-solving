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
	
	String s1=in.next();String s2=in.next();String mat=in.next();
	
	s1+=s2;
	char match1[]=s1.toCharArray();
	char match2[]=mat.toCharArray();
	
	Arrays.sort(match1);
	Arrays.sort(match2);
	
	if(Arrays.equals(match1,match2))
		System.out.println("YES");
	else
		System.out.println("NO");
	
	
	
}}