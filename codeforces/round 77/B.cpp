//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;

long long num, res;

void solve(long long k, int n)
{
	if ((k >= num && k<res||res == 0) && n == 0)
		res = k;
	if (k <= num * 100)
	{
		solve(k * 10 + 4, n + 1);
		solve(k * 10 + 7, n - 1);

	}

}

int main()
{

	cin >> num;
	solve(0, 0);
	cout << res << "\n";

	return 0;
}