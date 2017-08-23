//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
using namespace std;
#define all(l)   (l).begin(),(l).end()
int main()
{
		int a , b , c ;
		cin >> a >> b >> c;
		vector<int>v(6);
		v[0] = a*b*c;
		v[1] = a*b + c;
		v[2] = b*c + a;
		v[3] = a + b + c;
		v[4] = (a + b)*c;
		v[5] = (b + c)*a;
		cout << *max_element(all(v))<<endl;

       

	return 0;
}