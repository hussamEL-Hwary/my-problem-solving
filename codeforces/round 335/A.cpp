//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{

	int a, b, c;
	int x, y, z;
	cin >> a >> b >> c >> x >> y >> z;

	int needed = 0;
	int surplus = 0;


	int sum = 0;
	sum = a - x;
	if (sum <= 0)
		needed += (-1 * sum);
	else
		surplus += (sum/2);

	sum = 0;
	sum = b - y;
	if (sum <= 0)
		needed += (-1 * sum);
	else
		surplus += (sum / 2);

	sum = 0;
	sum = c - z;
	if (sum <= 0)
		needed += (-1 * sum);
	else
		surplus += (sum / 2);


	if (surplus >= needed )
	cout << "Yes\n";

	else

		cout << "No\n";


	return 0;
}


