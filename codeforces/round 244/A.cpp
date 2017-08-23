//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<iostream>

using namespace std;
int main(){
	int police = 0, unk = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		switch (x)
		{
		case -1:if (police>0) --police; else ++unk;
			break;
		default:
			police += x;
		
		}
	
	}
	cout << unk << endl;
	return 0;
}