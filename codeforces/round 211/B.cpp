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
     vector<int>arr(n);
     for(int i=0;i<n;++i)
	{
	   cin>>arr[i];
	}
	long long sum=0;
	int f=0,sec=k,pos=0;
	for(int i=0;i<k;++i)
	{
		sum+=arr[i];
	}
	long long tmp=sum;
	while(sec<n)
	{
		tmp-=arr[f++];
		tmp+=arr[sec++];
		if(tmp<sum)
		{
			sum=tmp;
			pos=f;
		}
	}
	
	cout<<pos+1<<"\n";

	return 0;
}