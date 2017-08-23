//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;

int main()
{
	int n;
	long long  amou;     scanf("%d", &n);
	cin >> amou;

	int dis = 0;
	for (int i = 0; i < n; i++)
	{
		char sign; long long val;
		cin >> sign >> val;
		if (sign == '+')
			amou += val;
		else
		{
			if ( val >amou)
			{
				dis++;
			}
			else
				amou -= val;
		}


	}

	cout << amou << " " << dis << endl;

	return 0;
}