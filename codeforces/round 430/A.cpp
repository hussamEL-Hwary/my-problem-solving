//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int l,r,x,y;
	double k;
	cin>>l>>r>>x>>y>>k;
	for(int i=x;i<=y;++i)
	{
		double val=(i*k);
		if(val>=l&&val<=r&&val==int(val))
		{
			cout<<"YES\n";
			return 0;
		}
		
	}
	
	cout<<"NO\n";
	return 0;
}