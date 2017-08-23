//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


#include<bits\stdc++.h>

using namespace std;


int arr[100005];

int main()
{
	set<int>mp;
	int n, m;
	scanf("%d%d", &n, &m);
	int i;
	for (i = 0; i<n; i++)
	{
		cin >> arr[i];
	}
	
	for (i = n-1; i >=0; i--)
	{
		mp.insert(arr[i]);
		arr[i] = mp.size();

	}

	for (int j= 0;j<m; j++)
	{
		int val;
		scanf("%d", &val);
		cout << arr[val - 1] << "\n";
	}


	return 0;
}