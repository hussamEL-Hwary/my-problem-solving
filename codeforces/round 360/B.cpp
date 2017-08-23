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

	string s;
	cin >> s;
	string res = s;
	reverse(s.begin(), s.end());
	res += s;
	cout << res << "\n";
}