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

	vector<bool>res(n, false);
	vector<string>val(n);
	for (int i = 0; i < n; i++)
	{
		cin >> val[i];

	}

	for (int i = 0; i < m; i++)
	{
		int maxn = -1;
		vector<int>ind;
		for (int j = 0; j < n; j++)
		{
			if (val[j][i] - '0'>maxn)
			{
				maxn = val[j][i] - '0';
				ind.resize(0);
				ind.push_back(j);
			}
			else if (val[j][i] - '0'==maxn)
				ind.push_back(j);

		}

		for (int k = 0; k < int(ind.size()); k++)
		{
			res[ind[k]] = true;
		}
	}

	int cou = 0;
	for (int i = 0; i < n; i++)
	{
		if (res[i] == true)
			cou++;
	}

	printf("%d\n", cou);
	return 0;
}