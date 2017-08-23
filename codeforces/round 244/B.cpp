//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<cstdio>
using namespace std;

int main()
{
	int n, t, c, ways = 0;
	scanf("%d%d%d", &n, &t, &c);
	int x = 0;
	while (n--)
	{
		int p;
		scanf("%d", &p);
		if (p <= t)
			x++;
		else if (p > t)
		{
			if (x >= c)
			{
				ways += (x - c) + 1;
			}
			x = 0;
		}
	}
	if (x >= c)
		ways += (x - c) + 1;

	printf("%d\n", ways);
	return 0;
}