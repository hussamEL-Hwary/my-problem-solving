//============================================================================
// Name        :Anton and Classes
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/785/B
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

bool notoverlap(pair<int, int>f, pair<int, int>s)
{
	return (f.first >= s.second&&f.second > s.second) || (s.first >= f.second&&s.second > f.second);
}
int main()
{
	pair<int, int>first_finsh;
	pair<int, int>first_finsh2;
	pair<int, int>last_begin;
	pair<int, int>last_begin2;
	int n,comla=INT_MAX,comla2=-1;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int f, se;
		cin >> f>> se;
		if (se < comla)
		{
			comla = se;
			first_finsh.first = f;
			first_finsh.second = se;
		}
		if (f>comla2)
		{
			comla2 = f;
			first_finsh2.first = f;
			first_finsh2.second = se;
		}
		
	}

	int m, comf = -1,comf2=INT_MAX;
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int f, s;
		cin >> f >> s;
		if (f>comf)
		{
			comf = f;
			last_begin.first = f;
			last_begin.second = s;
		}
		if (s < comf2)
		{
			comf2 = s;
			last_begin2.first = f;
			last_begin2.second = s;
		}
	}
	int fio = 0, laso = 0;
	if (notoverlap(first_finsh, last_begin)&&first_finsh.second<=last_begin.first)  // :(
		fio = abs(comla - comf);
	if (notoverlap(first_finsh2, last_begin2)&&last_begin2.second<=first_finsh2.first)  // :(
		laso = abs(comla2 - comf2);
	
	cout << max(fio, laso)<<"\n";

	return 0;
}
