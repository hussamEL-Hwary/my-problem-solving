//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}


int main()
{


int a,b,c,d;

scanf("%d%d%d%d",&a,&b,&c,&d);
a*=d,b*=c;
if(a>b)
	swap(a,b);

a= b-a;

int div=gcd(a,b);
printf("%d/%d\n",a/div,b/div);



}