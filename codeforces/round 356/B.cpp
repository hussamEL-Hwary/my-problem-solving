//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/contest/680/problem/B
//============================================================================

#include <iostream>
using namespace std;

int arr[103];
int main() {
int n,ind,res=0,left,right;
cin>>n>>ind;
	for(int i=1;i<=n;++i)
	{
		cin>>arr[i];
	}
	
	
		if(arr[ind]==1)
		res+=1;
		left=ind-1;
		right=ind+1;
		
		while(left>=1&&right<=n)
		{
			if(arr[left]==1&&arr[right]==1)
			res+=2;
			left--;
			right++;
		}
		
		while(left>=1)
		{
			if(arr[left]==1)
			res++;
			left--;
		}
		while(right<=n)
		{
			if(arr[right]==1)
			res++;
			right++;
		}
	

	cout<<res<<"\n";
	return 0;
}