//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num=0;
   string s;
   cin>>s;
    for(int i=0;i<n;i++)
    {
     if(s[i+1]==s[i])
      num++;
    }
    cout<<num<<"\n";


    return 0;
}