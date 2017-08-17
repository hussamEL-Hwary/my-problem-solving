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

int dp[101];

int main() {

int n,sum;
cin>>n>>sum;
int p=0;
while(p<n&&sum)
{
if(sum>9){
	dp[p++]=9;
	sum-=9;
}
else{
	dp[p++]=sum;
sum=0;
}

}

if(sum||dp[0]==0&&n!=1)
{
cout<<-1<<" "<<-1<<"\n";
return 0;
}
string big="";
for(int i=0;i<n;i++)  big+= (dp[i]+'0');

if(dp[n-1])
{
	reverse(dp,dp+n);
}
else if(!dp[n-1]&&n!=1)
{
dp[n-1]=1;
dp[p-1]--;
reverse(dp,dp+n);
}

for(int i=0;i<n;i++) cout<<dp[i];
cout<<" ";

cout<<big<<"\n";

	return 0;
}