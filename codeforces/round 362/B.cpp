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
	
	string s;
	cin >> s;

	bool se1 = true, se2 = false, se3 = false;
	string par1, par2;
	int x = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '.')
		{
			se1 = false;
			se2 = true;
			continue;
		}
		if (s[i] == 'e')
		{
			se2 = false;
			se3 = true;
			continue;
		}
		if (se1)
		{
			par1 += s[i];
		}
		if (se2)
			par2 += s[i];
		if (se3)
		{
			x = x * 10;
			x+=s[i] - '0';
		}
	}

	if (par2.size() == 1 && par2[0] == '0')
	{
		for (int j = 0; j < x; j++)
		{
			par1 += '0';
		}
		cout << par1 << endl;
		return 0;

	}


	int i = 0;
	while (i<par2.size()&&x>0)
	{
		par1 += par2[i];
		i++;
		x--;

	}
	if (i < par2.size())
	{
		cout << par1 << '.' << par2.substr(i) << endl;

	}
	else
	{
		
		for (int j = 0; j < x; j++)
		{
			par1 += '0';
		}
		cout << par1 << endl;
	}
	
}