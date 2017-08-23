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
	string ss="";
	for (int i = 1; i <= 1000; i++)
	{
		ss += to_string(i);
	}

	int num;
	scanf("%d", &num);
	cout << ss[num-1] << endl;


	return 0;
}