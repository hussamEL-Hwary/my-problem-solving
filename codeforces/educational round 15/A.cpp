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

	int n;
	scanf("%d",&n);
	int res=1,p=1,a;
	scanf("%d",&a);
	for(int i=1;i<n;i++)
	{
		int b;
		scanf("%d",&b);
		if(b>a)
		{
			p++;
		}
		else
		{
			res=max(res,p);
			p=1;
		}
		a=b;
	}

res=max(res,p);
printf("%d\n",res);

return 0;

}