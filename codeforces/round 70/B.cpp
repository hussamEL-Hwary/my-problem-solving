//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	string result="ROYGBIV",helper="GBIV";
	
	int cyc=n/4;
	int add=n%4;
	for(int i=0;i<cyc;++i)
	{
		result+=helper;
	}
	
	for(int i=0;i<add;++i)
	{
		result+=helper[i];
	}
	cout<<result;
	
	return 0;
}