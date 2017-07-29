//============================================================================
// Name        :Sasha and Sticks
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/contest/832/problem/A
//============================================================================

#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define INF                         (int)1e9




int main() {

	long long n,k;
	cin>>n>>k;
	int res=n/k;
	if(res&1)
		cout<< "YES";
	else
		cout<< "NO";

	return 0;
}