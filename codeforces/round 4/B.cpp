//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
#include<algorithm>
using namespace std;


vector<pair<int,int>>v;

int main()
{

	int d, sum;
	scanf("%d%d", &d, &sum);

	for (int i = 0; i < d; i++)
	{
		int  a, b;
		scanf("%d%d", &a, &b);
		pair<int, int>p;
		p.first = a, p.second=b-a;
		v.push_back(p);
		sum -= a;
	}

	if (sum < 0)
	{
		printf("NO\n");
		return 0;
	}

	for (int i = 0; i < d&&sum>0; i++)
	{
		if (v[i].second>sum)
		{
			v[i].first += sum;
			sum = 0;
		}
		else
		{

			v[i].first += v[i].second;
			sum -= v[i].second;

		}
		
	}

	if (sum > 0)
	{
		printf("NO\n");

	}
	else
	{
		printf("YES\n");
		for (int i = 0; i < d; i++)
		{
			printf("%d ", v[i].first);
		}
		printf("\n");
	}


	return 0;
}