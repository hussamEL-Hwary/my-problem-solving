//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :https://a2oj.com/p?ID=478
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
int teams;
cin>>teams;
int Maxres=-1;
string winner="";
while(teams--)
{
string tmpTeam;
int tmpValue;
cin>>tmpTeam>>tmpValue;
if(tmpValue>Maxres)
{
Maxres=tmpValue;
winner=tmpTeam;
}
}
cout<<winner<<"\n";
}


    return 0;
}