//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;

map<char, int>mp1, mp2;

int main()
{

	string a, b;
	cin >> a >> b;

	for (int i = 0; i < a.size(); i++)
	{
		mp1[a[i]]++;
	}
	
	for (int i = 0; i < b.size(); i++)
	{
		if (mp1.find(b[i])!=mp1.end())
		{
			mp2[b[i]]++;
		}
		else
		{
			cout << -1 << "\n";
			return 0;
		}
	}

	int res = 0;
	for (map<char,int>::iterator it = mp2.begin(); it != mp2.end(); it++)
	{
		res += min(it->second, mp1[it->first]);
	}

	cout << res << "\n";
	return 0;
}