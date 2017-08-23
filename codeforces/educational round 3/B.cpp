//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<cstdio>
#include<vector>
using namespace std;

int best(vector<int>v)
{
	int result = 0;
	for (int i = 0; i < int(v.size())-1; i++)
	{
		for (int j = i + 1; j < int(v.size()); j++)
		{
			result += (v[i] * v[j]);
		}
	}
	return result;

}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	vector<int>ans(m, 0);
	while (n--)
	{
		int x;
		scanf("%d", &x);
		ans[x - 1]++;

	}

	printf("%d\n", best(ans));

	return 0;

}