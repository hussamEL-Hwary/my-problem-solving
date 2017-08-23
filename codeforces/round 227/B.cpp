//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
using namespace std;


int main() {

	int n,m;
	scanf("%d%d",&n,&m);


	vector<int>v1(n),v2(m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&v1[i]);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&v2[i]);
	}

int t=0;
for(int j=0;j<m&&t<n;j++)
{
	if(v2[j]>=v1[t])t++;

}
cout<<n-t<<endl;







return 0;
}