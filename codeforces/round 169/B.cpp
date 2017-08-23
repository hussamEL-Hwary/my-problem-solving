//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{

	map<char, int>mp;

	string s;
	cin >> s;
	for (int i = 0; i < int(s.size()); i++)
	{
		mp[s[i]]++;
	}
	int r = 0;
	for (auto i : mp)
	{
		r += i.second % 2;
	}
	if (r == 0 || r % 2 == 1)
		cout << "First\n";
	else
		cout << "Second\n";

		


	return 0;

}
