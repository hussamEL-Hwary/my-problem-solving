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

	int n;
	scanf("%d", &n);
	if (n == 1)
	{
		cout << "NO\n";
		return 0;
	}

	for (int i = 1; (i*(i + 1)) / 2 <= n; i++)
	{
		int x = (i*(i + 1)) / 2;
		int f = n - x;
		int a = sqrt(f*2);
		if ( a*(a + 1) / 2 == f&&a!=0)
		{
			cout << "YES\n";
			return 0;
		}
           
	}
	
	cout << "NO\n";
	return 0;

}