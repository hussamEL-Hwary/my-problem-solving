//============================================================================
// Name        :Mister B and Book Reading
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/820/A
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int c,v0,v1,a,l,res=1,count=1;
	cin>>c>>v0>>v1>>a>>l;
	int t=v0;

	while(v0<c)
	{
		int add=(t+(count*a));
		if(add<v1)
		{
			v0+=add;
			v0-=l;
		}
		else
		{
			v0+=v1;
		    v0-=l;
		}
		++res;
		count++;
	}
	cout<<res<<"\n";

	return 0;
}