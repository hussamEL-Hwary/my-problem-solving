//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
#include<algorithm>
using namespace std;





int main()
{
	

	map<string, int>mp;
	mp["C"] = 1;
	mp["C#"] = 2;
	mp["D"] = 3;
	mp["D#"] = 4;
	mp["E"] = 5;
	mp["F"] = 6;
	mp["F#"] = 7;
	mp["G"] = 8;
	mp["G#"] = 9;
	mp["A"] = 10;
	mp["B"] = 11;
	mp["H"] = 12;



		string a, b, c;
		cin >> a >> b >> c;

		int arr[3];
		arr[0] = mp[a];
		arr[1] = mp[b];
		arr[2] = mp[c];

		sort(arr, arr + 3);

		do{
			int x1 = arr[1] - arr[0];
			int x2 = arr[2] - arr[1];
			if (x1 < 0) x1 += 12;
			if (x2 < 0) x2 += 12;
			if (x1 == 4 && x2 == 3)
			{
				cout << "major\n";
				return 0;
			}
			if (x1 == 3 && x2 == 4)
			{
				cout << "minor\n";
				return 0;
			}

		} while (next_permutation(arr, arr + 3));
		


		
		cout << "strange\n";

	

	return 0;

}