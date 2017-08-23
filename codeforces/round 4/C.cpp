//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<set>

#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(), (c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 

using namespace std;

int main()
{
	map<string,int>mp;
	
	
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		string s;
		cin >> s;
		if (!mp[s])
		{
			mp[s] ++;
			cout << "OK" << endl;
		}
		else
		{
			cout << s << mp[s] << endl;
			mp[s]++;
		}
	}
	
	return 0;
}