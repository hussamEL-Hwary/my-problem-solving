//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{

	int num, val;
	int res = 0;
	cin >> num >> val;
	for (int i = 0; i < num; i++)
	{
		int k;
		cin >> k;
		int com = 0;
		while (k)
		{
			if (k % 10 == 7 || k % 10 == 4)
				com++;
				k /= 10;
		}
		if (com <= val)
			res++;
	}

	cout << res << endl;



	/*int num;
	cin >> num;

	vector<string>ch(num);

	for (int i = 0; i < num; i++)
	{
		cin >> ch[i];

	}

	int last = num - 1;
	bool found = true;
	for (int i = 0; i < num; i++)
	{
		if (ch[i][i] != ch[i][last])
		{
			found = false;
			break;
		}
		last--;
	}
	if (!found)
	{
		cout << "NO\n";
		return 0;
	}
	sort(ch[0].begin(), ch[0].end());
	ch[0].resize(unique(ch[0].begin(), ch[0].end()) - ch[0].begin());
	for (int i = 1; i < num; i++)
	{
		sort(ch[i].begin(), ch[i].end());
		ch[i].resize(unique(ch[i].begin(), ch[i].end()) - ch[i].begin());
		if (ch[i] != ch[0]||ch[0].size()<=1)
		{
			cout << "NO\n";
			return 0;
		}
	}

	cout << "YES\n";*/
	return 0;
}