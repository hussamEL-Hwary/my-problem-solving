//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
using namespace std;
int main(){

	string n, n2;
	cin >> n >> n2;

	sort(n2.rbegin(), n2.rend());
	//cout << n2 << endl;
	int x = 0, i = n.size(),s=n2.size();
	for (int t = 0; t < i; t++){

		if (x == s)break;

		if (n2[x]>n[t]){
			n[t] = n2[x];
			x++;
			}

	}
		
	cout << n << endl;

	}