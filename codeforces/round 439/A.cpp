//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/contest/869/problem/A
//============================================================================

#include<bits/stdc++.h>
#include <iostream>

using namespace std;


map<int,bool>numbers;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string out[]={"Karen","Koyomi"};
    vector<int>k,r;
    int n,res=0;
    cin>>n;
    for(int i=0;i<n;++i)
    {
    int val;
    cin>>val;
    numbers[val]=1;
    k.push_back(val);
    }

     for(int i=0;i<n;++i)
    {
    int val;
    cin>>val;
    numbers[val]=1;
    r.push_back(val);
    }


    for(int i=0;i<n;++i)
    {
        for(int j=i;j<n;++j)
        {
        int tmp1=k[i]^r[j];
        int tmp2=k[j]^r[i];
        if(numbers.find(tmp1)!=numbers.end())
        {
        res++;
        }

        if(i!=j&&numbers.find(tmp2)!=numbers.end())
        {
        res++;
        }

        }
    }
        cout<<out[res&1];
        return 0;
}