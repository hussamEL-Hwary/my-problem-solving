//============================================================================
// Name        :The Useless Toy
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/contest/834/problem/A
//============================================================================

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

map<char,int>mp;


int main() {

	mp['v']=0;
	mp['<']=1;
	mp['^']=2;
	mp['>']=3;

char start,end;
int t;
cin>>start>>end;
cin>>t;

vector<char>items={'v','<','^','>'};
int cw=-1,ccw=-1;
int pos=mp[start];

int checkcw=(pos+(t%4))%4;
if(mp[end]==checkcw)
	cw=checkcw;

int checkccw=(pos-(t%4)+4)%4;
if(checkccw==mp[end])
	ccw=checkccw;

if((cw==-1&&ccw==-1)||(cw>=0&&ccw>=0))
	cout<<"undefined";
else if(cw>=0)
	cout<<"cw";
else if(ccw>=0)
	cout<<"ccw";


	return 0;
}
