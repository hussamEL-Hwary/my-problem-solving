//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/problemset/problem/63/B
//============================================================================

#include <iostream>
using namespace std;

int arr[103];

int main() {
	int n, k,res=0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	while(arr[1]!=k)
	{
    int ind=n;
    while(arr[ind]==k&&ind>=1) ind--;
    for(int i=ind;i>=1;i--)
    {
    	int val=arr[i];
    	arr[i]++;
    	while(i-1>=1&&val==arr[i-1]) i--;
    }
    res++;

	}
	cout<<res<<"\n";
	return 0;
}