//============================================================================
// Name        :Crossword solving
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/822/B
//============================================================================

#include <iostream>
using namespace std;


int main()
{

int n,m,res=1111,pos=0;
cin>>n>>m;
string s1,s2;
cin>>s1>>s2;
for(int i=0;i<m;i++)
{
if(i+n>m)
	break;
string tmp =s2.substr(i,n);
int coun=0,tpos=i;

for(int j=0;j<n;++j)
{
	if(s1[j]!=s2[i+j])
		coun++;

}
if(coun<res)
{
res=coun;
pos=tpos;
}

}
cout<<res<<"\n";
for(int i=0;i<n;++i)
{
if(s1[i]!=s2[i+pos])
	cout<<i+1<<" ";
}
return 0;
}

