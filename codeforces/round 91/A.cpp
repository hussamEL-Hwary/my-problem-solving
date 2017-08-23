//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>

using namespace std;

bool islucky(int n)
{
	while (n)
	{
		int x = n % 10;

		if (x != 7 && x != 4)

			return false;



		n /= 10;
	}


	return true;
}

bool divisible(int x)
{
	for (int i = 4; i<x; i++)
	{
		if (islucky(i) && x%i == 0)
			return true;
	}

	return false;
}



int main()
{
	int num;    cin >> num;

	if( islucky(num) )
	  cout<<"YES\n";

	else if(divisible(num))
	cout<<"YES\n";

	else
	cout<<"NO\n";
	

	return 0;
}