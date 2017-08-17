//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/56/B
//============================================================================

#include<bits\stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	pair<int, int>point;
	int n;
	cin >> n;
	int cou = 0;
	bool found = false, repeted = false;
	for (int i = 1; i <= n; i++)
	{
		int val;
		cin >> val;
		//if (val == i) continue;
		if (val != i&&!found)
		{
			found = true;
			cou = val-1;
			point.first = i;
			point.second = val;
			
		}
		else if (found&&cou >= point.first)
		{
			if (val != cou)


				repeted = true;
			cou--;


		}
		else if (val != i)
			repeted = true;
	}
	if (found&&!repeted)
		cout << point.first << " " << point.second << "\n";
	else
		cout << "0 0\n";

	return 0;
}