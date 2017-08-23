//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


#include<bits\stdc++.h>
#include<algorithm>
using namespace std;

int n,a,b,c,res;

int main()
{
	cin>>n>>a>>b>>c;

	for(int i=0;i<=4000;i++)
	{
		for(int j=0;j<=4000;j++)
		{
			int tmp=n-(i*a)-(j*b);
			if(tmp>=0&&tmp%c==0)
			{
				res=max(res,i+j+tmp/c);
			}
		}
	}

cout<<res<<"\n";
	return 0;
}