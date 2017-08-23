//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;

int main()
{
	

		int n;
		scanf("%d", &n);
		vector<int>v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}

		int c = 0,p=0;
		for (int i = 1; i < n; i++)
		{
			if (v[i] < v[i - 1])
			{
				c++;
				p = i;
			}
		}

		if (c == 0)
		{
			cout << 0 << "\n";

		}
		else
		{
			if (c == 1 && v[n - 1] <= v[0])
			{
				cout << n - p << "\n";
			}
			else
				cout << -1 << "\n";

		}




	return 0;

}