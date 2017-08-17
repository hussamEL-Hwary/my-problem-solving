//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int found[4];
	for (int i = 0; i < 4; i++)
	{
		found[i] = -1;
	}

	pair<bool, int>seq[4];
	for (int i = 0; i < 4; i++)
	{
		seq[i].first = false;
		seq[i].second = 0;
	}

	string in;
	cin >> in;

	for (int i = 0; i < in.size(); i++)
	{
		if (in[i] == '!')
		{
			seq[i % 4].second++;
		}
		else if (in[i] == 'R')
		{
			found[0] = i % 4;
			seq[i % 4].first = true;
		}
		else if (in[i] == 'B')
		{
			found[1] = i % 4;
			seq[i % 4].first = true;
		}
		else if (in[i] == 'Y')
		{
			found[2] = i % 4;
			seq[i % 4].first = true;
		}
		else if (in[i] == 'G')
		{
			found[3] = i % 4;
			seq[i % 4].first = true;
		}
	}


	if (found[0] == -1)
	{
		for (int i = 0; i < 4; i++)
		{
			if (seq[i].first == false)
			{
				cout << seq[i].second << " ";
				seq[i].first = true;
			}
		}

	}
	else
		cout << seq[found[0]].second << " ";


	if (found[1] == -1)
	{
		for (int i = 0; i < 4; i++)
		{
			if (seq[i].first == false)
			{
				cout << seq[i].second << " ";
				seq[i].first = true;
			}
		}

	}
	else
		cout << seq[found[1]].second << " ";

	if (found[2] == -1)
	{
		for (int i = 0; i < 4; i++)
		{
			if (seq[i].first == false)
			{
				cout << seq[i].second << " ";
				seq[i].first = true;
			}
		}

	}
	else
		cout << seq[found[2]].second << " ";


	if (found[3] == -1)
	{
		for (int i = 0; i < 4; i++)
		{
			if (seq[i].first == false)
			{
				cout << seq[i].second << " ";
				seq[i].first = true;
			}
		}

	}
	else
		cout << seq[found[3]].second << " ";




	return 0;

}