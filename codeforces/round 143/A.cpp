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
   int a,b,c;
   int sum=0;
   for(int i=0;i<n;i++)
   {
     cin>>a>>b>>c;
     if( (a==1&&b==1&&c==1)||(a==1&&b==1) || (a==1&&c==1 )||(c==1&&b==1) )
        sum++;
   }
   cout<<sum<<endl;






    return 0;
}