//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<iostream>
#include<algorithm>
using namespace std;

int hack(int succ, int un)
{
	return (succ * 100) + (un*-50);

}

int main()
{
	int time[5];
	int wrong[5];
	int hs, hu;
	int x = 500;
	double ans = 0;
	
	for (int i = 0; i < 5; i++)
	{
		cin >> time[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cin>>wrong[i];
	}

	cin >> hs >> hu;

	for (int i = 0; i < 5; i++)
	{

		ans += max(0.3*x, (1 - time[i] / 250.0)*x -( 50 * wrong[i]));
		x += 500;

	}

	ans += hack(hs, hu);
	cout << ans << endl;


	return 0;
}