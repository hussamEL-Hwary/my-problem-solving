//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
using namespace std;
#define all(v)  (v).begin(),(v).end()  
int main()
{
	int sum;
	cin >> sum;
	 sum = (sum*(sum + 1)) / 2;
	set<int>s;
	int x;
	cin >> x;
	while (x--)
	{
		int val1;
		cin >> val1;
		s.insert(val1);
	}
	cin >> x;
	while (x--)
	{
		int val2;
		cin >> val2;
		s.insert(val2);

	}
	int out = 0;
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
		out += *it;
	if (out == sum)
		cout << "I become the guy.\n";
	else
		cout << "Oh, my keyboard!\n";
	return 0;
}