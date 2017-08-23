//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n, d; 
	scanf("%d", &n);
	if (n == 1)
	{
		int l;
		cin >> l;
		int p;
		cin >> p;
		if (p==0)
		cout << l << "\n";
		else
			cout << 0 << "\n";
		exit(0);
	}
	vector<int>wire(n);
	for (int i = 0; i < n; i++)
	{
		cin >> wire[i];

	}

	scanf("%d", &d);

	while (d--)
	{

		int ind, op;
		scanf("%d%d", &ind, &op);
		if (ind - 1 == 0)
		{
			wire[ind] += wire[ind - 1] - op;
			wire[ind - 1] = 0;
		}
		else if (ind==n)
		{
			op -= 1;
			wire[ind - 2] += op;
			wire[ind - 1] = 0;
		}
		
		else {
			wire[ind] += wire[ind - 1] - op;
		op -= 1;
		wire[ind - 2] += op;
		wire[ind - 1] = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << wire[i] << endl;
	}


	return 0;

}