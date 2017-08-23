//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int wanted;
	scanf("%d", &wanted);
	int res = 1;
	while (wanted >= 2)
	{
		if (wanted % 2 != 0)
			res++;
		wanted /= 2;
	}

	cout << res << endl;


	return 0;
}