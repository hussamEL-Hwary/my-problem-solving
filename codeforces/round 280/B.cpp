//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/contest/492/problem/B
//============================================================================

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,l;
	cin>>n>>l;
	vector<int>lanterns(n);
	
	for(int i=0;i<n;++i)
	{
		cin>>lanterns[i];
	}
	
	sort(lanterns.begin(),lanterns.end());
	
	double dis=max(lanterns[0],l-lanterns[n-1]);
	int hdis=0;
	
	for(int i=1;i<n;++i)
	{
		hdis=max(hdis,lanterns[i]-lanterns[i-1]);
	}
	if(hdis/2.0>dis)
	cout<<fixed<<showpoint<<setprecision (10)<<hdis/2.0;
	else
	cout<<fixed<<showpoint<<setprecision (10)<<dis;
	
	
	return 0;
}