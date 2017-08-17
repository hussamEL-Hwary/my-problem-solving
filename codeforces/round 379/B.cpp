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

int main()
{

	int k2, k3, k5, k6;
	int res = 0;
	cin >> k2 >> k3 >> k5 >> k6;
	int mink = min(k2, min(k5, k6));

		res += 256 * mink;
		k2-= mink;
		res += 32 * min(k2, k3);

		cout << res << "\n";
	return 0;
}