//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :https://a2oj.com/p?ID=479
//============================================================================

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        vector<int>scores(n);
        for(int i=0; i<n; ++i)
        {
            cin>>scores[i];
        }

        sort(scores.rbegin(),scores.rend());
        if(scores[m-1]==0)
        {
        while(m-1>=0&&scores[m-1]==0)
        m--;

        }
        else
        {
        while(m<n&&scores[m]==scores[m-1])
        m++;

        }
        cout<<m<<"\n";
    }

    return 0;
}
