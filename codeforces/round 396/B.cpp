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

int n;
cin>>n;
vector<int>segmentsLength(n);
for(int i=0;i<n;++i)
{
	cin>>segmentsLength[i];
}

sort(segmentsLength.begin(),segmentsLength.end());

for(int i=0;i<=n-3;++i)
{
	if(segmentsLength[i]+segmentsLength[i+1]>segmentsLength[i+2])
	{
		cout<<"YES";
		return 0;
	}
}
cout<<"NO";
	return 0;
}