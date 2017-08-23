//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits\stdc++.h>
using namespace std;


int main() {


	long long num;
	cin>>num;
	if(num<3)
	{
		cout<<-1<<"\n";
		return 0;
	}

	if(num&1)
	{


		cout<<num*num/2<<" "<<num*num/2+1<<"\n";
	}

	else
	{

		cout<<num*num/4-1<<" "<<num*num/4+1<<"\n";
	}
	return 0;
}