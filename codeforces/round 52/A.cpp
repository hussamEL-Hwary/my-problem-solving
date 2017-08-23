//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
#include<algorithm>
using namespace std;

vector<string>alc = {
	"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"
};

bool ex(string s)
{
	for (int i = 0; i < 11; i++)
	{
		if (s == alc[i])
			return true;
	}
	return false;
}

int main()
{
	int num;
	cin >> num;
	int res = 0;

	while (num--)
	{
		string inp;
		cin >> inp;

		if (ex(inp)&&isalpha(inp[0]))
		{
			res++;
		}
		else if (!ex(inp) && (isdigit(inp[0]) && atoi(inp.c_str()) < 18))
		{
			res++;
		}

	}

	cout << res << endl;

	return 0;
}