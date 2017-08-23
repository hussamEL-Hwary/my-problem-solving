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
	int a, b, n;
	double res = 999999999;
	cin >> a >> b >> n;
	
	for (int i = 0; i < n; i++)
	{
		int p1, p2, v;
		cin >> p1 >> p2 >> v;
		double x1 = pow((p1 - a), 2);
		double x2 = pow((p2 - b), 2);
		double tmp = sqrt(x1 + x2);
		tmp /= v;
		res = min(res, tmp);

	}

	cout << fixed << setprecision(7) << res << "\n";
	return 0;
}