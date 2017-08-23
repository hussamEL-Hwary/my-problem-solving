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

	int floo, falt;
	int res = 0;
	char w1, w2;
	cin >> floo >> falt;
	for (int i = 0; i < floo; i++)
	{
		for (int j = 0; j < falt; j++)
		{
			cin >> w1 >> w2;
			if (w1 == '1' || w2 == '1')
				res++;
		}
	}

	cout << res << endl;
	return 0;
}