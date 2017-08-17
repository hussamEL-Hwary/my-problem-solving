//============================================================================
// Name        :Anton and Polyhedrons
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/785/A
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
	int n,res=0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string inp;
		cin >> inp;

		if (inp == "Icosahedron")
			res += 20;
		else if (inp == "Dodecahedron")
			res += 12;
		else if (inp == "Octahedron")
			res += 8;
		else if (inp == "Cube")
			res += 6;
		else if (inp == "Tetrahedron")
			res += 4;

	}
	cout << res << "\n";

	return 0;
}