//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[103];

int main() {
int n,res=0;
cin>>n;
for(int i=0;i<n;i++)
{
	int val;
	cin>>val;
	res+=val;
arr[i]=val;
}
if(res==0)
{
	int c=0;
	int j=n-1;
	for(;j>=0&&c==0&&res==0;j--)
	{
	c+=arr[j];
	res-=arr[j];
	}
	if(res==0||c==0)
		cout<<"NO\n";
	else
	{
		cout<<"YES\n"<<2<<"\n"<<1<<" "<<j+1<<"\n"<<j+2<<" "<<n<<"\n";
	}
}
else
{
cout<<"YES\n"<<1<<"\n"<<1<<" "<<n;

}

	return 0;
}