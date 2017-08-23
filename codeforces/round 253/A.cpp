//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;
int main(){
	char temp;
	string v;
	getline(cin, v);
	sort(v.begin(),v.end());

	
	v.resize(unique(v.begin(), v.end()) - v.begin());
	
	if(v.size() <= 2)
	{
		cout << 0 << endl;
	}
	else if (v.size() == 3)
	{
		cout << 1 << endl;
	}
	else
		cout << int(v.size()) - 4 << endl;
		return 0;
}