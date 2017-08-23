//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;


int d, r, c, res;
int main()
{
	vector<int>n;
	scanf("%d%d%d", &r, &c,&d);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			int x;
			scanf("%d", &x);
			n.push_back(x);
		}
	}
	sort(n.begin(), n.end());

	int mid = n[n.size() / 2];
	
	

	bool f = true;
	for (int i = 0; i < n.size() / 2; i++)
	{
		if ((mid - n[i]) % d != 0)
		{
			f = false;
			break;
		}

		res += (mid - n[i])/d;
	}

	for (int i = n.size() / 2; i < n.size(); i++)
	{
		if (( n[i]-mid) % d != 0)
		{
			f = false;
			break;
		}

		res += ( n[i]-mid)/d;
	}

	if (f)
		printf("%d\n", res);
	else
		printf("-1\n");
	return 0;
}