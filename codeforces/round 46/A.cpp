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

bool vow(char x)
{
	return x == 'A' || x == 'a' || x == 'E' || x == 'e' || x == 'I' || x == 'i' || x == 'o' || x == 'O' || x == 'U' || x == 'U' || x == 'Y' || x == 'y';
}



int main()
{

	string  s;
	getline(cin, s);

	int cou = int(s.size()) - 1;

	while (s[cou]=='?'||s[cou]==' ')
	{
		cou--;
	}

	if (vow(s[cou]))
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
