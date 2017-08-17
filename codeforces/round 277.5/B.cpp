//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>

using namespace std;

int boy[102];
int girl[102];

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int b, g,res=0;
	cin >> b;
	for (int i = 0; i < b; i++) {
		cin >> boy[i];
	}
	cin>>g;
	for (int i = 0; i < g; i++) {
		cin >> girl[i];
	}

	sort(boy,boy+b);
	sort(girl,girl+g);
	int l=b-1,r=g-1;

	while(l>=0&&r>=0)
	{
		if(abs(girl[r]-boy[l])<=1)
		{
			res++;
			r--;
			l--;
		}
		else if(girl[r]>boy[l])
		{
		r--;
		}
		else
			l--;


	}

	cout<<res<<"\n";
	return 0;
}