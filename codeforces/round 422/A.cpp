//============================================================================
// Name        :I'm bored with life
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/822/A
//============================================================================

#include <iostream>
using namespace std;

int fact(int n)
{
if(n==0)
	return 1;
return n*fact(n-1);
}
int main() {

	int a,b;
	cin>>a>>b;
	cout<<fact(min(a,b));
	return 0;
}