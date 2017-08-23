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
	int n, m;
	scanf("%d%d", &n, &m);

	bool found = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			char c;
			cin >> c;
			if (c != 'W'&&c != 'B' &&c != 'G')
				found = true;
		}

	}

	if (found)
	{
		cout << "#Color\n";
	}
	else
		cout << "#Black&White\n";


	return 0;
}
