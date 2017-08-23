//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


#include<bits\stdc++.h>

using namespace std;

int arr[1001];
int main()
{
	int res = 1, n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}


	for (int i = 0; i < n; i++)
	{
		int t = 1;
		int t1 = i, t2 = i;
		
		while (t1-1>=0&&arr[t1-1]<=arr[t1])
		{
			t++;
			t1--;
			
		}
		while (t2 + 1 < n&&arr[t2 + 1] <= arr[t2])
		{
			t++; t2++;

		}
		res = max(res, t);
	}

	cout << res << "\n";


	return 0;
}