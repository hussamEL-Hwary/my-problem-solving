//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
#include<algorithm>

using namespace std;



int main()
{
	

		string a, b;
		cin >> a >> b;

		
		int res = 0;
		int res2 = 0;

		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] != b[i])
			{
				if (a[i] == '4')
					res++;
				else
					res2++;
			}
		}
		cout << max(res, res2) << endl;
	
	return 0;

}