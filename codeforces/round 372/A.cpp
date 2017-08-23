//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================


 #include <iostream>

using namespace std;
int arr[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c,res=1;
    cin>>n>>c;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }

for(int i=n-1;i-1>=0;i--)
{
if(arr[i]-arr[i-1]<=c)
res++;
else
break;
}
    cout<<res<<"\n";
    return 0;
}