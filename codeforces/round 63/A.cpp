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
	int num;
	cin >> num;
	int a = 0, b = 0, c = 0;
	while (num--)
	{
		int fi, sec, thi;
		cin >> fi >> sec >> thi;
		a += fi;
		b += sec;
		c += thi;
	}
	
	if (a == 0 && b == 0 && c == 0)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}