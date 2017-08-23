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
    int test,chech;
    cin>>test>>chech;
    int have=0;      int added=0;
    for(int i=0;i<test;i++)
    {
        int fir,sec;
        cin>>fir>>sec;

            for(int j=fir;j<=sec;j++)
            {
             have++;
            }
    }
    bool found=false;
    while(true)
    {
     if(have%chech==0)
        break;
        else
       {
        added++;
        have++;
       }
    }
    cout<<added<<endl;
    return 0;
