//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<iostream>
#include <stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int d1, d2, d3;
	scanf("%d%d%d", &d1, &d2, &d3);
	

	int ans = 0;
	int ans1 = 2 * d1 + 2 * d2;
	int ans2 = d1 + d2 + d3;
	int ans3 = 2 * (d1 + d3);
	int ans4 = 2 * (d2 + d3);
	int res1 = min(ans1, ans2);
	int res2 = min(ans3, ans4);
	ans = min(res1, res2);
	
	
	/*
	if (d1 + d2 == d3)
	{
		ans = d1 + d2 + d3;
	}
	else if (d1 + d2 < d3)
		ans = 2 * d1 + 2 * d2;
	else if (2 * d1 + 2 * d3 < 2 * d2 + 2 * d3)
		ans = 2 * d1 + 2 * d3;
	else if (2 * d2 + 2 * d3 < 2 * d1 + 2 * d3)
		ans = 2 * d2 + 2 * d3;
*/

	printf("%d\n", ans);


}