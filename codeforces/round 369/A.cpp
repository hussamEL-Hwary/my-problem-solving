//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
using namespace std;

string arr[1002];
int main() {

	int n;
	scanf("%d", &n);
	bool found = false;
	for (int i = 0; i < n; i++) {
		string inp;
		cin >> inp;
		if (!found && inp[0] == 'O' && inp[1] == 'O') {
			inp[0] = '+';
			inp[1] = '+';
			found = true;
		}
		if (!found && inp[3] == 'O' && inp[4] == 'O') {
			found = true;
			inp[3] = '+';
			inp[4] = '+';
		}
		arr[i] = inp;

	}
	if (found) {
		cout << "YES\n";
		for (int i = 0; i < n; i++) {
			cout << arr[i] << endl;
		}
	} else
		cout << "NO\n";
	return 0;
}