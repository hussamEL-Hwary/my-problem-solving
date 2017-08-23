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

int shop[100000];
int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		cin >> shop[i];
	}


	sort(shop, shop + n);
	int days;
	scanf("%d", &days);

	for (int i = 0; i < days; i++)
	{
		int money;
        scanf("%d",&money);
	cout<<upper_bound(shop,shop+n,money)-shop<<"\n";
	}

	return 0;
}