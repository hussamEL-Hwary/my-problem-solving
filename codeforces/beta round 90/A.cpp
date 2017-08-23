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


int a,b,c;

scanf("%d%d%d",&a,&b,&c);
int x=gcd(a,c);
bool f=0;

while(c-x>0)
{
 c-=x;
  if(!f)
	  {x=gcd(b,c);
	  f=1;

	  }
  else
  {
	x=gcd(a,c);

	f=0;
  }
 }

cout<<f<<"\n";
}