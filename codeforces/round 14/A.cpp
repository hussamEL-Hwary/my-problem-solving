//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


int main()
{

	int r, c;
	cin >> r >> c;

	int mr = r, mc = c, mar = 0, mac = 0;

	vector<string>data(r);
	for (int i = 0; i < r; i++)
	{
		cin >> data[i];

	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (data[i][j] == '*')
			{
				if (i < mr)
					mr = i;
				if (j<mc)
					mc = j;
				if (i>mar)
					mar = i;
				if (j>mac)
					mac = j;
			}
		}
	}
	
	for (int i = mr; i <= mar; i++)
	{
		for (int j = mc; j <= mac; j++)
		{
			cout << data[i][j];
		}
		cout << "\n";
	}


	return 0;
}