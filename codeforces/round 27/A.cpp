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
	int num;
	scanf("%d", &num);
	vector<int>val(3200,0);
	

	for (int i = 0; i < num; i++)
	{
		int x;
		cin >> x;
		 val[x]=1;
	}

	int re = 1;

	while (val[re]==1)
	{
		re++;
	}

	cout << re << endl;
	return 0;

}
