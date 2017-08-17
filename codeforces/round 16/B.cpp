//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/contest/16/problem/B
//============================================================================

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int needed,containers,result=0;
	cin>>needed>>containers;
	vector<pair<int,int>>mbox(containers);
	for(int i=0;i<containers;++i)
	{
		cin>>mbox[i].second;
		cin>>mbox[i].first;
	}
	sort(mbox.rbegin(),mbox.rend());
	for(int i=0;i<containers;++i)
	{
		if(mbox[i].second<needed)
		{
			needed-=mbox[i].second;
			result+=mbox[i].second*mbox[i].first;
		}
		else{
			result+=needed*mbox[i].first;
			break;
		}
	}
cout<<result<<"\n";
return 0;
}