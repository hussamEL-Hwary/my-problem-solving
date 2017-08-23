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
   int a,b;

     scanf("%d%d",&a,&b);
     if(a==b)
     {
    	 cout<<-1;
    	 return 0;
     }
     for(int i=0;i<a;i++)
     {
    	 if(i+b>=a)
    		 cout<<i+1<<" ";
    	 else
    		 cout<<(i+1)%(a-b)+1<<" ";

     }



}