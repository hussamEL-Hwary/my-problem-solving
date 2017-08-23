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
	int num;
	long long sod = 0, sev = 0, lodd = 9999999999;
	scanf("%d", &num);
	while (num--)
	{

		int inp;
		scanf("%d", &inp);
		if (inp % 2 == 0)
			sev += inp;
		else
		{
			sod += inp;
			if (inp < lodd)
				lodd = inp;
		}
	}

	if ((sod + sev) % 2 != 0)
		sod -= lodd;
	cout << sev + sod << endl;

	return 0;
}