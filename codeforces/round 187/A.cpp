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
	int num;
	scanf("%d", &num);
	vector<int>v1(num), v2(num);
	int res = num;
	for (int i = 0; i < num; i++)
	{
		cin >> v1[i] >> v2[i];

	}


	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (i == j)  continue;
			if (v1[i] == v2[j])
			{
				res--;
					break;
			}
		}

	}
	cout << res << endl;

	return 0;
}