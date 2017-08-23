//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


#include<bits\stdc++.h>

using namespace std;

int arr[6];
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			int x;
			scanf("%d", &x);
			arr[j] = max(arr[j], arr[j - 1]) + x;
		}
		printf("%d ", arr[m]);
	}



	return 0;
}