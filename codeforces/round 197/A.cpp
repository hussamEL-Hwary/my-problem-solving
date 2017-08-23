//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s;
	cin >> s;
	vector<int>v;
	for (int i = 0; i < s.length(); i += 2)
	{
		v.push_back(s[i] - '0');

	}
	sort(v.begin(), v.end());
	for (int o = 0; o < v.size(); o++)
	{
		cout << v[o];
		if(o!=int(v.size())-1)
			cout<< "+";
	}
	cout << endl;

	return 0;
}