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
	vector<pair<int, int> >team(num);
	for (int i = 0; i < num; i++)
	{
		int fi, sec;
		cin >> fi >> sec;
		team[i].first = fi;
		team[i].second = sec;
		
	}
	int res = 0;
	for (int i = 0; i < num; i++)
	{
		int s = 0;
		for (int j = 0; j < num; j++)
		{
			if (j == i)
				continue;
			else if (team[i].first == team[j].second)
				s++;


		}
		res += s;
	}

	cout << res << endl;
	
	return 0;
}