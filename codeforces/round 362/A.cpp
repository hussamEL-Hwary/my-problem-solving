//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;

int main()
{
	

	int t, s, x;
	scanf("%d%d%d", &t, &s, &x);
	int p = 1;
	while (true)
	{

		if (x == t)
		{
			cout << "YES\n";
			return 0;

		}

		if (x == t + p*s || x == t + p*s+1)
		{
			cout << "YES\n";
			return 0;
				 
		}
		if (x < t + p*s || x < t + p*s+1)
		{
			cout << "NO\n";
			return 0;

		}
		p++;
	}
	
}