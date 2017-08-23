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

int main() {

	int r, c;

	scanf("%d%d", &r, &c);
	vector<pair<int, int>>poin;
	vector<vector<int>>val(r, vector<int>(c));

	for (int i = 0; i<r; i++)
	{
		for (int j = 0; j<c; j++)
		{
			cin >> val[i][j];
			if (val[i][j] == 0)
			{
				pair<int, int>p;
				p.first = i;
				p.second = j;
				poin.push_back(p);
			}
		}
	}

	vector<vector<int>>v(r, vector<int>(c));
	for (int i = 0; i<r; i++)
	{
		for (int j = 0; j<c; j++)
		{
			v[i][j] = 1;
		}
	}

	for (int i = 0; i<int(poin.size()); i++)
	{
		for (int j = 0; j<c; j++)
		{
			v[poin[i].first][j] = 0;
		}
		for (int k = 0; k<r; k++)
		{
			v[k][poin[i].second] = 0;
		}


	}

	for (int i = 0; i<r; i++)
	{
		for (int j = 0; j<c; j++)
		{
			if (val[i][j] == 1) 
			{
				bool f = false;
				for (int l = 0; l < c; l++)
				{
					if (v[i][l] == 1)
					{
						f = true;
						break;
					}

					}
				for (int z = 0;!f&& z < r; z++)
				{
					if (v[z][j] == 1)
					{
						f = true;
						break;
					}
				}

				if (!f)
				{
					cout << "NO\n";
					return 0;
				}
			}
		}

	}

	cout << "YES\n";

	for (int i = 0; i<r; i++)
	{
		for (int j = 0; j<c; j++)
		{
			cout << v[i][j] << " ";
		}
		cout << "\n";

	}


	return 0;
}