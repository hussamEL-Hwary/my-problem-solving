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
int n,x,y,mx;
x=y=mx=0;
cin>>n;
for(int i=0;i<n;i++)
{
  int inp;
  cin>>inp;
  if(inp) x++;
  if(!inp)
  {
	  y++;
	mx=y>mx?y:mx;

  }
  else if(y)
	  y--;

}
if(!mx)
	mx--;

cout<<x+mx<<"\n";

return 0;
}