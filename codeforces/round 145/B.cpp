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
	pair<int,int>p[1001];
	int t,r;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    cin>>t>>r;

    for(int i=0;i<t;i++)
    {
    	cin>>p[i].first;
    	p[i].second=i+1;

    }
    sort(p,p+t);

    printf("%d\n",p[t-r].first);
    for(int i=t-1;i>=t-r;i--)
    {
    	printf("%d ",p[i].second);
    }


}