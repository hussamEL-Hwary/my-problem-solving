//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;

int main()
{

	int n, m;
	long long reslt = 0;
	scanf("%d%d", &n, &m);
	int current = 1;
	for (int i = 0; i < m; i++)
	{
		int x;
		scanf("%d", &x);
		reslt += (x - current + n) % n;
		current = x;
	}
	cout << reslt << "\n";
	

}