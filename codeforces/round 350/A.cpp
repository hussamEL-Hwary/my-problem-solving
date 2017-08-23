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
	int day;
	scanf("%d", &day);

	int m = day / 7 * 2;
	int n =m;
	if (day % 7 >= 2)
		n += 2;
	else
		n += day % 7;
	if (day % 7 == 6)
		m++;
	printf("%d %d\n", m, n);


	return 0;
}