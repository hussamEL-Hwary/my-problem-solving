//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/61/B
//============================================================================

#include<bits\stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int val;
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	cin >> val;
	string arr[3] = { "", "", "" };
	string test = "012";
	for (int i = 0; i < s1.size(); i++)
	{
		if (isalpha(s1[i]))
			
		arr[0] += tolower(s1[i]);
	}

	for (int i = 0; i < s2.size(); i++)
	{
		if (isalpha(s2[i]))
			
		arr[1] += tolower(s2[i]);
	}

	for (int i = 0; i < s3.size(); i++)
	{
		if (isalpha(s3[i]))
		
		arr[2] += tolower(s3[i]);
	}
	
	for (int i = 0; i < val; i++)
	{
		string input;
		cin >> input;
		string tmp = "";
		for (int i = 0; i < input.size(); i++)
		{
			if (isalpha(input[i]))
				
			tmp += tolower(input[i]);
		}
		bool found = false;
		do{
			string ss = arr[test[0] - '0'] + arr[test[1] - '0'] + arr[test[2] - '0'];
			if (tmp==ss)
			{
				found = true;
				break;
			}
		} while (next_permutation(test.begin(),test.end()));
		
		if (found)
			cout << "ACC\n";
		else
			cout << "WA\n";
		test = "012";
	}

	return 0;
}