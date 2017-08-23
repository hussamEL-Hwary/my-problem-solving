//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;


int m, n, graph[1001];


int main()
{

	scanf("%d%d", &n, &m);


	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		graph[a] = 1, graph[b] = 1;

	}

	int ind;
	for (ind = 1; ind <= n&&graph[ind]; ind++);

	printf("%d\n", n - 1);
	for (int i = 1; i <= n; i++)
	{
		if (i != ind)
		{
			printf("%d %d\n", i, ind);

		}


	}


	return 0;
}