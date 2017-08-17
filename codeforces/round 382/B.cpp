//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
//int arr[100009];
int main()
{
	vector<int>arr;
	int n, n1, n2;
	cin >> n >> n1 >> n2;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	sort(arr.rbegin(), arr.rend());
	
	double res = 0.0;
	int iter = 0;
	double n1_val = 0.0, n2_val = 0.0;
	for (iter = 0; iter < min(n1, n2); iter++)
	{
		n1_val += arr[iter];
	
	}
	res += n1_val / min(n1, n2);
	int sec = max(n1, n2);
	while (sec)
	{
		n2_val += arr[iter++];
		sec--;
	}
	res += n2_val / max(n1, n2);
	cout << fixed << setprecision(8) << res << "\n";
	return 0;
}

