//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/41/B
//============================================================================

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int arr[2003];
int main()
{
	int n, b;
	cin >> n >> b;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int res = b;
	for (int i = 0; i < n; i++)
	{
		int rem = b%arr[i];
		int val = b / arr[i];
		for (int j = i + 1; j < n; j++)
		{
			if (val*arr[j] + rem>res)
			{
				res = val*arr[j] + rem;
			}
		}
	}

	cout << res << "\n";
	return 0;
}