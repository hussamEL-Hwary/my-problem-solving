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

	int x;
	scanf("%d", &x);
	
	vector<string>rat, chw, men, cap;

	while (x--)
	{
		string name,state;
		cin >> name >> state;
		if (state == "rat")
			rat.pb(name);
		else if (state == "woman" || state == "child")
			chw.pb(name);
		else if (state == "man")
			men.pb(name);
		else
			cap.pb(name);

	}

	for (int i = 0; i < sz(rat); i++)
	{
		cout << rat[i] << "\n";
	}

	for (int i = 0; i < sz(chw); i++)
	{
		cout << chw[i] << "\n";
	}
	for (int i = 0; i < sz(men); i++)
	{
		cout << men[i] << "\n";
	}

	for (int i = 0; i < sz(cap); i++)
	{
		cout << cap[i] << "\n";

	}


	/*map<string,int>mp;
	
	
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
	*/
	return 0;
}