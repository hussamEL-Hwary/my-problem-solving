//============================================================================
// Name        :Anastasia and pebbles
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/789/A
//============================================================================

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector> 
#include <list>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <fstream>
#include <ctime>
#include <cassert>

using namespace std;


int main()
{

	double res = 0.0;
	int n;
	unsigned long long k;
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		int value;
		cin >> value;
		if (value <= k)
			res += 0.5;
		
		else
   		 {
		 	long long muktk = 2 * k;
			res += (value / muktk);
			int tmp = value % muktk;
			if (tmp <= k&&tmp!=0)
				res += 0.5;
			else if (tmp>k&&tmp<muktk)
				res += 1;
		 }
	}
	
	if (res * 2 != int(res) * 2)
		cout << int(res) + 1 << "\n";
	else
		cout << int(res) << "\n";

	return 0;
}