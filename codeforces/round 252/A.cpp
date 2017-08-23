//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
using namespace std;

int main()
{

	int res = 0;  
	vector<int>coun;
	int seller, unit;
	cin >> seller >> unit;
	for (int i = 1; i <= seller; i++)
	{
		int num; cin >> num;
		bool fou = false;
		while (num--)
		{
			
			int price;  cin >> price;
			if (price < unit)
			{
				if (!fou)
				fou = true;

				
				
			}
			
		}
		if (fou)
		{
			res++;
			coun.push_back(i);
		}
	}
	cout << res << endl;
	for (int i : coun)
		cout << i << " ";
	cout << "\n";

	return 0;
}