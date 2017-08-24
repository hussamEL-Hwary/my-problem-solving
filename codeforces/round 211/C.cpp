//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	string input,result="";
	cin>>input;
	int last =0;
	for(int i=0;i<int(input.size());++i)
	{
		char c=input[i];
		int sz=1;
		while(i+1<int(input.size()) && input[i+1]==c )
		{
			++i;
			++sz;
			
		}
		
		if(last<2)
		{
			for(int j=0;j<sz&&j<2;++j)
			{
				result+=c;
			}
			last=min(sz,2);
		}
		else
		{
			last=1;
			result+=c;
		}
		
	}
	
	cout<<result<<"\n";
	
	return 0;
}