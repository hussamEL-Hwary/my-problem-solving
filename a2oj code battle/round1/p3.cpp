//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :https://a2oj.com/p?ID=480
//============================================================================

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int contestan, problms, submations;
        cin >> contestan >> problms >> submations;
        vector<vector<vector<pair<int, int> > > >usrs(contestan+1, vector<vector<pair<int, int> > >(problms+1));
        map<int, vector<pair<int, int> > >mp;
        for (int i = 1; i<submations+1; ++i)
        {
            int t, cid, pid,r;
            cin >> t >> cid >> pid >> r;
            pair<int, int>p;
            p.first = t;
            p.second = r;
            usrs[cid][pid].push_back(p);

        }

        for (int i = 1; i<contestan+1; ++i)
        {
            int totlSolved = 0, totalPenal = 0;

            for (int j = 1; j<problms+1; ++j)
            {

                bool solved = false;
                int penl = 0;
                sort(usrs[i][j].begin(), usrs[i][j].end());
                for (int k = 0; k<usrs[i][j].size(); ++k)
                {
                    if (usrs[i][j][k].second)
                    {
                        penl += usrs[i][j][k].first;
                        solved = true;
                        break;
                    }
                    else
                    {
                        penl += 20;

                    }

                }
                if (solved)
                {
                    totlSolved++;
                    totalPenal += penl;
                }

            }
            pair<int, int>sp;
            sp.first = totalPenal;
            sp.second = i;
            mp[-totlSolved].push_back(sp);
        }

        for (std::map<int,vector<pair<int,int> > >::iterator iter = mp.begin(); iter != mp.end(); ++iter)
        {
            sort(iter->second.begin(),iter->second.end());
            for(int kk=0;kk<iter->second.size();++kk)
            {
            cout<<iter->second[kk].second<<" "<<iter->first*-1<<" "<<iter->second[kk].first<<"\n";

            }
        }



    }


    return 0;
}