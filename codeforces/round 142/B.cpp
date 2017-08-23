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
	long long input,s;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%I64d", &input);
		int j;
		 s = sqrtl(input);
		for (j = 2; j*j < s; j++)
		{
			if (input%j == 0)
				break;
		}

		if (j*j>s&&s*s == input&&input > 1)
			printf("YES\n");
		else
			printf("NO\n");
	}


	return 0;

}