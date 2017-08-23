//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;

int va[27];
int main()
{
	int maxv = 0;
	string input;
	int k;
	long long res = 0;
	cin >> input;
cin >> k;
	for (int i = 0; i < 26; i++)
	{
		cin >> va[i];
		if (va[i]>maxv)
			maxv = va[i];
	}
	int c = 1;
	for (int i = 0; i < input.size(); i++)
	{
		res += c*va[input[i] % 97];
		c++;
	}
	for (int i = 0; i < k; i++)
	{
		res += c*maxv;
		c++;
	}
	cout << res << "\n";
}