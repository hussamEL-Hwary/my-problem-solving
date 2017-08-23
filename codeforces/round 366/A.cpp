//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int main()
{

	int  n;
	scanf("%d", &n);
	
	string re[2] = { "I hate ", "I love " };

	for (int i = 1; i <= n; i++)
	{
		if (i & 1)
		{
			cout << re[0];
		}
		else
			cout << re[1];
		
		if (i == n)
			cout << "it\n";
		else
		cout << "that ";
	}

	return 0;
}