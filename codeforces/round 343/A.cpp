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
	cin >> n;
	//n++;
	vector< vector<char> >(n, vector<char>(n));
	vector<int>col(n, 0);
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		int num = 0;
		for (int j = 0; j < n; j++)
		{
			char va=s[j];
			
			if (va == 'C')
			{
				col[j]++;
				num++;
			}
		}
		
		res += (num*(num - 1)) / 2;

	}
	for (int i = 0; i < n; i++)
	{
		res += (col[i] * (col[i] - 1)) / 2;
	}
	cout << res << endl;
	return 0;
}