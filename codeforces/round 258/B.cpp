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

	vector<int>values;
	int sz,start=0,las=0;
	bool found = false;

	scanf("%d", &sz);
	
	for (int i = 0; i < sz; i++)
	{
		int x;
		scanf("%d", &x);
		values.push_back(x);
	}
	for (int i = 0; i < sz - 1; i++)
	{
		if (values[i]>values[i + 1])
		{
			start = i;
			break;
		}
		}
	
	int x = start;
	for ( x = start; x < sz - 1; x++)
	{
		if (values[x] < values[x + 1])
		{
			las=x;
			break;
		}
		

	}

	if (x == sz - 1)
		las = x;
	reverse(values.begin() + start, values.begin() +  las+1);
	for (int i = 0; i < sz - 1; i++)
	{
		if (values[i]>values[i + 1])
		{
			cout << "no\n";
			return 0;
		}
	}
	if (start == sz - 1)
		start = 0;
	cout << "yes\n" << start + 1 << " " << las + 1 << "\n";

	return 0;

}