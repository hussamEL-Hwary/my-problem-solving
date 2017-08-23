//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{

	int n, d, m, res=0;
	cin >> n >> d;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cin >> m;
	sort(arr.begin(), arr.end());
	if (n >= m)
	{
		for (int j = 0; j < m; j++)
			res += arr[j];
	}
	else
	{
		for (int j = 0; j < n; j++)
		{
			res += arr[j];
		}
		res -= (m - n)*d;
	}
	cout << res << endl;

	return 0;
	}