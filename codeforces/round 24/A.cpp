//============================================================================
// Name        :Diplomas and Certificates
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/818/A
//============================================================================

#include <iostream>
using namespace std;

int main() {

	unsigned long long n, k;
	cin >> n >> k;
	unsigned long long hal=n/2;

	unsigned long long res = n / (k+1) / 2 + 1;
	while (res > 0) {
		if (res == hal / (k+1))
			break;
		--res;
	}
  n-=res;
  n-=k*res;

	cout << res<<" "<<k*res<<" "<<n;

	return 0;
}