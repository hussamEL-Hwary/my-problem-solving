//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/contest/746/problem/B
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	int n;
	string encoded,result="";
	cin>>n>>encoded;
	if(n&1)   //add right then left
	{
		for(int i=0;i<n;++i)
		{
			if(i&1)
			{
				result=encoded[i]+result;
			}
			else
			{
				result+=encoded[i];
			}
		}
	}
	else{ //add right then left
		
			for(int i=0;i<n;++i)
		{
			if(i&1)
			{
			result+=encoded[i];
			}
			else
			{
				
			result=encoded[i]+result;
			}
		}
	}
	cout<<result<<"\n";
	return 0;
}