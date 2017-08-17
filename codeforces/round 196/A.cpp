//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int dp[55];
int main() {
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++)   cin>>dp[i];
sort(dp,dp+m);
int def=dp[n-1]-dp[0];
int left=0,right=n-1;
while(right<m)
{
def=min(def,dp[right]-dp[left]);
right++;
left++;
}

 cout<<def<<"\n";


	return 0;
}