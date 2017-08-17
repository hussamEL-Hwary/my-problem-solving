//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/189/B
//============================================================================

#include<bits\stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	long long res = 0;

	for (int i = 2; i <= a; i += 2)
	{
		for (int j = 2; j <= b; j += 2)
		{
			res += (a - i + 1)*(b - j + 1);
		}
	}
	cout << res << "\n";
	return 0;
}