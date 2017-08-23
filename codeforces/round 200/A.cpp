//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int num=1;
  int i;
  cin>>i;
    int pre;
    pre=i;
    for(int k=1;k<n;k++)
    {
     int cur;
     cin>>i;
      cur=i;
      if(cur!=pre)
        num++;
      pre=cur;
    }
    cout<<num<<"\n";

    return 0;
}