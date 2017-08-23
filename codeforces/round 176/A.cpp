//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<iostream>
using namespace std;

char sq[4][4];
bool test(int i, int j)
{
	if (i + 1 == 4 || j + 1 == 4)
		return false;
	return sq[i][j] == sq[i][j + 1] && sq[i][j] == sq[i + 1][j] && sq[i][j] == sq[i + 1][j + 1];
}

bool test()
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)

		if (test(i, j))

			return true;

	}
	return false;

}

int main()
{
	
	bool found = false;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cin >> sq[i][j];
		}

	}
	
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			char ori = sq[i][j];
				
					
					if (sq[i][j] == '.')
						sq[i][j] = '#';
					else
						sq[i][j] = '.';
					
					if (test())
						found = true;
		             sq[i][j] = ori;
		}

	}

	if (found)
		cout << "YES\n";
	else
		cout << "NO\n";
	

	return 0;
}