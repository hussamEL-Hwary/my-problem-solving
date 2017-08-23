//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	if (a.size() != b.size())
	{
		cout << "NO\n";
		return 0;
	}

	int sz = int(a.size());

	string r1(""), r2("");


	for (int i = 0; i < sz; i++)
	{
		if (a[i] != b[i])
		{
			r1 += a[i];
			r2 += b[i];
		}
	}

	sort(r1.begin(), r1.end());
	sort(r2.begin(), r2.end());
	if (r1.size() != 2 || r2.size() != 2)
	{
		cout << "NO\n";
		return 0;
	}
	
	if (r1 == r2)
	{
		cout << "YES\n";
	}
	else
		cout << "NO\n";

	return 0;
}