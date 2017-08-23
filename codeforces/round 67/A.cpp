//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	string input;
	string arr[10];
	vector<int>v;
	int fis=0;
	cin>>input;
	for(int i=0;i<10;i++)
	{
	cin>>arr[i];
	}
	string i1=input.substr(0,10);
	string i2=input.substr(10,10);
	string i3=input.substr(20,10);
	string i4=input.substr(30,10);
	string i5=input.substr(40,10);
	string i6=input.substr(50,10);
	string i7=input.substr(60,10);
	string i8=input.substr(70,10);
	string sub[10]={i1,i2,i3,i4,i5,i6,i7,i8};
	for(int j=0;j<8;j++)
    {
    for(int k=0;k<10;k++)
    {
        if(sub[j]==arr[k])
        {
            v.push_back(k);
            break;
        }

    }

    }

for(int m=0;m<8;m++)
{
    cout<<v[m];

}
cout<<endl;
	return 0;
}