//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> res;
int main() {
	int sum, limtit;
	cin >> sum >> limtit;

	for (int i = limtit; i > 0 && sum > 0; i--) {
		if (sum - (i & -i) >= 0) {
			sum -= (i & -i);
			res.push_back(i);

		}
	}

	if(sum!=0)
	{
	cout<<-1<<"\n";
	}
	else
	{
		cout<<res.size()<<"\n";
		for(int i=0;i<res.size();i++)
		{
			cout<<res[i]<<" ";
		}
	}
	return 0;
}