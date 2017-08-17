//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/9/B
//============================================================================

#include<bits\stdc++.h>
#include<algorithm>

using namespace std;
int arr[103];

int main()
{
	int n, vb, vs,xu,yu;
	cin >> n >> vb >> vs;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> xu >> yu;
	int index = 0;
	double val = INT_MAX;
	double lastdis = INT_MAX;
	for (int i = 1; i < n; i++)
	{
		double dis = sqrt(pow(arr[i] - xu, 2) + pow(yu*1.0, 2));
		double time1 = dis / (vs*1.0);
		double time2 = arr[i] / (vb*1.0);
		if (time1 + time2 < val)
		{
			val = time1 + time2;
			index = i + 1;
			lastdis = dis;
		}
		else if (val == (time1 + time2)&&dis<lastdis)
		{
			lastdis = dis;
			index = i + 1;
		}
	}

	cout << index << "\n";

	return 0;
}