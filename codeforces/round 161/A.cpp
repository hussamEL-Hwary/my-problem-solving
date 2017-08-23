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
	vector< vector<int> >matrix(5, vector<int>(5));
	int row = 0, col = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> matrix[i][j];
			if (matrix[i][j] == 1)
			{
				row = i;
				col = j;
			}
		}
	}

	printf("%d\n", abs(row - 2) + abs(col - 2));

	return 0;
}