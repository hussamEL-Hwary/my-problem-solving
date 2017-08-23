//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	scanf("%d", &size);
	vector<int>vec(size);
	for (int i = 0; i < size; i++)
	{
		cin >> vec[i];
	}
	
	sort(vec.rbegin(), vec.rend());
	int counter = 1;
	int sumdiv = accumulate(vec.begin(), vec.end(),0)/2;
	int sum = vec[0];
	while (sum<=sumdiv&&counter<size)
	{
		sum += vec[counter];
		counter++;
	}
	cout << counter << endl;

	return 0;
}