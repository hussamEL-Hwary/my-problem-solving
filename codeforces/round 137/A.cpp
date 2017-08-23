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


int main()
{
	int num, ind;
	scanf("%d%d", &num, &ind);
	vector<int>v(num);
	ind--;
	for (int i = 0; i < num; i++)
	{
		cin >> v[i];
	}
	
	sort(v.begin() + ind, v.end());

	int dis = unique(v.begin() + ind, v.end()) - (v.begin() + ind);
	if (dis>1)
	{
		cout << -1 << endl;
		return 0;
	}
	int r = ind;

	int x = v[ind];
	ind--;
	while (ind>=0&&v[ind]==x)
	{
		r--;
		ind--;
	}

	cout << r << endl;

	return 0;
}