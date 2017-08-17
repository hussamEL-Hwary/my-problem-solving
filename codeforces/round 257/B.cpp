//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int main()
{
	long long  x,y,n;
	cin>>x>>y>>n;
	long long result[7];
	result[1]=x;
	result[2]=y;
	result[3]=y-x;
	result[4]=-x;
	result[5]=-y;
	result[6]=-y+x;

	if(n%6)
		cout<<((result[n%6]%1000000007)+1000000007)%1000000007<<"\n";
	else
		cout<<((result[6]%1000000007)+1000000007)%1000000007<<"\n";

return 0;
}