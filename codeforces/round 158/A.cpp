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

	long long  x,y,n,o=-1; 
	cin >> x>>y>>n;

	for (int t = 0; t <= 9; t++){

		if (((x * 10) + t) % y == 0){
			o = t;
			break;
		}
	}
		if (o == -1){
			cout << -1 << endl;
			return 0;

		}
		cout << (x * 10) + o;
		 
		while (--n){
			cout << "0";


		}


	}
