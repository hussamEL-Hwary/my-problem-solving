//============================================================================
// Name        :Young Photographer
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/14/B
//============================================================================

#include<bits\stdc++.h>
using namespace std;
int main()
{

	int n, x;
	cin >> n >> x;
	int le = 0, ri = 2000;
	while (n--)
	{
		int fi, se;
		cin >> fi >> se;
		if (fi > se) swap(fi, se);
		   le = max(le, fi);
		   ri = min(ri, se);
	}
	if (le > ri)
		cout << -1 << "\n";
	else if (x >= le&&x <= ri)
		cout << 0 << "\n";
	else cout << min(abs(x - le), abs(x - ri)) << "\n";

	return 0;
}