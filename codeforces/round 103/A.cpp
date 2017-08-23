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
	int mn = 10000, mx = -1;
	int indmn = 0, indmx = 0;
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		int val;
		scanf("%d", &val);
		if (val>mx)
		{
			mx = val;
			indmx = i;
		}
		if (val <= mn)
		{
			mn = val;
			indmn = i;
		}
	}

	if (indmx >= indmn)
		cout << indmx + (num - 1) - indmn - 1 << endl;
	else
		cout << indmx + (num - 1) - indmn << endl;


	
	return 0;
}