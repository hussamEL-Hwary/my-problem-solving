//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int getMinDistance(int &x,int &y,vector<pair<int,int>>& shifts,int minDis)
{
     for(int i=0;i<shifts.size();++i)
         {
	int tmpDis=(x-shifts[i].first)*(x-shifts[i].first)+(y-shifts[i].second)*(y-shifts[i].second);
	minDis=min(minDis,tmpDis);
         }
	return minDis;
}

int main() {
	map<char,int>uniqueKeys;
	vector<pair<int,int>>shifts;
	int rows,num,distance,txtsz,result=0;
	string text;
	cin>>rows>>num>>distance;
	char keys[rows][num];
	for(int i=0;i<rows;++i)
	{
	
	   for(int j=0;j<num;++j)
	    {
		
		cin>>keys[i][j];
		if(keys[i][j]!='S'){
		
	            uniqueKeys[keys[i][j]]=(distance+1)*(distance+1);
		
		}else
		{
			pair<int,int>Sfound;
			Sfound.first=i;
			Sfound.second=j;
			shifts.push_back(Sfound);
			
		}
		
        }

		
	}
	
	
	
	
	for(int i=0;i<rows;++i)
	{
		for(int j=0;j<num;++j)
		{
			if(keys[i][j]!='S')
			{
			uniqueKeys[keys[i][j]]=getMinDistance(i,j,shifts,uniqueKeys[keys[i][j]]);	
			}
		}
	}
	
	
	
	cin>>txtsz;
	cin>>text;
	
	for(int i=0;i<txtsz;++i)
	{
		if(islower(text[i])&&uniqueKeys.find(text[i])==uniqueKeys.end())
		{
		   result=-1;
	               break;
		}
		else if(isupper(text[i])&&int(shifts.size())==0)
		{
		   result=-1;
		    break;
			
		}
		else if(isupper(text[i])&&uniqueKeys.find(tolower(text[i]))!=uniqueKeys.end())
		  {
		      int mindis=uniqueKeys[tolower(text[i])];
		      
			if(mindis>(distance*distance))
			  {
			    result++;
			  }
		
		}
		else if(isupper(text[i])&&uniqueKeys.find(tolower(text[i]))==uniqueKeys.end())
		{
		 result=-1;
		 break;	
		}
	
	}
	
	cout<<result;
	
	return 0;
}