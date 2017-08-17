//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <bits/stdc++.h>
using namespace std;

struct type{

	int fi,se,thi;
	type():fi(0),se(0),thi(0){}

};

bool taxi(string &s)
{
	char test=s[0];
	for(int i=0;i<s.size();i++)
	{
		if(i==2||i==5)
			continue;
		if(s[i]!=test)
			return false;
	}
	return true;
}

bool pizza(string &s)
{
	if(s[1]<s[0]&&s[3]<s[1]&&s[4]<s[3]&&s[6]<s[4]&&s[7]<s[6])
		return true;
	return false;

}

int main() {

ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin>>n;
vector<string>names(n);
vector<type>cont(n);
int outt=0,outp=0,outg=0;
for(int i=0;i<n;i++)
{
int loop;
cin>>loop;
cin>>names[i];
for(int j=0;j<loop;j++)
{
string val;
cin>>val;

if(taxi(val))
	cont[i].fi++;
else if(pizza(val))
	cont[i].se++;
else
	cont[i].thi++;
}
outt=max(outt,cont[i].fi);
outp=max(outp,cont[i].se);
outg=max(outg,cont[i].thi);


}

string o1="",o2="",o3="";
for(int i=0;i<n;i++)
{
if(cont[i].fi==outt)
{
if(!o1.empty())
	o1+=", "+names[i];
else
	o1+=names[i];
}
if(cont[i].se==outp)
{
if(!o2.empty())
	o2+=", "+names[i];
else
	o2+=names[i];
}
if(cont[i].thi==outg)
{
if(!o3.empty())
	o3+=", "+names[i];
else
	o3+=names[i];
}

}

cout<<"If you want to call a taxi, you should call: "<<o1<<'.'<<"\n";
cout<<"If you want to order a pizza, you should call: "<<o2<<'.'<<"\n";
cout<<"If you want to go to a cafe with a wonderful girl, you should call: "<<o3<<'.'<<"\n";


	return 0;
}