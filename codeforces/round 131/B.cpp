//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/214/B
//============================================================================

#include <iostream>
using namespace std;

int freq[10];

int main() {
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;
		freq[val]++;
		sum += val;
	}
	if (!freq[0]) {
		cout << -1 << "\n";
		return 0;
	}

	if (sum % 3) {
		for (int i = 0; i < 10; i++) {

			if (sum % 3 == i % 3 && freq[i]) {
				sum -= i;
				freq[i]--;
				break;
			}
		}

	}

	for(int j=0;j<2;j++)
	{
		if(sum%3!=0)
		{
			for(int i=0;i<10;i++)
			{
				if(i%3>0&&freq[i])
				{
					sum-=i;
					freq[i]--;
				}
			}
		}
	}

	if (sum == 0)
		freq[0] = 1;

	for (int i = 9; i >= 0; i--) {
		while (freq[i]--)
			cout << i;
	}
	cout << "\n";
	return 0;
}
