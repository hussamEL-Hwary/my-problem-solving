//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
using namespace std;

int best(int x)
{
	if (x > 0)
		return x;
	int num1 = x / 10;
	int val =abs(x) % 10;
	x /= 100;
	int num2 = (x * 10) + (-val);
	if (num1 > num2)
		return num1;
	return num2;

}
int main()
{
	int sum;
	cin >> sum;
	 
	cout << best(sum) << endl;
	return 0;
}