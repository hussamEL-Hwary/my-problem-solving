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
int main(){
	string out[] = { "NO", "YES" };
	string pos;
	bool found = 0;
	cin >> pos;
	int c = 1;
	for (int i = 1; i < pos.length(); i++)
	{

		c = (pos[i] == pos[i - 1]) ? c + 1 : 1;
		if (c >= 7)
		{
			found = 1;
			break;
		}
	}
	cout << out[found] << endl;
	return 0;
}