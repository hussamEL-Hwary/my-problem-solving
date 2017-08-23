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
	int num;
	scanf("%d", &num);
	string s;
	cin >> s;
	
	if(num>26){
		cout<<-1<<endl;
	return 0;
	}
	sort(s.begin(), s.end());
	s.resize(unique(s.begin(), s.end()) - s.begin());
	
	printf("%d\n", num - s.size());
}