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

long long arr[100003];

int main() {
	
	int n,x;
	unsigned long long res=0;
	cin>>n>>x;
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	
	sort(arr,arr+n);
	for(int i=0;i<n;++i)
	{
		res+=(arr[i]*x);
		x-=1;
		x=max(x,1);
	}
	
	cout<<res<<"\n";
	return 0;
}