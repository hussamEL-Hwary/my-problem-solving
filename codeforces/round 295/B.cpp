//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	int res = 0;
	while (m>n)
	{
		if (m %2 == 0)
			m /= 2;
		else
			m++;
		res++;
	}
	
	cout <<n-m+res << "\n";
	return 0;

}