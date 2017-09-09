//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :http://www.spoj.com/problems/TOE1/
//============================================================================

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

char grid[3][3];

int winner(char player)
{
	int w=0;
	for(int i=0;i<3;++i)
	{
		bool r=true,c=true;
		for(int j=0;j<3;++j)
		{
			r&=(grid[i][j]==player);
			c&=(grid[j][i]==player);
		}
		
		if(r)
		w++;
		if(c)
		w++;
	}
	return w;
}

int digonal(char c)
{
	int res=0;
	if(grid[0][0]==c&&grid[1][1]==c&&grid[2][2]==c)
	res++;
	if(grid[0][2]==c&&grid[1][1]==c&&grid[2][0]==c)
	res++;
	
	return res;
}


int main() {
	int test;
	cin>>test;
	while(test--)
	{
		string ans="no";
		int x=0,o=0;
		for(int i=0;i<3;++i)
		{
			for(int j=0;j<3;++j)
			{
				cin>>grid[i][j];
				if(grid[i][j]=='X')
					x++;
				else if(grid[i][j]=='O')
				o++;
			}
		}
		
		int winningx=winner('X');
		int winningo=winner('O');
		winningx+=digonal('X');
		winningo+=digonal('O');
		
		if(winningo==1&&winningx==0)
		{
			if(x-o==0)
			ans="yes";
		}
		else if(winningo==0&&winningx==1)
		{
			if(x-o==1)
			ans="yes";
		}
		else if((x-o==1||x-o==0)&&winningx==0&&winningo==0)
		ans="yes";
		if(x==5&&o==4&&winningx==2&&winningo==0)
		ans="yes";
		cout<<ans<<"\n";
		
		
	}
	
	
	
	return 0;
}