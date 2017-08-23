//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, p, q;
	cin >> n >> p >> q;
	int res1 = 0;
	int res2 = n*q;
	while (n > 1)
	{
		int match = n / 2;
		int find = n%(2 * match) ;
		res1 += p * 2 * match + match;
		n = match + find;
	}
	cout << res1 << " " << res2 << "\n";

	return 0;
}