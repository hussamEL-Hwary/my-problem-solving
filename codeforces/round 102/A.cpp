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
	
	


		int r1, r2, c1, c2, d1, d2;
		scanf("%d%d%d%d%d%d", &r1, &r2, &c1, &c2, &d1, &d2);
		vector<int>res(4, 0);

		bool found = false;

		for (int i = 1; i < 10; i++)
		{
			for (int j = 1; j < 10; j++)
			{
				if (i == j)
					continue;
				if (i + j == r1)

				{
					res[0] = i;
					res[1] = j;
					res[2] = d2 - res[1];
					res[3] = d1 - res[0];

					if (res[2] + res[3] == r2&&res[0] + res[2] == c1&&res[1] + res[3] == c2)
					{
						found = true;
						break;
					}
				}
			}

			if (found)
				break;
		}


		if (res[0] < 1 || res[1] <1 || res[2] < 1 || res[3] < 1||res[0] > 9 || res[1] > 9 || res[2] > 9 || res[3] > 9 || res[0] == res[1] || res[0] == res[2] || res[0] == res[3] || res[1] == res[2] || res[1] == res[3] || res[2] == res[3])
			found = false;

		if (found)

			printf("%d %d\n%d %d\n", res[0], res[1], res[2], res[3]);

		else
			printf("-1\n");
	

	return 0;
}