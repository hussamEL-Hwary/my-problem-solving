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


int main()
{
int a,b,c;

cin>>a>>b>>c;



long long r1=a/c,r2=b/c;
 if(a%c!=0)
	r1++;
 if(b%c!=0)
	r2++;
cout<<r1*r2;


return 0;
}