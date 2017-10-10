//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :https://a2oj.com/p?ID=481
//============================================================================

#include<bits/stdc++.h>
#include <iostream>

using namespace std;
const int OO = (int)1e6;
vector<int> BFS(vector<vector<int> > & adj)
{
    vector<int>len(adj.size(),OO);
    queue<int>q;
    q.push(0);
    len[0]=0;
    int dep=0,cur=0,sz=1;
    for(;!q.empty();++dep,sz=q.size())
    {
        while(sz--)
        {
            cur=q.front(),q.pop();

            for(int i=0;i<adj[cur].size();++i)
            {
                if(len[adj[cur][i]]==OO)
                {
                    q.push(adj[cur][i]);
                    len[adj[cur][i]]=dep+1;
                }

            }
        }

    }
    return len;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int users,connections;
       cin>>users>>connections;
       vector<vector<int> >adj(users);
       bool blocked[1003];
        memset(blocked,0,sizeof(blocked));
       for(int i=1;i<users;++i)
       {
           int bval;
           cin>>bval;
           blocked[i]=bval;

       }
       for(int i=0;i<connections;++i)
       {
           int from,to;
           cin>>from>>to;
           if(blocked[from]||blocked[to])
           {
          continue;
           }
           else
           {
            adj[from].push_back(to);
            adj[to].push_back(from);

           }
       }
       vector<int>res=BFS(adj);
       for(int i=1;i<res.size();++i)
       {

           if(res[i]==OO)
            cout<<-1<<" ";
           else
            cout<<res[i]<<" ";
       }
       cout<<"\n";
   }

    return 0;
}