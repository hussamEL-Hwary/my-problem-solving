//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;

map<int, bool> stor;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, k;
	cin >> n >> m >> k;

	vector<vector<pair<int, int>>> gr(n+1);
	int res = INT_MAX;
	for (int i = 0; i < m; i++) {
		int ind;
		pair<int, int> inp;
		cin >> ind >> inp.first >> inp.second;
		gr[ind].push_back(inp);
	}

	if (k == 0) {
		cout << -1 << "\n";
		return 0;
	} else {
		for (int i = 0; i < k; i++) {
			int val;
			cin >> val;
			stor[val] = true;
		}
		for (int it = 1; it < n+1;it++)
		 {
			for(int k=0;k<gr[it].size();k++)
			{
				if((stor.find(gr[it][k].first)!=stor.end()||stor.find(it)!=stor.end())
						&&(stor.find(gr[it][k].first)==stor.end()||stor.find(it)==stor.end())&&gr[it][k].second<res)
			   res=gr[it][k].second  ;
			}

		}
	}
	if (res == INT_MAX) {
		cout << -1 << "\n";
	} else
		cout << res << "\n";

	return 0;
}