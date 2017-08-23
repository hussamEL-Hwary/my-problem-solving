//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int members, part;
	vector<int>v;
	cin >> members >> part;
	for (int i = 0; i < members; i++)
	{
		int num;
		cin >> num;
		//if (num <= part||num==part+1)
			v.push_back(num);

	}
	sort(v.begin(), v.end());

	int teams = 0;
	for (int i = 0; i < int(v.size()); i++)
	{
		if (v[i] + part <= 5)
			teams++;
	}

	cout << teams/3 << "\n";
	return 0;
}