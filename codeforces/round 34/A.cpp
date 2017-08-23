//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
#include<algorithm>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())	  

int main()
{

	int num;
	scanf("%d", &num);
	vi v(num);
	int x1=0, x2=1;
	
	
	for (int i = 0; i < num; i++)
	{
		cin >> v[i];
	}

	int ab = abs(v[x1] - v[x2]);

	for (int i = 1; i < num - 1; i++)
	{
		if (abs(v[i] - v[i + 1]) < ab)
		{
			x1 = i, x2 = i + 1;
			ab = abs(v[i] - v[i + 1]);
		}
	}


	if (abs(v[0] - v[num - 1]) < ab)
	{
		x1 = num-1, x2 = 0;
	}

	cout << x1 + 1 << " " << x2 + 1 << endl;

	return 0;

}