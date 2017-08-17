//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>


using namespace std;

bool adj[103][103];

int main() {

int stu,tie;
cin>>stu>>tie;

for(int i=0;i<tie;i++)
{
int a,b;
cin>>a>>b;
adj[a][b]=1;
adj[b][a]=1;
}



int res=0;

for(int i=0;i<tie;i++)
{
	vector< pair<int,int> >chang;
	for(int j=1;j<=stu;j++)
	{

		int num=0;
		pair<int,int>add;
	for(int k=0;k<=stu;k++)
	{
		if(adj[j][k])
			{
			num++;
	        add.first=j;
	        add.second=k;
	    
			}
	}
	if(num==1)
		chang.push_back(add);

	}
	if(chang.empty())
		break;
	else
	{
		res++;
        for(int it=0;it<chang.size();it++)
        {
        	adj[chang[it].second][chang[it].first]=0;
        	adj[chang[it].first][chang[it].second]=0;
        }

	}

}


cout<<res<<"\n";

	return 0;
}