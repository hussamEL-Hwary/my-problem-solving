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

	int n,res=0;

	scanf("%d", &n);

	vector<pair<int, int>>point(n);

	for (int i = 0; i < n; i++)
	{
		cin >> point[i].first;
		cin >> point[i].second;
	}

	for (int i = 0; i < n; i++)
	{

		bool righ = false, left = false, up = false, down = false;

		for (int j = 0; j < n; j++)
		{
			if (point[j].first>point[i].first&&point[j].second == point[i].second)
				righ = true;
			else if (point[j].first < point[i].first&&point[j].second == point[i].second)
				left = true;
			else if (point[j].first == point[i].first&&point[j].second < point[i].second)
				down = true;
			else if (point[j].first == point[i].first&&point[j].second > point[i].second)
				up = true;
		}
		if (righ == true && left == true && up == true && down == true)
			res++;

	}

	printf("%d\n", res);
	return 0;
}