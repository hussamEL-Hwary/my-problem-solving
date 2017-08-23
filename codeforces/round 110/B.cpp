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

int arr[110];
double pi=3.1415926536;


int main() {
int n;
double res=0;
 pi=3.1415926536;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
cin>>arr[i];
}

sort(arr,arr+n);

reverse(arr,arr+n);

for(int i=0;i<n;i+=2)
{
res=res+pi*(arr[i]*arr[i]-arr[i+1]*arr[i+1]);
}


cout<<res;


return 0;
}