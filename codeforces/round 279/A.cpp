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
	int sz;
	cin >> sz;
	int on = 0, tw = 0, thr = 0;
	vector<int>ind1;
	vector<int>ind2;
	vector<int>ind3;
	for (int i = 1; i <= sz; i++)
	{
		int num;
		cin >> num;
		if (num == 1)
		{
			on++;
			ind1.push_back(i);
		}
		else if (num == 2)
		{
			tw++;
			ind2.push_back(i);

		}
		else
		{
			thr++;
			ind3.push_back(i);
		}

	}

	int min = on;
	if (tw < min)
		min = tw;
	if (thr < min)
		min = thr;

	if (min == 0)
	{
		cout << min << endl;
		return 0;
	}
	else
	{
		cout << min << endl;
		int j = min;
		for (int i = 0; i < min; i++)
		{
			cout << ind1[ind1.size() - j] << " ";
			cout << ind2[ind2.size() - j] << " ";
			cout << ind3[ind3.size() - j] << endl;
			j--;
		}
	}



	return 0;

}