//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/contest/47/problem/B
//============================================================================


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool myComparison(const pair<int,int> &a,const pair<int,int> &b)
{
       return a.second<b.second;
}

vector<pair<char,int>>arr(3);
int main() {

arr[0].first='A';
arr[1].first='B';
arr[2].first='C';

	for(int i=0;i<3;++i)
	{
		string inp;
		cin>>inp;
		if(inp[1]=='>')
		{
			arr[int(inp[0])-65].second++;
			arr[int(inp[2])-65].second--;
		}
		else
		{
			arr[int(inp[0])-65].second--;
			arr[int(inp[2])-65].second++;
		}
	}
	
	sort(arr.begin(),arr.end(),myComparison);
	if(arr[0].second==arr[1].second||arr[1].second==arr[2].second)
	{
		cout<<"Impossible";
	}
	else
	{
		cout<<arr[0].first<<arr[1].first<<arr[2].first;
	}


	return 0;
}