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
	int r, c;
	cin >> r >> c;
	bool f = true;
	for (int i = 0; i < r; i++)
	{
		if (i % 2 != 0)
		{
			if (f){
				for (int j = 0; j < c - 1; j++)
				{
					cout << '.';
				}
				cout << '#' << "\n";
				f = false;
			}
			else
			{
				cout << '#';
				for (int j = 0; j < c - 1; j++)
				{
					cout << '.';
				}
				cout << "\n";
				f = true;
			}

		}
		else
		{
			for (int k = 0; k < c; k++)
				cout << '#';
			cout << '\n';
		}
	}


	return 0;
}