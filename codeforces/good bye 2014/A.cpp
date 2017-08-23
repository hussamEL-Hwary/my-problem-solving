//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>

using namespace std;
int arr[30003];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cell, destination;
	cin >> cell >> destination;


	for (int i = 1; i < cell; i++) {
		
		cin>>arr[i];
		}




for(int i=1;i<=destination;i+=arr[i])
{
	if(i==destination)
	{
		cout<<"YES\n";
		return 0;
	}

}
cout<<"NO\n";

     return 0;

}