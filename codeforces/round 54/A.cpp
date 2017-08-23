//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main(){
	string out[] = { "NO", "YES" };
	vector<string>v;
	string s;
	cin >> s;

	int a = -1, b =-1, c = -1, d = -1, e = -1;

	a = s.find("h") ;
	
	if (a > -1)
	{
		for (int i = a+1; i<s.length(); i++)
		{
			if (s[i] == 'e')
			{

				b = i;
				break;
			}
			
		}
		
	}

	if (b > -1)
	{
		for (int mm = b+1; mm<s.length(); mm++)
		{
			if (s[mm]=='l')
			{
				c = mm;
				break;
			}
            
		}

	}
	
	 if (c > -1)
	{
		for (int xx = c+1; xx<s.length(); xx++)
		{
			if (s[xx] == 'l')

			{

				d = xx;
				break;
			}
		
			
		}
	}
	 
	 if (d > -1)
	{
		for (int cc = d+1; cc<s.length(); cc++)
		{
			if (s[cc] == 'o')
			{

				e = cc;
				break;
			}
				
			
		}
	}
	 

	if (a > -1  &&  b>-1 && c > -1 && d > -1 && e>-1 )
	{
		cout << out[1] << endl;
	}
	else
		cout << out[0] << endl;

	return 0;

}