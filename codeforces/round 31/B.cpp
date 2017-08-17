//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/31/B
//============================================================================

#include<bits\stdc++.h>
using namespace std;
int main()
{
	string input;
	cin >> input;
	vector<string>res;
	bool found = false;
	string tmp = "";
	for (int i = 0; i < int(input.size()); i++)
	{
		if (input[i] == '@')
		{
			if (i == input.size() - 1)  { found = true; break; }
			if (tmp.size() == 0)  { found = true; break; }
			tmp += input[i];
			if (input[i + 1] != '@')
				tmp += input[++i];
			else
			{
				found = true;
				break;
			}
			res.push_back(tmp);
			tmp = "";
		}
		else
			tmp += input[i];
		


	}
	if (tmp.size() && !res.size()) found = true;   //test failed
	if (tmp.size()&&res.size()) res[res.size() - 1] += tmp;
	if (found)
	{
		cout << "No solution\n";
	}
	else{
		for (int i = 0; i < res.size(); i++)
		{
			if (i==res.size()-1)
			cout << res[i] <<"\n";
			else
				cout << res[i] << ",";
		}
	}
	return 0;
}