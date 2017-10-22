//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/contest/869/problem/B
//============================================================================

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    if(b-a>=10)
    {
        cout<<"0\n";
    }
    else
    {
        short res=1;
        for(long long i=a+1; i<=b; ++i)
            res=(1LL*res*(i%10))%10;
        cout<<res<<"\n";
    }

    return 0;
}