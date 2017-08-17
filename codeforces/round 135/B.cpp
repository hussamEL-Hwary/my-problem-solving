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

int arr[25];
int main()
{
   unsigned long long inp,red;
   cin>>inp>>red;
   //scanf("%l64d%l64d",&inp,&red);
   //cout<<inp<<" "<<red;
   string res;
  int index=24;
   unsigned long long coun=1, min_num=inp-red;

   while(min_num)
   {
	   arr[index--]=min_num%10;
	   min_num/=10;

   }
   index=24;
   int val=arr[index];
   while((9-val)*coun<=red)
   {
	   arr[index]=9;
	   red-=(9-val)*coun;
	   coun*=10;
	   val=arr[--index];
   }

   arr[index]+=(red/coun);
   index=0;
   while(arr[index]==0) index++;

	for(int i=index;i<25;i++)
	{
	//cout<<arr[i];
			res+=(arr[i]+'0');
	}
   cout<<res<<"\n";

return 0;
}