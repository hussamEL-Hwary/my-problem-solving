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
	int n;
	scanf("%d", &n);
	string s;
	while (n--)
	{
		string res;
		cin >> s;
		if (s.length() > 10)
		{
			res = s[0] + to_string(s.length() - 2) + s[s.length() - 1];
		}
		else
			res = s;
		cout << res << endl;
	}
	return 0;
}