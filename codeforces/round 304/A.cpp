//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>

using namespace std;

int main()
{
    int price;    cin>>price;
    int mony;     cin>>mony;
    int iwant;    cin>>iwant;

    int colle=0;
    for(int i=1;i<=iwant;i++)
    {
        colle+=i*price;
    }
    if(colle - mony<0)
        cout<<0<<endl;
    else
        cout<<colle - mony<<endl;



    return 0;
}