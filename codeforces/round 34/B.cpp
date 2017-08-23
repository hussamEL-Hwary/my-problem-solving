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
	int Tvs, carr;
	scanf("%d%d", &Tvs, &carr);
	vector<int>sor(Tvs);
	int sum = 0;
	for (int i = 0;i < Tvs; i++)
	{
		cin >> sor[i];
	}

	sort(sor.begin(), sor.end());

	
	for (int i = 0; i < carr&&sor[i]<=0; i++)
	{
		
		sum += sor[i];
	}

	
		printf("%d\n", -sum);
	
	
	return 0;

}