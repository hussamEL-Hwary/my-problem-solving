//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
using namespace std;
int maxx(int a,int m){

	if (a == 0){
		return m;
	}
	else{
		return maxx(a / 10, max(m, a % 10));


	}

}
int Base(int x, int y,int base,int r=0,int counter =0){
	if (x == 0 and y==0){
		if (r)counter++;
		return counter;
	}

	counter++;
	r= (x % 10 + y % 10 + r) / (base );

	//cout << x << endl;
	return Base(x / 10, y/10,base,r, counter);

}
int main(){
	int x, y;
	 
		cin >> x >> y;
	 
	int base = max(maxx(y, 0), maxx(x, 0)) + 1;
 		cout << Base(x,y, base,0, 0);
	 
	//system("PAUSE");
}