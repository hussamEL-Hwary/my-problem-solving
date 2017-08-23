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
	int a, b;
	cin >> a >> b;
	int fwin = 0, draw = 0, swin = 0;
	for (int i = 1; i < 7; i++)
	{
		if (abs(a - i)<abs(b - i))
			fwin++;
		else if (abs(b - i)<abs(a - i))
			swin++;
		else if (abs(a - i) == abs(b - i))
			draw++;
	}

	cout << fwin << " " << draw << " " << swin << endl;

	return 0;
}