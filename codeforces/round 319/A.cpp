//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int val;    scanf("%d",&val);
    int tar;    scanf("%d",&tar);
    int have=0;

       for(int i=1;i<=val;i++)
       {
        if(tar%i==0&&tar/i<=val)

           have++;
       }

       printf("%d\n",have);



    return 0;
}