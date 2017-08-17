//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/contest/463/problem/B
//============================================================================


#include <iostream>
using namespace std;

int main() {
	int n,res=0;
	cin>>n;
	while(n--)
	{
		int t;
		cin>>t;
		res=max(res,t);
		
	}
	cout<<res<<"\n";
	
	return 0;
}