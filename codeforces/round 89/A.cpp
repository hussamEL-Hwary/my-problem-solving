//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string input;
	cin >> input;
	string result = "";
	for (int i = 0; i < int(input.size()); i++)
	{
		
		
			input[i]= tolower(input[i]);
		if (input[i] == 'a' || input[i] == 'o' || input[i] == 'y' || input[i] == 'e' || input[i] == 'u' || input[i] == 'i')
			continue;
		
		
		
		cout << '.' << input[i];

	}
	
}