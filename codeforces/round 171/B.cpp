//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
using namespace std;

int res,b,f,m;


int main() {
scanf("%d%d",&b,&f);
vector<unsigned long long>v(b+1);
v[0]=0;
for(int i=1;i<=b;i++)
{
	cin>>v[i];
	v[i]+=v[i-1];
	if(v[i]-v[m]>f)
		m++;
	res=max(res,i-m);
}
cout<<res<<"\n";

return 0;
}