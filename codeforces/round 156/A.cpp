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
	
	int num;
	cin >> num;
	string arr[3] = { "chest", "biceps", "back" };
	vector<int>v(3, 0);
	for (int i = 0; i < num; i++)
	{
		int val;
		cin >> val;
		v[i % 3] += val;

	}

	int out = -1,vv=-1;
	for (int i = 0; i < 3; i++)
	{
		if (v[i]>vv)
		{
			out = i;
			vv = v[i];
		}
	}

	cout << arr[out] << endl;
	
	
	
	
	
	
	/*int a, b;
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
	*/
	return 0;
}