//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


#include<bits\stdc++.h>
using namespace std;

map<int, vector<int>>mp;

int main()
{

	vector<pair<int, int>>re;
	int i ,n;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		mp[x].push_back(i);

	}

	for (map<int, vector<int>>::iterator it = mp.begin(); it != mp.end(); it++)
	{
	
		pair<int, int>fu;
		if (it->second.size() == 1)
		{
			fu.first = it->first;
			fu.second = 0;
			re.push_back(fu);
		}
		else
		{
			bool f = true;
			int dif = it->second[1] - it->second[0];
			for (int i = 1; i < it->second.size(); i++)
			{
				if (it->second[i] - it->second[i - 1] != dif)
				{
					f = false;
					break;
				}
			}

			if (f)
			{
				fu.first = it->first;
				fu.second = dif;
				re.push_back(fu);
			}
				

		}

	}

	cout << re.size() << "\n";

	for (int i = 0; i < re.size(); i++)
	{
		cout << re[i].first << " " << re[i].second << "\n";
	}


	return 0;
}