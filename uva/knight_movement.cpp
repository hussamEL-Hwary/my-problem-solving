//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=380
//============================================================================

#include<bits/stdc++.h>
#include <iostream>
#define OO 1e9
using namespace std;

int dx[]={1,1,-1,-1,2,2,-2,-2};
int dy[]={2,-2,2,-2,1,-1,1,-1};

int miniDistance[9][9];

bool isValidMove(int r, int c)
{
 return (r>=0&&r<8)&&(c>=0&&c<8);
}

int knightBFS(int r,int c,int tr,int tc)
{
    memset(miniDistance,-1,sizeof(miniDistance));
    miniDistance[r][c]=0;
    queue<int>moves;
    moves.push(r);moves.push(c);
    while(!moves.empty())
    {
    int cr=moves.front(); moves.pop();
    int cc=moves.front(); moves.pop();

    if(cr==tr&&cc==tc)
        return miniDistance[cr][cc];
    for(int i=0;i<8;++i)
    {
        int nr=cr+dx[i];
        int nc=cc+dy[i];
       if(!isValidMove(nr,nc))
        continue;
       if(miniDistance[nr][nc]==-1)
        {
            miniDistance[nr][nc]=miniDistance[cr][cc]+1;
            moves.push(nr);
            moves.push(nc);
        }

    }

    }

    return OO;
}

int main()
{
    string position1,position2;

	while (cin>>position1&& cin>>position2){
        int minDis=knightBFS(position1[0]-'a',position1[1]-'1',position2[0]-'a',position2[1]-'1');
        cout<<"To get from "+position1+" to "+position2+" takes "<<minDis<<" knight moves.\n";
	}

    return 0;
}