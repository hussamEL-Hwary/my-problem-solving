//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;

map<string, int>mp;

bool is_lucky(string &s)
{
	for (int i = 0; i < int(s.size()); i++)
	{
		if (s[i] != '7'&&s[i] != '4')
			return 0;
	}

	return 1;
}



int main()
{

	string inp, res = "-1";
	int r = -1;
	cin >> inp;
	for (int i = 0; i < int(inp.size()); i++)
	{
		for (int j = 1; j <= int(inp.size()) && i + j <= inp.size(); j++)
		{
		
			string tmp = inp.substr(i, j);
			if (is_lucky(tmp))
			{
				mp[tmp]++;
			}
		}
	}


	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
	
		if (it->second > r)
		{
			r = it->second;
			res = it->first;
		}
		else if (it->second == r)
		{
			if (it->first < res)
			{
				res = it->first;
			}
		}
	}

	cout << res << "\n";
	return 0;
}

