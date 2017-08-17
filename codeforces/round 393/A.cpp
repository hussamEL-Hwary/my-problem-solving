//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/760/A
//============================================================================

#include<bits\stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

	int month,day;
	cin >> month >> day;
	int c = 0,res=0;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		c = 31;
	else if (month == 2)
		c = 28;
	else
		c = 30;
	c += (day - 1);

	res = c / 7;
	if (c % 7 != 0)
		res += 1;
	cout << res << "\n";

	return 0;
}