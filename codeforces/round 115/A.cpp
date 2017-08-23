//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;


int fun(string s)
{
	int res = 0;
	if ((s.size() > 7) || (s[0] == '0'&&s.size() != 1))
		return -1;
	for (int i = 0; i<s.size(); i++)
	{
		res *= 10;
		res += s[i] - '0';
	}

	if (res > 1000000)
		return -1;

	return res;
	
	

}

int main()
{

	string score;
	cin >> score;
	int len = score.size();
	int res = -1;

	for (int i = 1; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			int num1 = fun(score.substr(0,i)), num2 = fun(score.substr(i,j-i)),
				num3 = fun(score.substr(j,len-j+1));
			
			if (num1 != -1 && num2 != -1 && num3 != -1 && num1 + num2 + num3>res)
				res = num1 + num2 + num3;
			

		}
	}
	
	printf("%d\n", res);
	return 0;
}