//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <bits/stdc++.h>
#include<algorithm>
using namespace std;


int main() {
	int sz,D=0,A=0;
	string inp;
	cin >> sz;
	cin >> inp;
	for (int i = 0; i < sz; i++)
	{
		if (inp[i] == 'A')
			A++;
		else
			D++;
	}
	if (A>D)
	{
		cout << "Anton\n";

	}

	else if (D > A)
		cout << "Danik\n";
	else
		cout << "Friendship\n";

	return 0;
}