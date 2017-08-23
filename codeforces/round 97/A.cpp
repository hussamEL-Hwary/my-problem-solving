//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	vector <int>v(n);

	for (int i = 0; i<n; i++)
	{
		cin >> v[i];
	}
	int search = 1;
	for (int j = 0; j<n; j++)
	{
		for (int k = 0; k<n; k++)
		{
			if (v[k] == search)
				cout << k+1 ;
			
		}
		if (j == n - 1)
			cout << endl;
		else
			cout << " ";

		search++;
	}

	return 0;
}