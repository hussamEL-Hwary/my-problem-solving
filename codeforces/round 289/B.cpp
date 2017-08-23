//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


#include<bits/stdc++.h>
using namespace std;




int main() {

	int mx = 0, mn = 10000, n, k;
	scanf("%d%d", &n, &k);

	vector<int>val(n);
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &val[i]);
		if (val[i]>mx)
			mx = val[i];
		if (val[i]<mn)
			mn = val[i];

	}


	if (mx - mn>k)
	{
		cout << "NO\n";
	}
	
	else
	{
		printf("YES\n");
		for (int i = 0; i<n; i++)
		{
			for (int j = 0; j<val[i]; j++)
			{
				printf("%d ", j%k + 1);
			}
			printf("\n");
		}

	}



	return 0;
}