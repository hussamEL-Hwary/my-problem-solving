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



int arr[100];
int main() {

	int sz;
cin>>sz;
for(int i=0;i<sz;i++)
{
cin>>arr[i];

}

if(arr[sz-1]==0)
{
cout<<"UP\n";
return 0;
}

if(arr[sz-1]==15)
{
cout<<"DOWN\n";
return 0;
}
if(sz==1)
{
cout<<-1<<"\n";
return 0;
}



if(arr[sz-2]>arr[sz-1])
{
cout<<"DOWN\n";
}
else
	cout<<"UP\n";
	return 0;
}