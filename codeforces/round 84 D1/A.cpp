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
	int n;
	scanf("%d", &n);
	int se7 = 0, f4 = 0;


	while (n>=0)
	{
		if (n % 7 == 0)
		{
			se7 = n / 7;
			n = 0;
			break;
		}

		n -= 4;
		f4++;

	}

	if (n < 0)
		printf("%d\n",-1);
	else
	{
		for (int i = 0; i < f4; i++)
			cout<< '4';
		for (int j = 0; j < se7; j++)
			cout<<'7';

		cout << "\n";
	}

	return 0;
}