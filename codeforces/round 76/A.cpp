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
	String res="";
	String s1=in.next();
	String s2[]=new String[10];
	for(int i=0;i<10;i++)
	{
		s2[i]=in.next();
		
	}
	
for(int i=0;i<8;i++)
{
for(int j=0;j<10;j++)
{
if(s2[j].equals(s1.substring(i*10,i*10+10)))
{

res+= (char)(j+'0');
break;
}

}

}
System.out.println(res);
	
}}