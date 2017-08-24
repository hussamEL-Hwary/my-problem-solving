//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
using namespace std;

int binarySearch(vector<pair<int,int>> &inp, int &target)
{
	int first=0,last=int(inp.size());
	
	while(first<=last)
	{
		int mid=(first+last)/2;
		if(inp[mid].first==target)
		{
			return inp[mid].second;
		}
		else if(inp[mid].first>target)
		last=mid-1;
		else
		first=mid+1;
	}
	return -1;
}



int main() {

  int sz,queries,foundFromFirst=0,foundFromLast=0;
  map<int,int>searchedBefore;
  cin>>sz;
  
  vector<pair<int,int>>arr(sz);
  for(int i=1;i<=sz;++i)
  {
  	cin>>arr[i-1].first;
  	arr[i-1].second=i;
  }
  
	sort(arr.begin(),arr.end());
	
	cin>>queries;
	for(int i=0;i<queries;++i)
	{
		int num;
		cin>>num;
		if(searchedBefore.find(num)!=searchedBefore.end())
		{
			int position=searchedBefore[num].second
			foundFromFirst+=position;
			foundFromLast +=(sz-position+1);
			
		}
		else
		{
			int position=binarySearch(arr,num);
			foundFromFirst+=position;
			foundFromLast+=(sz-position+1);
			searchedBefore[num]=position;
		}
		
	}

	cout<<foundFromFirst<<" "<<foundFromLast<<"\n";

	return 0;
}