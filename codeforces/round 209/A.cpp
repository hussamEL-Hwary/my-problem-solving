//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;

const  int maxi = 51;

char grd[maxi][maxi];

int main()
{
	

	int R, C;

	scanf("%d%d", &R, &C);
	bool found = false;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> grd[i][j];
			if (grd[i][j] == '1' && (i == 0 || i == R-1||j==0||j==C-1))
			{
				
				found = true;
			}

		}
	}

	if (found)
	cout << 2 << endl;
	else
		cout << 4 << endl;

	return 0;
}