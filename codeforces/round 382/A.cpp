//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	int len, jump;
	string line;
	cin >> len >> jump;
	cin >> line;
	bool pos = false;
	int Gpos = 0;
	bool found = false;
	for (int i = 0; i < len; i++)
	{
		if (line[i] == 'T')
			pos = true;
		if (line[i] == 'G')
		{
			Gpos = i;
			break;
		}
	}


	if (pos)
	{
		for (int i = Gpos; i >= 0; i -= jump)
		{
			if (line[i] == '#')
				break;
			else if (line[i] == 'T')
			{
				found = true;
				break;
			}
		}

	
	
	}
	else
	{
		for (int i = Gpos; i < len; i += jump)
		{
			if (line[i] == '#')
				break;
			else if (line[i] == 'T')
			{
				found = true;
				break;
			}
		}
	}

	if (found)
		cout << "YES\n";
	else
		cout << "NO\n";


	return 0;

}