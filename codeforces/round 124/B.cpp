//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/197/B
//============================================================================

#include <iostream>
using namespace std;

int gcd(int a,int b)
{
if(b==0)
	return a;
return gcd(b,a%b);
}



int main() {

	int n,m ,fn,fm;
	cin>>n>>m;
	cin>>fn;
	for(int i=0;i<n;i++)
	{
		int val;
		cin>>val;
	}
	cin>>fm;
	for(int j=0;j<m;j++)
	{
		int val;
		cin>>val;
	}

	if(n>m)
	{
		if((fn>0&&fm>0)||(fn<0&&fm<0))
			cout<<"Infinity\n";
		else
			cout<<"-Infinity\n";
	}
	else if(n<m)
	{
		cout<<"0/1\n";
	}
	else
	{
    int r=gcd(fn,fm);
    if((fn>0&&fm>0)||(fn<0&&fm<0))
    {
    	cout<<abs(fn/r)<<"/"<<abs(fm/r)<<"\n";
    }
    else
    {
    	cout<<"-"<<abs(fn/r)<<"/"<<abs(fm/r)<<"\n";
    }
	}
	return 0;
}