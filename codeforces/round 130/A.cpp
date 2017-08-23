//============================================================================
// Name        :
// Author      : hussam
// Version     :
// Copyright   :
// Description :
//============================================================================

#include <iostream>
#include<string>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int flag = 0;
	char s[205];
	string a = "";
	scanf("%s", s);
	for (int i = 0; i<strlen(s);) {
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
			if (flag == 0) a += ' ', i += 3, flag = 1;
			else i += 3;
		}
		else a += s[i], i++, flag = 0;
	}
	cout << a;
	return 0;
}