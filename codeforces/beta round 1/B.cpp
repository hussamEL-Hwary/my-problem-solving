//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


#include <iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool R_flag = false;
bool c_flag = false;
bool d_flag = false;

pair<long long, long long> hamada1(string & Input)
{
	long long valueR = 0;
	long long valueC = 0;
	int i = 1;
	while (isdigit(Input[i]))
	{
		valueR = valueR * 10 + Input[i] - '0';
		i++;
	}
	i++;
	while (i<Input.size())
	{
		valueC = valueC * 10 + Input[i] - '0';
		i++;
	}
	pair<long long, long long>output;
	output.first = valueR;
	output.second = valueC;
	return output;
}
string convert1(long long num)
{
	string output;
	long long i = 0;
	while (num>26)
	{
		if (num % 26 == 0)
		{
			output += char(64 + 26);
			num = num / 26;
			num--;
		}
		else
		{
			output += char(num % 26 + 64);
			num = num / 26;
		}
	}
	output += char(num + 64);
	reverse(output.begin(), output.end());
	return output;
}
/*pair<long long,long long>hamada2(string & Input)
{
pair<int,int>Output;
int i=0;
while(isalpha(Input[i]))
{
Output.first=Output.first*26;
Output.first=Output.first+int(Input[i])-64;
i++;
}
while(i<Input.size())
{
Output.second=Output.second*10;
Output.second=Output.second+Input[i]-'0';
i++;
}
return Output;
}*/
pair<int, int>method2(string &s)
{
	pair<int, int>re = { 0, 0 };
	int i = 0;
	while (isalpha(s[i]))
	{
		re.first *= 26;
		re.first += (int(s[i]) - 64);
		i++;
	}

	while (i<s.size())
	{
		re.second *= 10;
		re.second += (s[i] - '0');
		i++;
	}

	return re;
}


int main()
{
	long long n;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		int cnc = 0;
		string input;
		cin >> input;
		if (input[0] == 'R')
			R_flag = true;
		if (isdigit(input[1]))
			d_flag = true;
		for (int j = 2; j<input.size(); j++)
		{
			if (input[j] == 'C')
				c_flag = true;
		}
		if (R_flag&&d_flag&&c_flag)
		{
			
			pair<long long, long long>H = hamada1(input);
			string ss = convert1(H.second);
			cout << ss << H.first << endl;
		}
		else
		{
			pair<int, int>G = method2(input);
			cout << 'R' << G.second << 'C' << G.first << "\n";
		}
		R_flag = 0;
		d_flag = 0;
		c_flag = 0;
	}
	return 0;
}