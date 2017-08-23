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

	int len, n,x=0,res=0;
	scanf("%d%d", &len, &n);
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		bool f = false;
		for (int j = 0; j < len; j++)
		{

			if (s[j] == '0')
			{
				f = true;
				break;
			}
		}
		if (f)
			x++;
		else
		{
			res = max(res, x);
			x = 0;
		}

	}
	res = max(res, x);
	cout << res << "\n";
	return 0;

}