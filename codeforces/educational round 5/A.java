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
	
	
	String inp1=in.next();
    String inp2=in.next();
		int i=0,j=0;
		
		while(i<inp1.length()&&inp1.charAt(i)=='0')
			i++;
		while(j<inp2.length()&&inp2.charAt(j)=='0')
			j++;
		int res=0;
		while(i<inp1.length()&&j<inp2.length())
		{
			if(inp1.charAt(i)<inp2.charAt(j))
			{
				res=-1;
				break;
			}
			else if(inp1.charAt(i)>inp2.charAt(j))
				{
				res=1;
				break;
				}
			i++;j++;
		}
		
		if(inp1.length()-i<inp2.length()-j)
			res=-1;
		if(inp2.length()-j<inp1.length()-i)
			res=1;
		
	if(res==-1)
		System.out.println("<");
	else if(res==1)
		System.out.println(">");
	else
		System.out.println("=");
	
	}	
}
