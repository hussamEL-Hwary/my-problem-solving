//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://www.spoj.com/problems/POUR1/
//============================================================================


#include <iostream>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}

int solution(int a,int b,int c)
{
	int a1=a,b1=0, move=1;
	while(a1!=c&&b1!=c)
	{
	int add=min(a1,b-b1);
	a1-=add;
	b1+=add;
	move++;
	if(a1==c||b1==c)
	break;
	if(a1==0)
	{
		a1=a;
		move++;
	}
	if(b1==b){
		b1=0;
		move++;
	}
	
	}
	
	return move;
}

int main() {
	
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	cin>>a>>b>>c;
	int res=0;
	if(c>a&&c>b)
	res=-1;
	else if(c%gcd(a,b)!=0)
	res=-1;
	else
	{
		res=min(solution(a,b,c),solution(b,a,c));
	}
	cout<<res<<"\n";
		
	}
	
	
	return 0;
}
