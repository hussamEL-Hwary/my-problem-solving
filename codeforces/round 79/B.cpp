//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/contest/102/problem/B
//============================================================================


#include <iostream>
using namespace std;

int main() {
	
	string inp;
	cin>>inp;
	int num=0,res=0;
	
	if(int (inp.size())>1)
	res++;
	for(int i=0;i<int(inp.size());++i)
	{
		num+=(inp[i]-'0');
		
	}
	
	while(num>9)
	{
		int tmp=num;
		num=0;
		while(tmp)
		{
			num+=tmp%10;
			tmp/=10;
		}
		res++;
		
	}
	
	
	
	cout<<res<<"\n";
	return 0;
}