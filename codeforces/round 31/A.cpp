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
#define all(c) (c).begin(), (c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())	 

int main()
{

	int num;
	scanf("%d", &num);
	vi val(num);

	for (int i = 0; i < num; i++)
	{
		cin >> val[i];
	}

	

	for (int i = 0; i < num ; i++)
	{
		
		for (int j = 0; j < num ; j++)
		{
			if (i == j)
				continue;
			for (int k = 0; k < num; k++)
			{
				if ( k == j)
					continue;
				if (val[i] + val[j] == val[k])
				{
					cout << k + 1 <<" "<< j+1 <<" " << i + 1 << "\n";
					return 0;
				}
				
			}
		}
		

	}

	cout << -1 << endl;
return 0;

}