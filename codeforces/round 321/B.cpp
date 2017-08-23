//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;

int main()
{


	


		int n, dif;     scanf("%d%d", &n, &dif);

		vector<pair<int, int>>re(n);

		for (int i = 0; i < n; i++)
		{
			cin >> re[i].first >> re[i].second;
		}


		sort(re.begin(), re.end());

		long long sum = 0;

		long long tmpsum = 0;
		int l = 0, r = 0;
		for ( l = 0; r < n;)
		{
			if (re[r].first - re[l].first >= dif) tmpsum -= re[l++].second;
			else
				tmpsum += re[r++].second;
			

			sum = max(sum, tmpsum);
		}


		cout << sum << endl;
	
	return 0;
}