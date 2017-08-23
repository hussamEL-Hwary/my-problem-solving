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

	int n;
	int res = 0;
	scanf("%d", &n);
	vector<int>v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	res += v[0]+1;
	for (int i = 1; i < n; i++)
	{
		if (v[i] < v[i - 1])
		{
			res += (v[i-1] - v[i]) + 2;
		}
		else
			res += (v[i] - v[i - 1]) + 2;
	}
	cout << res << "\n";


	return 0;
}