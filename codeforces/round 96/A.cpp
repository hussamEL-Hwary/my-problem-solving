//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


#include<iostream>
#include<string>

using namespace std;

int main()
{
	string P; cin >> P;
	bool set = false;
	for (int i = 0; i < P.length(); i++)
	{
		if (P[i] == 'H' || P[i] == 'Q'  || P[i] == '9')
			set = true;


	}
	if (set == true)
		cout << "YES\n";
	else
		cout << "NO\n";
}