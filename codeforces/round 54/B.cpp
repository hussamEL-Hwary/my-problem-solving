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
	int num;
	scanf("%d", &num);

	for (int i = num; i >= 1; i--)
	{
		if (num%i == 0)
		{
			cout << i << " ";
			num = i;
		}
	}


	return 0;
}