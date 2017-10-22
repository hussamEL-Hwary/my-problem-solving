//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://codeforces.com/contest/242/problem/C
//============================================================================

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()

{

    std::ios_base::sync_with_stdio(false);
    set<pair<int,int>>points;
    int x0,y0,x1,y1,n;
    cin>>x0>>y0>>x1>>y1>>n;
    for(int i=0;i<n;++i)
    {
    int r,a,b;
    cin>>r>>a>>b;

    for(int j=a;j<=b;++j)
    {
    points.insert({r,j});
    }

    }

    map<pair<int,int>,int>len;
    queue<pair<int,int>>q;
    pair<int,int>start={x0,y0};
    q.push(start);
    pair<int,int>cur;
    int dep=0,sz=1;
    int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
	int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
    for(;!q.empty();++dep,sz=q.size())
    {

    while(sz--)
    {
    cur=q.front(),q.pop();

    for(int i=0;i<8;++i)
    {
    int nx=cur.first+dx[i];
    int ny=cur.second+dy[i];
    pair<int,int>newPoint={nx,ny};

    if(points.count(newPoint)==0||len.count(newPoint)!=0)
        continue;

     q.push(newPoint);
     len[newPoint]=dep+1;
     if(newPoint.first==x1&&newPoint.second==y1)
     {
     cout<<dep+1;
     return 0;
     }


    }


    }

    }



    cout<<-1;

    return 0;
}
