//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int day, val;
	int a, b;
	cin >> day>>val;

	cin >> a >> b;
	int dif = a - b - val;
	for (int i = 0; i < day - 2; i++)
	{
		int num;   cin >> num;
		if (b - num - val>dif)
			dif = b - num - val;

		b = num;

	}
	

	if (dif <= 0)
		cout << 0 << endl;
	else

		cout << dif << endl;


	return 0;
}