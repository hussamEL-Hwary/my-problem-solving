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
int main()
{

	int flash;
	int fcap;
	cin >> flash;
	cin >> fcap;
	vector<int>size(flash);
	for (int i = 0; i < flash; i++)
	{
		cin >> size[i];
	}

	sort(size.rbegin(), size.rend());
	int num = 0;
	int val = 0;
	for (int j = 0; j < flash; j++)
	{
		val += size[j];
		num++;
		if (val >= fcap)
			break;
		
	}

	cout << num << endl;

	return 0;
}