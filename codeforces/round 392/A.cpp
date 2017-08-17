//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<iostream>
#include<algorithm>
using namespace std;

int arr[103];
int main()
{
	int n, res = 0;
	cin >> n;
	int mx = 0;
	for (int i = 0; i<n; i++)
	{
		cin >> arr[i];
		mx = max(mx, arr[i]);
	}

	for (int i = 0; i<n; i++)
	{
		res += mx - arr[i];
	}
	cout << res;

	return 0;
}
