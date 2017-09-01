//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	vector<int>doub(n);
	long long res=0;
	for(int i=0;i<n;++i)
	{
		int g,c;
		cin>>g>>c;
		res+=min(g,c);
		doub[i]=0;
		if(c>g)
		doub[i]=min(g,(c-g));
		
	}
	sort(doub.rbegin(),doub.rend());
	for(int i=0;i<k;++i)
	res+=doub[i];
	cout<<res<<"\n";
	
	return 0;
}